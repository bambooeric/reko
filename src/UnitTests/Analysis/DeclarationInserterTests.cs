#region License
/* 
 * Copyright (C) 1999-2017 John K�ll�n.
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

using Reko.Analysis;
using Reko.Core;
using Reko.Core.Lib;
using NUnit.Framework;
using System;
using System.Linq;
using System.Collections.Generic;

namespace Reko.UnitTests.Analysis
{
	[TestFixture]
	public class DeclarationInserterTests
	{
		private Procedure proc;
		private BlockDominatorGraph doms;
		private SsaIdentifierCollection ssaIds;

		[Test]
		public void DeciWeb()
		{
			Build(new DiamondMock().Procedure);
			DeclarationInserter deci = new DeclarationInserter(ssaIds, doms);
			Web web = new Web();
			SsaIdentifier r_1 = ssaIds.Where(s => s.Identifier.Name == "r_1").Single();
            SsaIdentifier r_3 = ssaIds.Where(s => s.Identifier.Name == "r_3").Single();
            SsaIdentifier r_4 = ssaIds.Where(s => s.Identifier.Name == "r_4").Single();
			web.Add(r_1);
			web.Add(r_3);
			web.Add(r_4);
			deci.InsertDeclaration(web);
			Assert.AreEqual("word32 r_1", proc.ControlGraph.Blocks[2].Statements[0].Instruction.ToString());
		}

		private void Build(Procedure proc)
		{
			this.proc = proc;
			this.doms = proc.CreateBlockDominatorGraph();

			SsaTransform sst = new SsaTransform(
                new ProgramDataFlow(), 
                proc, 
                null, 
                doms,
                new HashSet<RegisterStorage>());
			
			this.ssaIds = sst.SsaState.Identifiers;
		}
	}
}
