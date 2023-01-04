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
using Reko.Core.Expressions;
using Reko.Core.Machine;
using Reko.Core.Types;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Arch.Arm.AArch64
{
    public partial class A64Rewriter
    {
        private static PrimitiveType MakeReal(DataType dt)
        {
            return PrimitiveType.Create(Domain.Real, dt.BitSize);
        }

        private static PrimitiveType MakeInteger(Domain domain, DataType dt)
        {
            return PrimitiveType.Create(domain, dt.BitSize);
        }

        private DataType MakeOperandType(MachineOperand mop, Domain domain = 0)
        {
            if (mop is VectorRegisterOperand vrop)
                return MakeArrayType(vrop, domain);
            var bitsize = mop.Width.BitSize;
            if (domain == 0)
                return PrimitiveType.CreateWord(bitsize);
            else
                return PrimitiveType.Create(domain, bitsize);
        }

        private ArrayType MakeArrayType(MachineOperand mop, Domain domain = 0)
        {
            var arrayBitsize = mop.Width.BitSize;
            var elemBitsize = Bitsize((mop is VectorRegisterOperand vector)
                ? vector.ElementType
                : instr.VectorData);
            var celem = arrayBitsize / elemBitsize;
            DataType elemType;
            if (domain == 0)
                elemType = PrimitiveType.CreateWord(elemBitsize);
            else
                elemType = PrimitiveType.Create(domain, elemBitsize);
            return new ArrayType(elemType, celem);
        }

        private PrimitiveType? ElementDataType(DataType dt)
        {
            if (dt is ArrayType at)
                return (PrimitiveType) at.ElementType;
            else
                return null;
        }

        private static int Bitsize(VectorData data)
        {
            switch (data)
            {
            case VectorData.I8: return 8;
            case VectorData.I16: return 16;
            case VectorData.I32: return 32;
            case VectorData.I64: return 64;
            case VectorData.F16: return 16;
            case VectorData.F32: return 32;
            case VectorData.F64: return 64;
            case VectorData.I128: return 128;
            }
            return 0;
        }

        private void RewriteFabs()
        {
            //$TODO: #include <math.h>
            var dst = RewriteOp(instr.Operands[0]);
            var src = RewriteOp(instr.Operands[1]);
            var dtSrc = MakeReal(src.DataType);
            var dtDst = MakeReal(dst.DataType);
            var tmp = binder.CreateTemporary(dtSrc);
            m.Assign(tmp, src);
            var fn = dtSrc.BitSize == 32 ? "fabsf" : "fabs";
            m.Assign(dst, host.Intrinsic(fn, false, dtDst, tmp));

        }

        private void RewriteFadd()
        {
            RewriteMaybeSimdBinary(m.FAdd, "__fadd_{0}", Domain.Real);
        }

        private void RewriteFcmp()
        {
            var left = RewriteOp(instr.Operands[0]);
            var right = RewriteOp(instr.Operands[1]);
            NZCV(m.Cond(m.FSub(left, right)));
        }

        private void RewriteFcsel()
        {
            var eTrue = RewriteOp(instr.Operands[1]);
            var eFalse = RewriteOp(instr.Operands[2]);
            var dst = RewriteOp(instr.Operands[0]);
            var cond = ((ConditionOperand)instr.Operands[3]).Condition;
            m.Assign(dst, m.Conditional(dst.DataType, TestCond(cond), eTrue, eFalse));
        }

        private void RewriteFcvt()
        {
            if (instr.Operands[0] is VectorRegisterOperand)
            {
                throw new NotImplementedException();
            }
            var dst = RewriteOp(instr.Operands[0]);
            var src = RewriteOp(instr.Operands[1]);
            var dtDst = MakeReal(dst.DataType);
            var dtSrc = MakeReal(src.DataType);
            m.Assign(dst, m.Convert(src, dtSrc, dtDst));
        }

        private Expression RewriteFcvt(Expression src, Domain domain, string f32name, string f64name)
        {
            //$TODO: #include <math.h>
            var dtSrc = MakeReal(src.DataType);
            var dtDst = MakeInteger(domain, instr.Operands[0].Width);
            var fn = dtSrc.BitSize == 32 ? f32name : f64name;
            src = host.Intrinsic(fn, false, dtSrc, src);
            return m.Convert(src, dtSrc, dtDst);
        }

        private Expression RewriteFcvt(
            Expression src, 
            Domain domain,
            IntrinsicProcedure fnSingle,
            IntrinsicProcedure fnDouble)
        {
            //$TODO: #include <math.h>
            var dtSrc = MakeReal(src.DataType);
            var dtDst = MakeInteger(domain, instr.Operands[0].Width);
            var fn = dtSrc.BitSize == 32 ? fnSingle : fnDouble;
            src = m.Fn(fn, src);
            return m.Convert(src, dtSrc, dtDst);
        }

        private void RewriteFcvt(
            IntrinsicProcedure fnSingle,
            IntrinsicProcedure fnDouble,
            IntrinsicProcedure fnVector)
        {
            RewriteMaybeSimdUnary(
                n => RewriteFcvt(n, Domain.SignedInt, fnSingle, fnDouble),
                fnVector,
                Domain.Real);
        }

        private void RewriteFcvta(Domain domain)
        {
            RewriteMaybeSimdUnary(
                n => RewriteFcvt(n, domain, "roundf", "round"),
                "__round_{0}",
                Domain.Real);
        }

        private void RewriteFcvtm(Domain domain)
        {
            RewriteMaybeSimdUnary(
                n => RewriteFcvt(n, domain, "floorf", "floor"),
                "__floor_{0}",
                Domain.Real);
        }

        private void RewriteFcvtn(Domain domain)
        {
            RewriteMaybeSimdUnary(
                n => RewriteFcvt(n, domain, "roundf", "round"),
                "__nearest_{0}",
                Domain.Real);
        }

        private void RewriteFcvtp(Domain domain)
        {
            RewriteMaybeSimdUnary(
                n => RewriteFcvt(n, domain, "ceilf", "ceil"),
                "__ceil_{0}", Domain.Real);
        }

        private void RewriteFcvtz(Domain domain)
        {
            RewriteMaybeSimdUnary(
                n => RewriteFcvt(n, domain, "truncf", "trunc"),
                "__trunc_{0}", Domain.Real);
        }

        private void RewriteIntrinsicFBinary(string name32, string name64)
        {
            RewriteMaybeSimdBinary(
                (a,b) =>
                {
                    DataType dt;
                    string fname;
                    if (instr.Operands[0].Width.BitSize == 64)
                    {
                        dt = PrimitiveType.Real64;
                        fname = name64;
                    }
                    else
                    {
                        dt = PrimitiveType.Real32;
                        fname = name32;
                    }
                    return host.Intrinsic(fname, false, dt, a, b);
                },
                "__max_{0}", Domain.Real);
        }

        private void RewriteIntrinsicFTernary(IntrinsicProcedure intrinsic)
        {
            var src1 = RewriteOp(1);
            var src2 = RewriteOp(2);
            var src3 = RewriteOp(3);
            var dst = RewriteOp(0);
            IntrinsicProcedure fname;
            if (instr.Operands[0].Width.BitSize == 64)
            {
                fname = intrinsic.MakeInstance(PrimitiveType.Real64);
            }
            else
            {
                fname = intrinsic.MakeInstance(PrimitiveType.Real32);
            }
            m.Assign(dst, m.Fn(fname, src1, src2, src3));
        }

        private void RewriteFmov()
        {
            if (instr.Operands[0] is VectorRegisterOperand v && v.Index >= 0)
            {
                RewriteVectorElementStore(v);
            }
            else
            {
                RewriteMaybeSimdUnary(n => n, "__fmov_{0}", Domain.Real);
            }
        }

        private void RewriteFmul()
        {
            RewriteMaybeSimdBinary(m.FMul, "__fmul_{0}", Domain.Real);
        }

        private void RewriteFnmul()
        {
            RewriteBinary((a, b) => m.FNeg(m.FMul(a, b)));
        }

        private void RewriteFsqrt()
        {
            //$TODO: require "<math.h>"
            var src = binder.CreateTemporary(MakeReal(instr.Operands[1].Width));
            var dst = RewriteOp(instr.Operands[0]);
            m.Assign(src, RewriteOp(instr.Operands[1]));
            var fn = src.DataType.BitSize == 32 ? "sqrtf" : "sqrt";
            m.Assign(dst, host.Intrinsic(fn, false, src.DataType, src));
        }
    }
}
