﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
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
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Reko.Core.Code;
using Reko.Core.Expressions;
using Reko.Core.Operators;

namespace Reko.Arch.X86
{
    public class X86FrameApplicationBuilder : FrameApplicationBuilder
    {
        public X86FrameApplicationBuilder(
            IntelArchitecture arch,
            IStorageBinder binder, 
            CallSite site,
            Expression callee,
            bool ensureVariables)
            : base(arch, binder, site, callee, ensureVariables)
        {
        }

        public override Expression VisitFpuStackStorage(FpuStackStorage fpu)
        {
            Expression e = binder.EnsureRegister(Registers.Top);
            if (fpu.FpuStackOffset != 0)
            {
                var op = fpu.FpuStackOffset > 0 ? Operator.IAdd : Operator.ISub;
                e = new BinaryExpression(Operator.IAdd, e.DataType, e, Constant.Create(e.DataType, fpu.FpuStackOffset));
            }
            return new MemoryAccess(Registers.ST, e, fpu.DataType);
        }
    }
}
