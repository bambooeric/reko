/* 
 * Copyright (C) 1999-2007 John K�ll�n.
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

using Decompiler.Core;
using System;
using System.Collections;
using System.ComponentModel;
using System.IO;
using System.Drawing;
using System.Windows.Forms;

namespace Decompiler.WindowsGui.Forms
{
	public class LoadPage : PhasePage
	{
		private IProcessorArchitecture arch;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.TextBox txtAddress;
		private Decompiler.WindowsGui.Controls.MemoryControl memctl;
		private System.Windows.Forms.TextBox txtDisassembly;
		private System.Windows.Forms.Splitter splitter1;
		private System.Windows.Forms.Panel panel1;

		/// <summary> 
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public LoadPage()
		{
			// This call is required by the Windows.Forms Form Designer.
			InitializeComponent();
		}

		/// <summary> 
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if(components != null)
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Component Designer generated code
		/// <summary> 
		/// Required method for Designer support - do not modify 
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.label1 = new System.Windows.Forms.Label();
			this.txtAddress = new System.Windows.Forms.TextBox();
			this.memctl = new Decompiler.WindowsGui.Controls.MemoryControl();
			this.txtDisassembly = new System.Windows.Forms.TextBox();
			this.splitter1 = new System.Windows.Forms.Splitter();
			this.panel1 = new System.Windows.Forms.Panel();
			this.panel1.SuspendLayout();
			this.SuspendLayout();
			// 
			// label1
			// 
			this.label1.Location = new System.Drawing.Point(8, 8);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(48, 16);
			this.label1.TabIndex = 1;
			this.label1.Text = "&Address:";
			// 
			// txtAddress
			// 
			this.txtAddress.Location = new System.Drawing.Point(56, 8);
			this.txtAddress.Name = "txtAddress";
			this.txtAddress.TabIndex = 2;
			this.txtAddress.Text = "";
			// 
			// memctl
			// 
			this.memctl.BytesPerRow = 16;
			this.memctl.Dock = System.Windows.Forms.DockStyle.Fill;
			this.memctl.Font = new System.Drawing.Font("Lucida Console", 10F);
			this.memctl.ImageMap = null;
			this.memctl.Location = new System.Drawing.Point(0, 32);
			this.memctl.Name = "memctl";
			this.memctl.ProgramImage = null;
			this.memctl.SelectedAddress = null;
			this.memctl.Size = new System.Drawing.Size(440, 228);
			this.memctl.TabIndex = 3;
			this.memctl.TopAddress = null;
			this.memctl.WordSize = 1;
			this.memctl.SelectionChanged += new System.EventHandler(this.memctl_SelectionChanged);
			// 
			// txtDisassembly
			// 
			this.txtDisassembly.Dock = System.Windows.Forms.DockStyle.Bottom;
			this.txtDisassembly.Font = new System.Drawing.Font("Lucida Console", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.txtDisassembly.Location = new System.Drawing.Point(0, 268);
			this.txtDisassembly.Multiline = true;
			this.txtDisassembly.Name = "txtDisassembly";
			this.txtDisassembly.ReadOnly = true;
			this.txtDisassembly.Size = new System.Drawing.Size(440, 60);
			this.txtDisassembly.TabIndex = 4;
			this.txtDisassembly.Text = "";
			this.txtDisassembly.WordWrap = false;
			this.txtDisassembly.Resize += new System.EventHandler(this.txtDisassembly_Resize);
			// 
			// splitter1
			// 
			this.splitter1.Dock = System.Windows.Forms.DockStyle.Bottom;
			this.splitter1.Location = new System.Drawing.Point(0, 260);
			this.splitter1.Name = "splitter1";
			this.splitter1.Size = new System.Drawing.Size(440, 8);
			this.splitter1.TabIndex = 5;
			this.splitter1.TabStop = false;
			// 
			// panel1
			// 
			this.panel1.Controls.Add(this.txtAddress);
			this.panel1.Controls.Add(this.label1);
			this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
			this.panel1.Location = new System.Drawing.Point(0, 0);
			this.panel1.Name = "panel1";
			this.panel1.Size = new System.Drawing.Size(440, 32);
			this.panel1.TabIndex = 6;
			// 
			// LoadPage
			// 
			this.BackColor = System.Drawing.SystemColors.Control;
			this.Controls.Add(this.memctl);
			this.Controls.Add(this.panel1);
			this.Controls.Add(this.splitter1);
			this.Controls.Add(this.txtDisassembly);
			this.Name = "LoadPage";
			this.Size = new System.Drawing.Size(440, 328);
			this.panel1.ResumeLayout(false);
			this.ResumeLayout(false);

		}
		#endregion


		public override void BrowserItemSelected(object item)
		{
			ImageMapSegment segment = (ImageMapSegment) item;
			memctl.TopAddress = segment.Address;
			memctl.SelectedAddress = segment.Address;
		}

		[Browsable(false)]
		public IProcessorArchitecture ProcessorArchitecture
		{
			get { return arch; }
			set { arch = value; }
		}

		public void DumpAssembler()
		{
			if (arch == null || ProgramImage == null || memctl.SelectedAddress == null)
			{
				txtDisassembly.Text = "";
				return;
			}
			int lines = (txtDisassembly.Height + txtDisassembly.Font.Height - 1) / txtDisassembly.Font.Height;
			if (lines < 1)
				lines = 1;
			StringWriter writer = new StringWriter();
			Dumper dumper = arch.CreateDumper();
			Disassembler dasm = arch.CreateDisassembler(ProgramImage, memctl.SelectedAddress);
			while (lines != 0)
			{
				dumper.DumpAssemblerLine(ProgramImage, dasm, true, true, writer);
				--lines;
			}
			txtDisassembly.Text = writer.ToString();
		}

		public void PopulateBrowser(ImageMap imageMap, TreeView browser)
		{
			browser.Nodes.Clear();
			foreach (ImageMapSegment seg in imageMap.Segments.Values)
			{
				TreeNode node = new TreeNode(seg.Name);
				node.Tag = seg;
				browser.Nodes.Add(node);
			}
		}

		public override void Populate(DecompilerDriver decompiler, TreeView browser)
		{
			Architecture = decompiler.Program.Architecture;
			memctl.ProgramImage = decompiler.Program.Image;
			memctl.ImageMap = decompiler.Program.ImageMap;
			txtDisassembly.Text = "";
			PopulateBrowser(decompiler.Program.ImageMap, browser);
		}


		[Browsable(false)]
		public ProgramImage ProgramImage
		{
			get { return memctl.ProgramImage; }
			set { memctl.ProgramImage = value; }
		}

		[Browsable(false)]
		public IProcessorArchitecture Architecture
		{
			get { return arch; }
			set { arch = value; }
		}

		// Event handlers

		private void memctl_SelectionChanged(object sender, System.EventArgs e)
		{
			DumpAssembler();
		}

		private void txtDisassembly_Resize(object sender, System.EventArgs e)
		{
			DumpAssembler();
		}
	}
}
