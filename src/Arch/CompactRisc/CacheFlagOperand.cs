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

using Reko.Core.Machine;
using Reko.Core.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Arch.CompactRisc
{
    public class CacheFlagOperand : AbstractMachineOperand
    {
        public CacheFlagOperand(CacheFlag flag) : base(PrimitiveType.Byte)
        {
            this.Flag = flag;
        }

        public CacheFlag Flag { get; }

        protected override void DoRender(MachineInstructionRenderer renderer, MachineInstructionRendererOptions options)
        {
            renderer.WriteChar('[');
            var sep = "";
            if (Flag.HasFlag(CacheFlag.I))
            {
                renderer.WriteChar('i');
                sep = ",";
            }
            renderer.WriteString(sep);
            if (Flag.HasFlag(CacheFlag.D))
            {
                renderer.WriteChar('d');
                sep = ",";
            }
            renderer.WriteString(sep);
            if (Flag.HasFlag(CacheFlag.U))
            {
                renderer.WriteChar('u');
            }
            renderer.WriteChar(']');
        }
    }

    [Flags]
    public enum CacheFlag
    {
        I = 1,
        D = 2,
        U = 4,
    }
}
