#region License
/* 
 * Copyright (C) 1999-2022 John Källén.
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

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Arch.Fujitsu.F2MC16FX
{
    public enum Mnemonic
    {
        Invalid,
        nyi,

        adb,
        add,
        addc,
        addcw,
        adddc,
        addl,
        addsp,
        addw,
        and,
        andl,
        andw,
        asl,
        asr,
        asrl,
        asrw,
        bbc,
        bbs,
        bc,
        bge,
        bgt,
        bhi,
        ble,
        bls,
        blt,
        bn,
        bnc,
        bnt,
        bnv,
        bnz,
        bp,
        bra,
        bt,
        bv,
        bz,
        call,
        callp,
        callv,
        cbne,
        clrb,
        cmp,
        cmpl,
        cmpw,
        cmr,
        cwbne,
        dbnz,
        dec,
        decl,
        decw,
        div,
        divu,
        divuw,
        divw,
        dtb,
        dwbnz,
        ext,
        extw,
        filsi,
        filswi,
        inc,
        incl,
        incw,
        @int,
        int9,
        inte,
        intp,
        jctx,
        jmp,
        jmpp,
        link,
        lsl,
        lsll,
        lslw,
        lsr,
        lsrl,
        lsrw,
        mov,
        movb,
        movea,
        movl,
        movn,
        movsd,
        movsi,
        movswd,
        movswi,
        movw,
        movx,
        mul,
        mulu,
        muluw,
        mulw,
        ncc,
        neg,
        negw,
        nop,
        not,
        notw,
        nrml,
        or,
        orl,
        orw,
        pcb,
        popw,
        pushw,
        ret,
        reti,
        retp,
        rolc,
        rorc,
        sbbs,
        sceqd,
        sceqi,
        scweqd,
        scweqi,
        sdb,
        setb,
        sub,
        subc,
        subcw,
        subdc,
        subl,
        subw,
        swap,
        swapw,
        unlink,
        wbtc,
        wbts,
        xch,
        xchw,
        xor,
        xorl,
        xorw,
        zext,
        zextw,
    }
}
