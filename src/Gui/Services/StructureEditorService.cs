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
using Reko.Core.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Gui.Services
{
    public class StructureEditorService : ViewService, IStructureEditorService
    {
        public StructureEditorService(IServiceProvider services)
            : base(services)
        {
        }

        public void Show(Program program)
        {
            var paneFactory = this.Services.RequireService<IWindowPaneFactory>();
            ShowWindow(
                nameof(BaseAddressFinderService),
                "Structure Editor",
                this,
                () => paneFactory.CreateStructureEditorPane(program));
        }
    }
}
