#region License
/* 
 * Copyright (C) 1999-2016 John K�ll�n.
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

using Reko.Arch.X86;
using Reko.Core;
using Reko.Core.Lib;
using Reko.Analysis;
using Reko.UnitTests.Mocks;
using Reko.UnitTests.TestCode;
using NUnit.Framework;
using System;
using System.Diagnostics;
using System.IO;
using Rhino.Mocks;
using Reko.Core.Types;

namespace Reko.UnitTests.Analysis
{
	[TestFixture]
	public class DataFlowAnalysisTests : AnalysisTestBase
	{
		private DataFlowAnalysis dfa;
        private MockRepository mr;

        [SetUp]
        public void Setup()
        {
            mr = new MockRepository();
        }

        protected override void RunTest(Program program, TextWriter writer)
		{
            IImportResolver importResolver = mr.Stub<IImportResolver>();
            importResolver.Replay();
			dfa = new DataFlowAnalysis(program, importResolver, new FakeDecompilerEventListener());
			dfa.AnalyzeProgram();
			foreach (Procedure proc in program.Procedures.Values)
			{
				ProcedureFlow flow = dfa.ProgramDataFlow[proc];
				writer.Write("// ");
				flow.Signature.Emit(proc.Name, FunctionType.EmitFlags.ArgumentKind|FunctionType.EmitFlags.LowLevelInfo, writer);
				flow.Emit(program.Architecture, writer);
				proc.Write(false, writer);
				writer.WriteLine();
			}
		}

		[Test]
		public void DfaAsciiHex()
		{
			RunFileTest_x86_real("Fragments/ascii_hex.asm", "Analysis/DfaAsciiHex.txt");
		}

		[Test]
        [Ignore("Stack arrays are not supported yet")]
		public void DfaAutoArray32()
		{
			RunFileTest32("Fragments/autoarray32.asm", "Analysis/DfaAutoArray32.txt");
		}

		[Test]
		public void DfaFactorial()
		{
			RunFileTest_x86_real("Fragments/factorial.asm", "Analysis/DfaFactorial.txt");
		}

		[Test]
		public void DfaFactorialReg()
		{
			RunFileTest_x86_real("Fragments/factorial_reg.asm", "Analysis/DfaFactorialReg.txt");
		}

		[Test]
		public void DfaFibonacci()
		{
			RunFileTest32("Fragments/multiple/fibonacci.asm", "Analysis/DfaFibonacci.txt");
		}

		[Test]
		public void DfaFpuOps()
		{
			RunFileTest_x86_real("Fragments/fpuops.asm", "Analysis/DfaFpuOps.txt");
		}

		[Test]
		public void DfaMutualTest()
		{
			RunFileTest_x86_real("Fragments/multiple/mutual.asm", "Analysis/DfaMutualTest.txt");
		}

		[Test]
		public void DfaChainTest()
		{
			RunFileTest_x86_real("Fragments/multiple/chaincalls.asm", "Analysis/DfaChainTest.txt");
		}

		[Test]
		public void DfaGlobalHandle()
		{
            Given_FakeWin32Platform(mr);
            this.platform.Stub(p => p.LookupGlobalByName(null, null)).IgnoreArguments().Return(null);
            mr.ReplayAll();
            RunFileTest32("Fragments/import32/GlobalHandle.asm", "Analysis/DfaGlobalHandle.txt");
		}

		[Test]
		public void DfaMoveChain()
		{
			RunFileTest_x86_real("Fragments/move_sequence.asm", "Analysis/DfaMoveChain.txt");
		}

		[Test]
		public void DfaNegsNots()
		{
			RunFileTest_x86_real("Fragments/negsnots.asm", "Analysis/DfaNegsNots.txt");
		}

		[Test]
		public void DfaPreservedAlias()
		{
			RunFileTest_x86_real("Fragments/multiple/preserved_alias.asm", "Analysis/DfaPreservedAlias.txt");
		}

		[Test]
        public void DfaReadFile()
		{
			RunFileTest_x86_real("Fragments/multiple/read_file.asm", "Analysis/DfaReadFile.txt");
		}

		[Test]
		public void DfaStackPointerMessing()
		{
			RunFileTest_x86_real("Fragments/multiple/stackpointermessing.asm", "Analysis/DfaStackPointerMessing.txt");
		}

		[Test]
		public void DfaStringInstructions()
		{
			RunFileTest_x86_real("Fragments/stringinstr.asm", "Analysis/DfaStringInstructions.txt");
		}

		[Test]
		public void DfaSuccessiveDecs()
		{
			RunFileTest_x86_real("Fragments/multiple/successivedecs.asm", "Analysis/DfaSuccessiveDecs.txt");
		}

		[Test]
		public void DfaWhileBigHead()
		{
			RunFileTest_x86_real("Fragments/while_bighead.asm", "Analysis/DfaWhileBigHead.txt");
		}

		[Test]
		public void DfaWhileGoto()
		{
			RunFileTest_x86_real("Fragments/while_goto.asm", "Analysis/DfaWhileGoto.txt");
		}

		[Test]
		public void DfaRecurseWithPushes()
		{
			RunFileTest_x86_real("Fragments/multiple/recurse_with_pushes.asm", "Analysis/DfaRecurseWithPushes.txt");
		}

        [Test]
        public void DfaReg00007()
        {
            RunFileTest_x86_real("Fragments/regressions/r00007.asm", "Analysis/DfaReg00007.txt");
        }

        [Test]
		public void DfaReg00009()
		{
			RunFileTest_x86_real("Fragments/regressions/r00009.asm", "Analysis/DfaReg00009.txt");
		}

		[Test]
        public void DfaReg00010()
		{
			RunFileTest_x86_real("Fragments/regressions/r00010.asm", "Analysis/DfaReg00010.txt");
		}

        [Test]
        public void DfaReg00011()
        {
            RunFileTest_x86_real("Fragments/regressions/r00011.asm", "Analysis/DfaReg00011.txt");
        }

        [Test]
        public void DfaReg00015()
        {
            RunFileTest_x86_real("Fragments/regressions/r00015.asm", "Analysis/DfaReg00015.txt");
        }

        [Test]
        public void DfaFstsw()
        {
           var program = RewriteCodeFragment(@"
                fcomp   dword ptr [bx]
                fstsw   ax
                test    ah,0x41
                jpo     done
                mov     word ptr [si],4
done:   
                ret
");
           SaveRunOutput(program, RunTest, "Analysis/DfaFstsw.txt");
        }

        [Test]
        public void DfaManyIncrements()
        {
            RunFileTest(new ManyIncrements(), "Analysis/DfaManyIncrements.txt");
        }

        [Test]
        public void DfaReg00001()
        {
            var program = RewriteCodeFragment32(UnitTests.Fragments.Regressions.Reg00001.Text);
            SaveRunOutput(program, RunTest, "Analysis/DfaReg00001.txt");
        }

        [Test]
        [Category(Categories.UnitTests)]
        public void DfaReg00282()
        {
            RunFileTest_x86_real("Fragments/regressions/r00282.asm", "Analysis/DfaReg00282.txt");
        }

        [Test]
        [Category(Categories.UnitTests)]
        public void DfaUnsignedDiv()
        {
            var m = new ProcedureBuilder();
            var r1 = m.Register(1);
            var r2 = m.Register(2);
            var r2_r1 = m.Frame.EnsureSequence(r2.Storage, r1.Storage, PrimitiveType.Word64);
            var tmp = m.Frame.CreateTemporary(r2_r1.DataType);
            m.Assign(r1, m.LoadDw(m.Word32(0x123400)));
            m.Assign(r2_r1, m.Seq(m.Word32(0), r1));
            m.Assign(tmp, r2_r1);
            m.Assign(r1, m.UDiv(tmp, m.Word32(42)));
            m.Store(m.Word32(0x123404), r1);
            m.Return();

            RunFileTest(m, "Analysis/DfaUnsignedDiv.txt");
        }
	}
}
