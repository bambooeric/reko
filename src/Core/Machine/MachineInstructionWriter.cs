#region License
/* 
 * Copyright (C) 1999-2020 John Källén.
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

using Reko.Core.Expressions;
using Reko.Core.NativeInterface;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Reko.Core.Machine
{
    /// <summary>
    /// Used to render machine instructions into text. The abstraction
    /// offers opportunities to perform syntax highlighting etc.
    /// </summary>
    public interface MachineInstructionWriter : INativeInstructionWriter
    {
        /// <summary>
        /// The current platform we're in. May be null, so make sure
        /// you test for that before dereferencing.
        /// </summary>
        IPlatform? Platform { get;  }

        /// <summary>
        /// The address of the current instruction being written.
        /// </summary>
        Address Address { get; set; }

        void WriteAddress(string formattedAddress, Address addr);
        void WriteFormat(string fmt, params object[] parms);
    }

    [Flags]
    [NativeInterop]
    public enum MachineInstructionWriterFlags
    {
        None = 0,
        ExplicitOperandSize = 1,
        ResolvePcRelativeAddress = 2,
    }


    /// <summary>
    /// Describes options to control the rendering of assembly language instructions.
    /// </summary>
    public class MachineInstructionWriterOptions
    {
        public MachineInstructionWriterOptions(
            string? syntax = "",
            MachineInstructionWriterFlags flags = MachineInstructionWriterFlags.None,
            string? operandSeparator = ",")
        {
            this.Syntax = syntax;
            this.Flags = flags;
            this.OperandSeparator = operandSeparator;
        }

        /// <summary>
        /// Select a particular output syntax by name, if supported.
        /// </summary>
        /// <remarks>
        /// Each processor architecture may have different output syntaxes, including
        /// a default syntax which should be the one used in the processor manufacturer's 
        /// manuals. A null value for this property chooses that default syntax.
        /// </remarks>
        public string? Syntax { get; }

        public MachineInstructionWriterFlags Flags { get; }

        /// <summary>
        /// Use this string to specify how assembly language operands shoud be separated.
        /// </summary>
        public string? OperandSeparator { get; }

        public static MachineInstructionWriterOptions Default { get; } = new MachineInstructionWriterOptions(
            syntax: "",
            flags: MachineInstructionWriterFlags.None,
            operandSeparator: ",");
    }


    /// <summary>
    /// "Dumb" renderer that renders machine instructions as simple text.
    /// </summary>
    public class StringRenderer : MachineInstructionWriter
    {
        private readonly StringBuilder sb;

        public StringRenderer(Address addr) 
        {
            this.Address = addr;
            sb = new StringBuilder();
        }

        public StringRenderer(IPlatform platform, Address addr)
        {
            this.Platform = platform;
            this.Address = addr;
            sb = new StringBuilder();
        }

        public IPlatform? Platform { get; private set; }
        public Address Address { get; set; }

        /// <summary>
        /// This renderer ignores annotations
        /// </summary>
        /// <param name="annotation"></param>
        public void AddAnnotation(string annotation)
        {
        }

        public void WriteMnemonic(string sMnemonic)
        {
            sb.Append(sMnemonic);
        }

        public void Tab()
        {
            sb.Append('\t');
        }

        public void WriteAddress(string formattedAddress, Address addr)
        {
            sb.Append(formattedAddress);
        }

        public void WriteAddress(string formattedAddress, ulong uAddr)
        {
            WriteAddress(formattedAddress, Address.Ptr64(uAddr));
        }

        public void WriteChar(char c)
        {
            sb.Append(c);
        }

        public void WriteString(string s)
        {
            sb.Append(s);
        }

        public void WriteUInt32(uint u)
        {
            sb.Append(u);
        }

        public void WriteFormat(string fmt, params object[] parms)
        {
            sb.AppendFormat(fmt, parms);
        }

        public override string ToString()
        {
            return sb.ToString();
        }
    }
}
