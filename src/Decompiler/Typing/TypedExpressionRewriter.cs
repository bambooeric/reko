#region License
/* 
 * Copyright (C) 1999-2023 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using Reko.Core.Code;
using Reko.Core.Expressions;
using Reko.Core.Operators;
using Reko.Core.Services;
using Reko.Core.Types;
using System;
using System.Diagnostics;
using System.IO;
using System.Linq;

namespace Reko.Typing
{
    /// <summary>
    /// Rewrites all the expressions in the program based on the type information provided.
    /// </summary>
    /// <remarks>
    /// It's important that all Visit*(subclass-of-expression) methods preserve the 
    /// <see cref="Expression.TypeVariable"/> property when new expressions are created.
    /// </remarks>
    public class TypedExpressionRewriter : InstructionTransformer
    {
        private readonly Program program;
        private readonly TypeStore store;
        private readonly DataTypeComparer compTypes;
        private readonly TypedConstantRewriter tcr;
        private readonly Unifier unifier;
        private DataType? dereferencedType;
        private Expression? basePtr;
        private Statement? stmCur;
        private readonly DecompilerEventListener eventListener;

        public TypedExpressionRewriter(Program program, TypeStore store, DecompilerEventListener eventListener)
        {
            this.program = program;
            this.store = store;
            this.eventListener = eventListener;
            this.compTypes = new DataTypeComparer();
            this.tcr = new TypedConstantRewriter(program, store, eventListener);
            this.unifier = new Unifier();
        }

        public void RewriteProgram(Program program)
        {
            int cProc = program.Procedures.Count;
            int i = 0;
            foreach (Procedure proc in program.Procedures.Values)
            {
                eventListener.Progress.ShowProgress("Rewriting expressions.", i++, cProc);
                RewriteFormals(proc.Signature);
                foreach (Statement stm in proc.Statements)
                {
                    if (eventListener.IsCanceled())
                        return;
                    try
                    {
                        stmCur = stm;
                        stm.Instruction = stm.Instruction.Accept(this);
                    }
                    catch (Exception ex)
                    {
                        Debug.Print("Exception in TypedExpressionRewriter.RewriteProgram: {0} ({1})\r\n{2}",
                            proc, ex.Message, ex.StackTrace);
                        // reset flags after error
                        dereferencedType = null;
                        basePtr = null;
                    }
                }
            }
        }

        private void RewriteFormals(FunctionType sig)
        {
            if (!sig.HasVoidReturn)
                sig.ReturnValue.DataType = store.GetTypeVariable(sig.ReturnValue).DataType;
            if (sig.Parameters != null)
            {
                foreach (Identifier formalArg in sig.Parameters)
                {
                    if (store.TryGetTypeVariable(formalArg, out var tvParameter))
                        formalArg.DataType = tvParameter.DataType;
                }
            }
        }

        public override Instruction TransformAssignment(Assignment a)
        {
            return MakeAssignment(a.Dst, a.Src);
        }

        private Instruction MakeAssignment(Expression dst, Expression src)
        {
            src = src.Accept(this);
            var tvDst = store.GetTypeVariable(dst);
            dst = dst.Accept(this);
            var dtSrc = DataTypeOf(src);
            var dtDst = DataTypeOf(dst);
            if (!TypesAreCompatible(dtSrc, dtDst))
            {
                UnionType? uDst = dtDst.ResolveAs<UnionType>();
                UnionType? uSrc = dtSrc.ResolveAs<UnionType>();
                if (uDst != null)
                {
                    // ceb = new ComplexExpressionBuilder(dtDst, dtDst, dtSrc, null, dst, null, 0);
                    tvDst.DataType = dtDst;
                    tvDst.OriginalDataType = dtSrc;
                    store.SetTypeVariable(dst, tvDst); //$REVIEW: looks fishy.
                    var ceb = new ComplexExpressionBuilder(program, store, null, dst, null, 0);
                    dst = ceb.BuildComplex(null);
                }
                else if (uSrc != null)
                {
                    //var ceb = new ComplexExpressionBuilder(dtSrc, dtSrc, dtDst, null, src, null, 0);
                    //src = ceb.BuildComplex(false);
                    src = new Cast(dtDst, src);
                }
                else
                {
                    Debug.Print("{2} [{0}] = {3} [{1}] not supported.", dtDst, dtSrc, dst, src);
                    src = new Cast(dtDst, src);
                }
            }
            if (dst is Identifier idDst)
                return new Assignment(idDst, src);
            else
                return new Store(dst, src);
        }

        public override Instruction TransformCallInstruction(CallInstruction ci)
        {
            var exp = Rewrite(ci.Callee, VoidType.Instance);
            return new SideEffect(new Application(exp, VoidType.Instance));
        }

        public override Instruction TransformDeclaration(Declaration decl)
        {
            base.TransformDeclaration(decl);
            decl.Identifier.DataType = store.GetTypeVariable(decl.Identifier).DataType;
            return decl;
        }

        public override Instruction TransformStore(Store store)
        {
            return MakeAssignment(store.Dst, store.Src);
        }

        public override Instruction TransformSideEffect(SideEffect side)
        {
            var instr = base.TransformSideEffect(side);
            return instr;
        }

        public Expression Rewrite(Expression expression, DataType? dereferencedType)
        {
            var oldDereferenced = this.dereferencedType;
            this.dereferencedType = dereferencedType;
            var exp = expression.Accept(this);
            this.dereferencedType = oldDereferenced;
            return exp;
        }

        public Expression RewriteComplexExpression(Expression complex, Expression? index, int offset, DataType? dereferencedType)
        {
            if (index is Constant cOther)
            {
                //$REVIEW: changing this to:
                // offset += cOther.ToInt32() causes a regression.
                // This needs further investigation.
                offset += (int) cOther.ToUInt32();
                index = null;
            }
            var ceb = new ComplexExpressionBuilder(program, store, basePtr, complex, index, offset);
            return ceb.BuildComplex(dereferencedType);
        }

        public override Expression VisitApplication(Application appl)
        {
            return base.VisitApplication(appl);
        }

        public override Expression VisitArrayAccess(ArrayAccess acc)
        {
            if (acc.Array is BinaryExpression bin &&
                bin.Operator.Type == OperatorType.IAdd &&
                bin.Right is Constant c)
            {
                // (x + C)[...]
                var arrayPtr = Rewrite(bin.Left, null);
                var index = Rewrite(acc.Index, null);
                return RewriteComplexExpression(
                    arrayPtr, index, c.ToInt32(), acc.DataType);
            }
            else
            {
                // (x)[...]
                var arrayPtr = Rewrite(acc.Array, null);
                var index = Rewrite(acc.Index, null);
                return RewriteComplexExpression(
                    arrayPtr, index, 0, acc.DataType);
            }
        }

        public override Expression VisitBinaryExpression(BinaryExpression binExp)
        {
            var left = Rewrite(binExp.Left, null);
            var right = Rewrite(binExp.Right, null);

            if (binExp.Operator.Type == OperatorType.IAdd)
            {
                if (DataTypeOf(left).IsComplex)
                {
                    if (DataTypeOf(right).IsComplex)
                        throw new TypeInferenceException(
                            "Both left and right sides of a binary expression can't be complex types.{0}{1}: {2} vs {3}.",
                            Environment.NewLine, binExp,
                            DataTypeOf(left),
                            DataTypeOf(right));
                    return RewriteComplexExpression(left, right, 0, dereferencedType);
                }
                else if (DataTypeOf(right).IsComplex)
                {
                    return RewriteComplexExpression(right, left, 0, dereferencedType);
                }
                if (dereferencedType is not null)
                {
                    return RewriteComplexExpression(left, right, 0, dereferencedType);
                }
            }
            var binOp = binExp.Operator;
            binOp = binOp.Type switch
            {
                OperatorType.SMod => Operator.IMod,
                OperatorType.Uge => Operator.Ge,
                OperatorType.Ugt => Operator.Gt,
                OperatorType.Ule => Operator.Le,
                OperatorType.Ult => Operator.Lt,
                OperatorType.UMul => Operator.IMul,
                OperatorType.UMod => Operator.IMod,
                OperatorType.USub => Operator.ISub,
                OperatorType.Shr => Operator.Sar,
                _ => binOp,
            };
            var tvBinExp = store.GetTypeVariable(binExp);
            var binExpNew = new BinaryExpression(binOp, binExp.DataType, left, right);
            store.SetTypeVariable(binExpNew, tvBinExp);
            store.SetTypeVariableExpression(tvBinExp, stmCur?.Address, binExpNew);
            if (dereferencedType is not null)
                return RewriteComplexExpression(binExpNew, null, 0, dereferencedType);
            return binExpNew;
        }

        private DataType DataTypeOf(Expression exp)
        {
            return store.TryGetTypeVariable(exp, out var tv)
                ? tv.DataType
                : exp.DataType;
        }

        public override Expression VisitAddress(Address addr)
        {
            return tcr.Rewrite(addr, basePtr, dereferencedType);
        }

        public override Expression VisitConstant(Constant c)
        {
            return tcr.Rewrite(c, basePtr, dereferencedType);
        }

        public override Expression VisitMemoryAccess(MemoryAccess access)
        {
            var oldBase = this.basePtr;
            this.basePtr = null;
            var ea = Rewrite(access.EffectiveAddress, access.DataType);
            this.basePtr = oldBase;
            return ea;
        }

        public override Expression VisitMkSequence(MkSequence seq)
        {
            var newSeq = seq.Expressions.Select(e => Rewrite(e, null)).ToArray();
            if (newSeq.Length == 2)
            {
                var head = newSeq[0];
                var tail = newSeq[1];
                var dtHead = DataTypeOf(head);
                if (dtHead is Pointer || (dtHead.Domain == Domain.Selector))
                {
                    if (seq.Expressions[1] is Constant c)
                    {
                        // reg:CCCC => reg->fldCCCC
                        return RewriteComplexExpression(head, null, c.ToInt32(), dereferencedType);
                    }
                    else
                    {
                        var oldBase = this.basePtr;
                        this.basePtr = head;
                        Expression exp = RewriteComplexExpression(
                            tail,
                            null,
                            0,
                            dereferencedType);
                        this.basePtr = oldBase;
                        return exp;
                    }
                }
                else
                {
                }
            }
            var newSeq2 = new MkSequence(seq.DataType, newSeq);
            store.SetTypeVariable(newSeq2, store.GetTypeVariable(seq));
            return newSeq2;
        }

        public override Expression VisitSegmentedAccess(SegmentedAccess access)
        {
            var oldBase = this.basePtr;
            this.basePtr = null;
            var basePtr = Rewrite(access.BasePointer, null);
            Expression result;
            if (access.EffectiveAddress is Constant cEa)
            {
                uint uOffset = cEa.ToUInt32();
                result = RewriteComplexExpression(
                    basePtr, Constant.UInt32(uOffset), 0, access.DataType);
            }
            else
            {
                this.basePtr = basePtr;
                result = Rewrite(access.EffectiveAddress, access.DataType);
            }
            store.SetTypeVariable(result, store.GetTypeVariable(access));
            this.basePtr = oldBase;
            return result;
        }

        public override Expression VisitSlice(Slice slice)
        {
            var exp = base.VisitSlice(slice);
            if (exp is Slice newSlice && newSlice.Offset == 0)
            {
                //$REVIEW: here we convert SLICE(xxx, yy, 0) to the cast (yy) xxx.
                // Should SLICE(xxx, yy, nn) be cast to (yy) (xxx >> nn) as well?
                var newCast = new Cast(newSlice.DataType, newSlice.Expression);
                store.SetTypeVariable(newCast, store.GetTypeVariable(slice));
                return newCast;
            }
            return exp;
        }

        public override Expression VisitConversion(Conversion conversion)
        {
            var exp = conversion.Expression.Accept(this);
            return new Cast(conversion.DataType, exp);
        }

        private bool TypesAreCompatible(DataType dtSrc, DataType dtDst)
        {
            if (compTypes.Compare(dtSrc, dtDst) == 0)
                return true;
            return unifier.AreCompatible(dtSrc, dtDst);
        }

        public override Expression VisitUnaryExpression(UnaryExpression unary)
        {
            var uNew = base.VisitUnaryExpression(unary);
            var tv = store.GetTypeVariable(unary);
            store.SetTypeVariable(uNew, tv);
            //$TODO: SetTypeVariableExpression shouldn't be needed, SetTypeVariable should do it.
            store.SetTypeVariableExpression(tv, stmCur?.Address, uNew);
            return uNew;
        }
    }
}
