using NUnit.Framework;
using Reko.Arch.OpenRISC;
using Reko.Core;

namespace Reko.UnitTests.Arch.OpenRISC
{
    [TestFixture]
    public class AeonRewriterTests : RewriterTestBase
    {
        private readonly AeonArchitecture arch;
        private readonly Address addrLoad;

        public AeonRewriterTests()
        {
            // Reko.Core.Machine.Decoder.trace.Level = System.Diagnostics.TraceLevel.Verbose;
            this.arch = new AeonArchitecture(CreateServiceContainer(), "aeon", new());
            this.addrLoad = Address.Ptr32(0x0010_0000);
        }

        public override IProcessorArchitecture Architecture => arch;
        public override Address LoadAddress => addrLoad;

        [Test]
        public void AeonRw_bt_add__()
        {
            Given_HexString("8CE5");
            AssertCode(     // bt.add?	r7,r5
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r7 = r7 + r5");
        }

        [Test]
        public void AeonRw_l_add_two_operand()
        {
            Given_HexString("5CE704");
            AssertCode(     // l.add??	r7,r7
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r7 + r7");
        }

        [Test]
        public void AeonRw_bn_add()
        {
            // confirmed with source
            Given_HexString("408324");
            AssertCode(     // bn.add	r4,r3,r4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r4 = r3 + r4");
        }

        [Test]
        public void AeonRw_bt_addi__()
        {
            Given_HexString("9C3C");
            AssertCode(     // bt.addi?	r1,-0x4
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r1 = r1 - 4<i32>");
        }

        [Test]
        public void AeonRw_bn_addi()
        {
            Given_HexString("1C21EC");
            AssertCode(     // bn.addi	r1,r1,0xEC
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r1 = r1 - 20<i32>");
        }

        [Test]
        public void AeonRw_bg_addi()
        {
            Given_HexString("FC8A026C");
            AssertCode(     // bg.addi	r4,r10,0x26C
                "0|L--|00100000(4): 1 instructions",
                "1|L--|r4 = r10 + 620<i32>");
        }

        [Test]
        public void AeonRw_bg_addi_0()
        {
            Given_HexString("FCC0829F");
            AssertCode(     // bg.addi	r6,r0,-0x0x7D61
                "0|L--|00100000(4): 1 instructions",
                "1|L--|r6 = -32097<i32>");
        }

        [Test]
        public void AeonRw_bn_and()
        {
            Given_HexString("44E734");
            AssertCode(     // bn.and	r7,r7,r6
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r7 & r6");
        }

        [Test]
        public void AeonRw_bn_andi()
        {
            Given_HexString("54E301");
            AssertCode(     // bn.andi	r7,r3,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r3 & 1<32>");
        }

        [Test]
        public void AeonRw_bn_bf()
        {
            Given_HexString("2003E9");
            AssertCode(     // bn.bf	00333DEC
                "0|T--|00100000(3): 1 instructions",
                "1|T--|if (f) branch 001000FA");
        }

        [Test]
        public void AeonRw_bn_ble__i__()
        {
            Given_HexString("248415");
            AssertCode(     // bn.ble?i?	r4,0x1,00354F36
                "0|T--|00100000(3): 1 instructions",
                "1|T--|if (r4 <= 1<32>) branch 00100005");
        }

        [Test]
        public void AeonRw_bg_blti__()
        {
            Given_HexString("D0 88 FF 3E");
            AssertCode(     // bg.blti? r4,0x8,002F4942
                "0|T--|00100000(4): 1 instructions",
                "1|T--|if (r4 < 8<32>) branch 000FFFE7");
        }

        [Test]
        public void AeonRw_bn_beqi__()
        {
            Given_HexString("2061E0");
            AssertCode(     // bn.beqi?	r3,0x0,00100078
                "0|T--|00100000(3): 1 instructions",
                "1|T--|if (r3 == 0<32>) branch 00100078");
        }

        [Test]
        public void AeonRw_bt_trap()
        {
            Given_HexString("8002");
            AssertCode(     // bt.trap
                "0|L--|00100000(2): 1 instructions",
                "1|L--|bt_trap()");
        }

        [Test]
        public void AeonDis_l_cmov()
        {
            Given_HexString("48 E7 00");
            AssertCode(     // l.cmov\tr3,r3,r0
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = f ? r7 : 0<32>");
        }

        [Test]
        public void AeonDis_l_cmovi()
        {
            Given_HexString("49 8C 0A");
            AssertCode(     // l.cmovi\tr12,r12,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r12 = f ? r12 : 1<32>");
        }

        [Test]
        public void AeonRw_bn_divu()
        {
            Given_HexString("408339");
            AssertCode(     // bn.divu	r4,r3,r7
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r4 = r3 /u r7");
        }

        [Test]
        public void AeonRw_bn_entri__()
        {
            // XXX: no examples known
            Given_HexString("5E9338");
            AssertCode(     // bn.entri?	0xA,0x99
                "0|L--|00100000(3): 1 instructions",
                "1|L--|bn_entri__(0xA<32>, 0x99<32>)");
        }

        [Test]
        public void AeonRw_bg_flush_line()
        {
            // confirmed with source
            Given_HexString("F4030016");
            AssertCode(     // bg.flush.line	(r3),0x1
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__flush_line(&Mem0[r3:word32], 1<32>)");
        }

        [Test]
        public void AeonRw_bg_invalidate_line()
        {
            // confirmed with source
            Given_HexString("F4030027");
            AssertCode(     // bg.invalidate.line	(r3),0x0
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__invalidate_line(&Mem0[r3:word32], 0<32>)");
        }

        [Test]
        public void AeonRw_bt_j()
        {
            Given_HexString("93C5");
            AssertCode(     // bt.j	0x3C5
                "0|T--|00100000(2): 1 instructions",
                "1|T--|goto 000FFFC5");
        }

       [Test]
        public void AeonRw_bg_jal()
        {
            Given_HexString("E4000A70");
            AssertCode(     // bg.jal	00100A70
                "0|T--|00100000(4): 1 instructions",
                "1|T--|call 00100538 (0)");
        }

        [Test]
        public void AeonRw_bt_jr()
        {
            Given_HexString("84E9");
            AssertCode(     // bt.jr	r7
                "0|T--|00100000(2): 1 instructions",
                "1|T--|goto r7");
        }

        [Test]
        public void AeonRw_bt_jr_ret()
        {
            Given_HexString("8529");
            AssertCode(     // bt.jr	r9
                "0|R--|00100000(2): 1 instructions",
                "1|R--|return (0,0)");
        }

        [Test]
        public void AeonRw_l_lbz()
        {
            Given_HexString("F0 C7 1E EC");
            AssertCode(     // l.lbz?\tr6,0x1EEC(r7)
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v4 = Mem0[r7 + 7916<i32>:byte]",
                "2|L--|r6 = CONVERT(v4, byte, word32)");
        }

        [Test]
        public void AeonRw_l_lhz()
        {
            Given_HexString("08C301");
            AssertCode(     // l.lhz	r6,(r3)
                "0|L--|00100000(3): 2 instructions",
                "1|L--|v4 = Mem0[r3:uint16]",
                "2|L--|r6 = CONVERT(v4, uint16, word32)");
        }

        [Test]
        public void AeonRw_l_lhz___32bit()
        {
            Given_HexString("E8C75CA5");
            AssertCode(     // l.lhz?	r6,0x5CA4(r7)
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v4 = Mem0[r7 + 23716<i32>:word16]",
                "2|L--|r6 = CONVERT(v4, uint16, word32)");
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
        public void AeonRw_bg_mfspr()
        {
            Given_HexString("C0A4000F");
            AssertCode(     // bg.mfspr	r5,r4,0x0
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
        public void AeonRw_bg_movhi_fuse_with_load()
        {
            Given_HexString(
                "C0 C0 0A 41" +
                "EC E6 3A 3E");
            AssertCode(
                // bg.movhi\tr6,0x523A3C@hi
                // bg.lwz?\tr7,0x523A3C@lo(r6)
                "0|L--|00100000(8): 2 instructions",
                "1|L--|r6 = 0x520000<32>",
                "2|L--|r7 = Mem0[0x00523A3C<p32>:word32]");
        }

        [Test]
        public void AeonRw_bg_movhi_fuse_with_store()
        {
            Given_HexString(
                "C0 E0 0A 41" +
                "F8 C7 3A 05");
            AssertCode(
                // bg.movhi\tr7,0x523A05@hi
                // bg.sb?\t0x523A05@lo(r7),r6
                "0|L--|00100000(8): 3 instructions",
                "1|L--|r7 = 0x520000<32>",
                "2|L--|v4 = SLICE(r6, byte, 0)",
                "3|L--|Mem0[0x00523A05<p32>:byte] = v4");
        }

        [Test]
        public void AeonRw_bg_movhi_fuse_with_addi()
        {
            Given_HexString(
                "C1 80 07 41" +
                "FD 4C 88 F0");
            AssertCode(
                // bg.movhi\tr12,0x3988F0@hi
                // bg.addi\tr10,r12,0x3988F0@lo
                "0|L--|00100000(8): 2 instructions",
                "1|L--|r12 = 0x3A0000<32>",
                "2|L--|r10 = 0x3988F0<32>");
        }

        [Test]
        public void AeonRw_l_movhi_fuse_with_ori()
        {
            Given_HexString(
                "C0 CF FF E1" +
                "C8 C6 FF FF");
            AssertCode(
                // l.movhi\tr6,0x7FFFFFFF@hi
                // l.ori\tr6,r6,0x7FFFFFFF@lo
                "0|L--|00100000(8): 2 instructions",
                "1|L--|r6 = 0x7FFF0000<32>",
                "2|L--|r6 = 0x7FFFFFFF<32>");
        }


        [Test]
        public void AeonRw_bg_mtspr()
        {
            Given_HexString("C060011D");
            AssertCode(     // bg.mtspr	r0,r3,0x11
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__move_to_spr(0<32>, r3, 0x11<32>)");
        }

        [Test]
        public void AeonRw_bt_mov__()
        {
            Given_HexString("8AE5");
            AssertCode(     // bt.mov?	r23,r5
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r23 = r5");
        }

        [Test]
        public void AeonRw_bt_movi__()
        {
            Given_HexString("98 DF");
            AssertCode(     // bt.movi? r6,0x1F
                "0|L--|00100000(2): 1 instructions",
                "1|L--|r6 = 0xFFFFFFFF<32>");
        }

        [Test]
        public void AeonRw_bn_mul()
        {
            Given_HexString("408323");
            AssertCode(     // bn.mul	r4,r3,r4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r4 = r3 * r4");
        }

        [Test]
        public void AeonRw_bn_nand__()
        {
            Given_HexString("44EA57");
            AssertCode(     // bn.nand?	r7,r10,r10
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = ~r10");
        }

        [Test]
        public void AeonRw_bn_nand__different()
        {
            // not from actual binary
            Given_HexString("44221F");
            AssertCode(     // bn.nand?	r1,r2,r3
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r1 = ~(r2 & r3)");
        }

        [Test]
        public void AeonRw_bt_nop()
        {
            // confirmed with source
            Given_HexString("8001");
            AssertCode(     // bt.nop
                "0|L--|00100000(2): 1 instructions",
                "1|L--|nop");
        }

        [Test]
        public void AeonRw_bn_nop()
        {
            Given_HexString("000000");
            AssertCode(     // bn.nop
                "0|L--|00100000(3): 1 instructions",
                "1|L--|nop");
        }

        [Test]
        public void AeonRw_bn_or()
        {
            Given_HexString("44E325");
            AssertCode(     // bn.or	r7,r3,r4
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
        public void AeonRw_l_sb()
        {
            Given_HexString("F8 EA 36 D8");
            AssertCode(     // l.sb 0x36D8(r10),r7
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v4 = SLICE(r7, byte, 0)",
                "2|L--|Mem0[r10 + 14040<i32>:byte] = v4");
        }

        [Test]
        public void AeonRw_l_sb___24bit()
        {
            Given_HexString("18 EB 05"); 
            AssertCode(     // l.sb?    0x5(r11),r7
                "0|L--|00100000(3): 2 instructions",
                "1|L--|v4 = SLICE(r7, byte, 0)",
                "2|L--|Mem0[r11 + 5<i32>:byte] = v4");
        }

        [Test]
        public void AeonRw_bn_sfeqi()
        {
            Given_HexString("5C8A21");
            AssertCode(     // bn.sfeqi	r4,0xA
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r4 == 0xA<32>");
        }

        [Test]
        public void AeonRw_bn_sfgeu()
        {
            Given_HexString("5E2717");
            AssertCode(     // bn.sfgeu	r17,r7
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r7 >=u r17");
        }

        [Test]
        public void AeonRw_bn_sfgtui()
        {
            Given_HexString("5C641B");
            AssertCode(     // bn.sfgtui	r3,0x20
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r3 >u 0x20<32>");
        }

        [Test]
        public void AeonDis_bn_sfleui__()
        {
            Given_HexString("5C 6E F3");
            AssertCode(     // bn.sfleui?\tr3,0x77
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r3 <=u 0x77<32>");
        }

        [Test]
        public void AeonDis_bn_sfltu()
        {
            Given_HexString("5F 47 1F");
            AssertCode(     // bn.sfltu	r7,r26
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r7 <u r26");
        }

        [Test]
        public void AeonRw_bn_sfne()
        {
            Given_HexString("5D8E0D");
            AssertCode(     // bn.sfne	r12,r14
                "0|L--|00100000(3): 1 instructions",
                "1|L--|f = r12 != r14");
        }

        [Test]
        public void AeonDis_bg_sfnei__()
        {
            Given_HexString("C0 C0 7D 04");
            AssertCode(     // bg.sfnei? r6,0x3E8
                "0|L--|00100000(4): 1 instructions",
                "1|L--|f = r6 != 0x3E8<32>");
        }

        [Test]
        public void AeonRw_l_sh()
        {
            Given_HexString("EC 67 34 5B");
            AssertCode(     // l.sh? 0x345A(r7),r3
                "0|L--|00100000(4): 2 instructions",
                "1|L--|v4 = SLICE(r3, word16, 0)",
                "2|L--|Mem0[r7 + 13402<i32>:word16] = v4");
        }

        [Test]
        public void AeonRw_bn_sll__()
        {
            Given_HexString("4CAC24");
            AssertCode(     // bn.sll?	r5,r12,r4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r5 = r12 << r4");
        }

        [Test]
        public void AeonRw_bn_slli__()
        {
            Given_HexString("4C6320");
            AssertCode(     // bn.slli?	r3,r3,0x4
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = r3 << 4<i32>");
        }

        [Test]
        public void AeonRw_bn_srai()
        {
            Given_HexString("4C A7 0A");
            AssertCode(     // bn.srai?\tr5,r7,0x1
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r5 = r7 >> 1<i32>");
        }

        [Test]
        public void AeonRw_bn_srl__()
        {
            Given_HexString("4D6B3D");
            AssertCode(     // bn.srl?	r11,r11,r7
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r11 = r11 >>u r7");
        }

        [Test]
        public void AeonRw_bn_srli__()
        {
            Given_HexString("4C6319");
            AssertCode(     // bn.srli?	r3,r3,0x3
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r3 = r3 >>u 3<i32>");
        }

        [Test]
        public void AeonRw_bn_sub()
        {
            Given_HexString("40EA1D");
            AssertCode(     // bn.sub	r7,r10,r3
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r10 - r3");
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
            Given_HexString("0C0108");
            AssertCode(     // l.sw?	0x8(r1),r0
                "0|L--|00100000(3): 1 instructions",
                "1|L--|Mem0[r1 + 8<i32>:word32] = 0<32>");
        }

        [Test]
        public void AeonRw_l_sw_32bit()
        {
            // confirmed with source
            Given_HexString("ECA10084");
            AssertCode(     // l.sw	0x84(r1),r5
                "0|L--|00100000(4): 1 instructions",
                "1|L--|Mem0[r1 + 132<i32>:word32] = r5");
        }

        [Test]
        public void AeonRw_bg_syncwritebuffer()
        {
            Given_HexString("F4000005");
            AssertCode(     // bg.syncwritebuffer
                "0|L--|00100000(4): 1 instructions",
                "1|L--|__syncwritebuffer()");
        }

        [Test]
        public void AeonRw_bn_xor__()
        {
            Given_HexString("44E736");
            AssertCode(     // bn.xor? r7,r7,r6
                "0|L--|00100000(3): 1 instructions",
                "1|L--|r7 = r7 ^ r6");
        } 
    }
}
