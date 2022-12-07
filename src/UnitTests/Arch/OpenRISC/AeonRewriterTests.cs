using NUnit.Framework;
using Reko.Arch.OpenRISC;
using Reko.Core;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.UnitTests.Arch.OpenRISC
{
    [TestFixture]
    public class AeonRewriterTests : RewriterTestBase
    {
        private readonly AeonArchitecture arch;
        private readonly Address addrLoad;

        public AeonRewriterTests()
        {
            Reko.Core.Machine.Decoder.trace.Level = System.Diagnostics.TraceLevel.Verbose;
            this.arch = new AeonArchitecture(CreateServiceContainer(), "aeon", new());
            this.addrLoad = Address.Ptr32(0x0010_0000);
        }

        public override IProcessorArchitecture Architecture => arch;
        public override Address LoadAddress => addrLoad;

        [Test]
        public void AeonRw_l_add__()
        {
            Given_HexString("8CE5");
            AssertCode(     // l.add?	r7,r5
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r7 = r7 + r5");
        }

        [Test]
        public void AeonRw_l_addi__()
        {
            Given_HexString("9C3C");
            AssertCode(     // l.addi?	r1,-0x4
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r1 = r1 - 4<i32>");
        }

        [Test]
        public void AeonRw_l_addi()
        {
            Given_HexString("1C21EC");
            AssertCode(     // l.addi	r1,r1,0xEC
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r1 = r1 - 20<i32>");
        }

        [Test]
        public void AeonRw_l_and()
        {
            Given_HexString("44E734");
            AssertCode(     // l.and	r7,r7,r6
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r7 & r6");
        }

        [Test]
        public void AeonRw_l_andi()
        {
            Given_HexString("54E301");
            AssertCode(     // l.andi	r7,r3,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r3 & 1<32>");
        }

        [Test]
        public void AeonRw_l_bf()
        {
            Given_HexString("2003E9");
            AssertCode(     // l.bf	00333DEC
                "0|T--|00100000(3): 1 instructions",
                "1|T--|if (f) branch 001000FA");
        }

        [Test]
        public void AeonRw_ble__i__()
        {
            Given_HexString("248415");
            AssertCode(     // ble?i?	r4,0x1,00354F36
                "0|T--|00100000(3): 1 instructions",
                "1|T--|if (r4 <= 1<32>) branch 00100005");
        }

        [Test]
        public void AeonRw_l_blti__()
        {
            Given_HexString("D0 88 FF 3E");
            AssertCode(     // l.blti? r4,0x8,002F4942
                "0|T--|00100000(4): 1 instructions",
                "1|T--|if (r4 < 8<32>) branch 000FFFE7");
        }

        [Test]
        public void AeonRw_beqi__()
        {
            Given_HexString("2061E0");
            AssertCode(     // beqi?	r3,0x0,00100078
                "0|T--|00100000(3): 1 instructions",
                "1|T--|if (r3 == 0<32>) branch 00100078");
        }

        [Test]
        public void AeonRw_bt_trap()
        {
            Given_HexString("8001");
            AssertCode(     // bt.trap
                "0|L--|00100000(2): 1 instructions",
                "1|L--|bt_trap()");
        }

        [Test]
        public void AeonRw_entri__()
        {
            Given_HexString("5E9338");
            AssertCode(     // entri?	r20,0x99
                "0|L--|00100000(3): 1 instructions",
                "1|L--|entri__(r20, 0x99<32>)");
        }

        [Test]
        public void AeonRw_l_invalidate_line()
        {
            Given_HexString("F4030007");
            AssertCode(     // l.invalidate.line	(r3)
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__invalidate_line(&Mem0[r3:word32], 0<32>)");
        }

        [Test]
        public void AeonRw_l_j()
        {
            Given_HexString("93C5");
            AssertCode(     // l.j	0x3C5
                "0|T--|00100000(2): 1 instructions",
                "1|T--|goto 000FFFC5");
        }

        [Test]
        public void AeonRw_l_jr()
        {
            Given_HexString("8529");
            AssertCode(     // l.jr	r9,r9
                "0|R--|00100000(2): 1 instructions",
                "1|R--|return (0,0)");
        }

        [Test]
        public void AeonRw_l_lbz()
        {
            Given_HexString("F0 C7 1E EC");
            AssertCode(     // l.lbz?\tr6,0x1EEC(r7)
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v3 = Mem0[r7 + 7916<i32>:byte]",
                "2|L--|r6 = CONVERT(v3, byte, word32)");
        }

        [Test]
        public void AeonRw_l_lhz()
        {
            Given_HexString("08C301");
            AssertCode(     // l.lhz	r6,(r3)
                "0|L--|00100000(3): 2 instructions",
                "1|L--|v3 = Mem0[r3:uint16]",
                "2|L--|r6 = CONVERT(v3, uint16, word32)");
        }

        [Test]
        public void AeonRw_l_lwz__()
        {
            Given_HexString("0CE302");
            AssertCode(     // l.lwz?	r7,(r3)
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = Mem0[r3:word32]");
        }

        [Test]
        public void AeonRw_l_mfspr()
        {
            Given_HexString("C0A4000F");
            AssertCode(     // l.mfspr	r5,r4,0x0
                "0|L--|00100000(4): 1 instructions",
                "1|L--|r5 = __move_from_spr(r4, 0<32>)");
        }

        [Test]
        public void AeonRw_l_movhi()
        {
            Given_HexString("C0EFFFE1");
            AssertCode(     // l.movhi	r7,0x7FFF
                "0|L--|00100000(4): 1 instructions",
                "1|L--|r7 = 0x7FFF0000<32>");
        }

        [Test]
        public void AeonRw_l_movhi__()
        {
            Given_HexString("046989");
            AssertCode(     // l.movhi?	r3,0x989
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = 0x9890000<32>");
        }

        [Test]
        public void AeonRw_l_mtspr()
        {
            Given_HexString("C060011D");
            AssertCode(     // l.mtspr	r0,r3,0x11
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__move_to_spr(0<32>, r3, 0x11<32>)");
        }

        [Test]
        public void AeonRw_mov__()
        {
            Given_HexString("8AE5");
            AssertCode(     // mov?	r23,r5
                "0|L--|00100000(2): 1 instructions",
                "1|L--|mov__(r23, r5)");
        }

        [Test]
        public void AeonRw_movi__()
        {
            Given_HexString("98 DF");
            AssertCode(     // l.movi? r6,0x1F
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r6 = 0xFFFFFFFF<32>");
        }

        [Test]
        public void AeonRw_l_or__()
        {
            Given_HexString("44E325");
            AssertCode(     // l.or?	r7,r3,r4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r3 | r4");
        }

        [Test]
        public void AeonRw_l_ori()
        {
            Given_HexString("506401");
            AssertCode(     // l.ori	r3,r4,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = r4 | 1<32>");
        }

        [Test]
        public void AeonRw_l_ori_zero()
        {
            Given_HexString("506001");
            AssertCode(     // l.ori	r3,r0,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = 1<32>");
        }


        [Test]
        public void AeonRw_l_sll__()
        {
            Given_HexString("4CAC24");
            AssertCode(     // l.sll?	r5,r12,r4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r5 = r12 << r4");
        }


        [Test]
        public void AeonRw_l_slli__()
        {
            Given_HexString("4C6320");
            AssertCode(     // l.slli?	r3,r3,0x4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = r3 << 4<i32>");
        }

        [Test]
        public void AeonRw_l_sfgtui()
        {
            Given_HexString("5C641B");
            AssertCode(     // l.sfgtui	r3,0x20
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r3 >u 0x20<32>");
        }

        [Test]
        public void AeonRw_l_jal()
        {
            Given_HexString("E4000A70");
            AssertCode(     // l.jal?	00100A70
                "0|T--|00100000(4): 1 instructions",
                "1|T--|call 00100538 (0)");
        }

        [Test]
        public void AeonRw_l_sb()
        {
            Given_HexString("F8 EA 36 D8");
            AssertCode(     // l.sb 0x36D8(r10),r7
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v3 = SLICE(r7, byte, 0)",
                "2|L--|Mem0[r10 + 14040<i32>:byte] = v3");
        }

        [Test]
        public void AeonRw_l_sh()
        {
            Given_HexString("EC 67 34 5B");
            AssertCode(     // l.sh? 0x345A(r7),r3
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v3 = SLICE(r3, word16, 0)",
                "2|L--|Mem0[r7 + 13402<i32>:word16] = v3");
        }

        [Test]
        public void AeonRw_l_srai()
        {
            Given_HexString("4C A7 0A");
            AssertCode(     // l.srai?\tr5,r7,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r5 = r7 >> 1<i32>");
        }

        [Test]
        public void AeonRw_l_sw()
        {
            Given_HexString("0D41FC");
            AssertCode(     // l.sw	-0x4(r1),r10
                "0|L--|00100000(3): 1 instructions",
                "1|L--|Mem0[r1 - 4<i32>:word32] = r10");
        }

        [Test]
        public void AeonRw_l_sw__0()
        {
            Given_HexString("180308");
            AssertCode(     // l.sw?	0x8(r3),r0
                "0|L--|00100000(3): 1 instructions",
                "1|L--|Mem0[r3 + 8<i32>:word32] = 0<32>");
        }


        [Test]
        public void AeonRw_l_srl__()
        {
            Given_HexString("4D6B3D");
            AssertCode(     // l.srl?	r11,r11,r7
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r11 = r11 >>u r7");
        }


        [Test]
        public void AeonRw_l_srli__()
        {
            Given_HexString("4C6319");
            AssertCode(     // l.srli?	r3,r3,0x3
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = r3 >>u 3<i32>");
        }

        [Test]
        public void AeonRw_l_mul()
        {
            Given_HexString("408323");
            AssertCode(     // l.mul	r4,r3,r4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r4 = r3 * r4");
        }

        [Test]
        public void AeonRw_l_nop()
        {
            Given_HexString("000000");
            AssertCode(     // l.nop
                "0|L--|00100000(3): 1 instructions",
                "1|L--|nop");
        }

        [Test]
        public void AeonRw_l_sfeqi()
        {
            Given_HexString("5C8A21");
            AssertCode(     // l.sfeqi	r4,0xA
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r4 == 0xA<32>");
        }

        [Test]
        public void AeonRw_l_sfgeu()
        {
            Given_HexString("5E2717");
            AssertCode(     // l.sfgeu	r17,r7
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r17 >=u r7");
        }

        [Test]
        public void AeonRw_l_sfne()
        {
            Given_HexString("5D8E0D");
            AssertCode(     // l.sfne	r12,r14
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r12 != r14");
        }

        [Test]
        public void AeonRw_l_syncwritebuffer()
        {
            Given_HexString("F4000005");
            AssertCode(     // l.syncwritebuffer
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__syncwritebuffer()");
        }

    }
}
