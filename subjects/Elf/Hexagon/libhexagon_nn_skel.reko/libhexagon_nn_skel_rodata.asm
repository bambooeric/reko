;;; Segment .rodata (00024E80)
methodStringsArrays		; 00024E80
	db	0x5E, 0x00, 0x5D, 0x00, 0x4D, 0x00, 0x4A, 0x00, 0x47, 0x00, 0x1F, 0x00, 0x32, 0x00, 0x5A, 0x00
	db	0x12, 0x00, 0x58, 0x00, 0x56, 0x00, 0x2A, 0x00, 0x44, 0x00, 0x3A, 0x00, 0x54, 0x00, 0x41, 0x00
	db	0x3E, 0x00, 0x5C, 0x00, 0x52, 0x00, 0x50, 0x00, 0x00, 0x00

l00024E8C:
	{ r18 = memw(r5); r2 = memw(r3) }
	{ r16 = memw(r5); r2 = memw(r1) }
	{ r18 = memw(r2); r6 = memw(r5) }
	{ r18 = memw(r3); r4 = memw(r4) }
	{ r1 = memw(r4); r4 = memw(r5) }

l00024EA0:
	{ r20 = memw(r5); r22 = memw(r3) }
	{ r0 = memw(r5); r2 = memw(r5) }
	{ r0 = memw(r0); r0 = memw(r0) }
00024EAA                               00 00 00 00 00 00           ......
methodStrings		; 00024EB0
	db	0xC5, 0x00, 0x9B, 0x00, 0x0C, 0x02, 0xD7, 0x01, 0xF7, 0x01, 0x2D, 0x02, 0x27, 0x02, 0x33, 0x02
	db	0x64, 0x00, 0xFE, 0x01, 0xDF, 0x01, 0xD7, 0x01, 0xF7, 0x01, 0x2D, 0x02, 0x27, 0x02, 0x33, 0x02
	db	0x64, 0x00, 0xFE, 0x01, 0xC7, 0x01, 0x9B, 0x00, 0x15, 0x01, 0x53, 0x01, 0x94, 0x01, 0x8B, 0x01
	db	0xBF, 0x01, 0xD1, 0x00, 0x0A, 0x01, 0x49, 0x01, 0x3F, 0x01, 0x82, 0x01, 0xB8, 0x00, 0xDD, 0x00
	db	0x9B, 0x00, 0xEF, 0x01, 0x5D, 0x01, 0xE7, 0x01, 0x0C, 0x02, 0x05, 0x02, 0x20, 0x01, 0xDF, 0x01
	db	0x9D, 0x01, 0xFE, 0x01, 0xAB, 0x00, 0x9B, 0x00, 0x70, 0x01, 0xEF, 0x01, 0xFF, 0x00, 0xF4, 0x00
	db	0xE9, 0x00, 0xB7, 0x01, 0x42, 0x00, 0x9B, 0x00, 0xEF, 0x01, 0xD7, 0x01, 0xF7, 0x01, 0x2D, 0x02
	db	0x27, 0x02, 0x33, 0x02, 0x18, 0x00, 0x9B, 0x00, 0x35, 0x01, 0x2B, 0x01, 0x82, 0x00, 0xEF, 0x01
	db	0x8B, 0x00, 0x90, 0x00, 0x8B, 0x00, 0xEF, 0x01, 0x73, 0x00, 0x9B, 0x00, 0x21, 0x02, 0x13, 0x02
	db	0x9B, 0x00, 0x41, 0x02, 0xA6, 0x01, 0x9B, 0x00, 0x41, 0x02, 0x54, 0x00, 0x9B, 0x00, 0x3C, 0x00
	db	0x67, 0x01, 0x41, 0x02, 0x00, 0x00, 0x3D, 0x02, 0xAF, 0x01, 0x3D, 0x02, 0x2E, 0x00, 0x3C, 0x00
	db	0x79, 0x01, 0x9B, 0x00, 0xCF, 0x01, 0x9B, 0x00, 0x9E, 0x00, 0x38, 0x02, 0x1A, 0x02

l00024F08:
	{ r23 = memw(r22+4); r0 = memw(r7+4) }
	{ r4 = memw(r23); r23 = memw(r23) }
	{ r7 = memw(r19+4); r17 = memw(r22) }
	{ r19 = memw(r17); r2 = memw(r4) }
	{ r7 = memw(r21+4); r23 = memw(r22+4) }
	{ r21 = memw(r2+8); r7 = memw(r23+4) }
	{ r3 = memw(r3+8); r7 = memw(r2+8) }
	{ r19 = memw(r17); r16 = memw(r1) }
	{ r19 = memw(r2+4); r5 = memw(r3+4) }
	{ r23 = memw(r22+4); r2 = memw(r16) }
	{ r0 = memw(r17); r19 = memw(r16) }
	{ r23 = memw(r22+4); r19 = memw(r16) }
	{ r19 = memw(r17); r3 = memw(r7) }
	{ r3 = memw(r1+8); r1 = memw(r2+8) }
	{ r1 = memw(r4+8); r19 = memw(r17) }
	{ r19 = memw(r17); r6 = memw(r18+4) }
	{ r4 = memw(r5); r1 = memw(r4+8) }
	{ r20 = memw(r3); r19 = memw(r17) }
	{ r1 = memw(r4+8); r7 = memw(r6+4) }
	{ r21 = memw(r3+8); r0 = memw(r0) }
	{ r21 = memw(r3+8); r23 = memw(r18+4) }
	{ r20 = memw(r3); r22 = memw(r2) }
	{ r19 = memw(r17); r17 = memw(r7+4) }
	{ r19 = memw(r17); r23 = memw(r20+4) }
	{ r16 = memw(r3+8); r22 = memw(r17) }
	{ r0 = memw(r0); r18 = memw(r1+8) }
00024F6E                                           00 00               ..
strings		; 00024F70
	db	0x47, 0x65, 0x74, 0x48, 0x65, 0x78, 0x61, 0x67, 0x6F, 0x6E, 0x42, 0x69, 0x6E, 0x61, 0x72, 0x79
	db	0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x00, 0x6C, 0x61, 0x73, 0x74, 0x5F, 0x65, 0x78, 0x65
	db	0x63, 0x75, 0x74, 0x69, 0x6F, 0x6E, 0x5F, 0x63, 0x79, 0x63, 0x6C, 0x65, 0x73, 0x00, 0x73, 0x65
	db	0x74, 0x5F, 0x70, 0x6F, 0x77, 0x65, 0x72, 0x73, 0x61, 0x76, 0x65, 0x5F, 0x6C, 0x65, 0x76, 0x65
	db	0x6C, 0x00, 0x61, 0x70, 0x70, 0x65, 0x6E, 0x64, 0x5F, 0x63, 0x6F, 0x6E, 0x73, 0x74, 0x5F, 0x6E
	db	0x6F, 0x64, 0x65, 0x00, 0x73, 0x65, 0x74, 0x5F, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5F, 0x6C, 0x65
	db	0x76, 0x65, 0x6C, 0x00, 0x64, 0x61, 0x74, 0x61, 0x5F, 0x76, 0x61, 0x6C, 0x69, 0x64, 0x5F, 0x6C
	db	0x65, 0x6E, 0x00, 0x72, 0x65, 0x73, 0x65, 0x74, 0x5F, 0x70, 0x65, 0x72, 0x66, 0x69, 0x6E, 0x66
	db	0x6F, 0x00, 0x6F, 0x70, 0x5F, 0x69, 0x64, 0x5F, 0x74, 0x6F, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x00
	db	0x6F, 0x70, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x74, 0x6F, 0x5F, 0x69, 0x64, 0x00, 0x64, 0x69
	db	0x73, 0x61, 0x62, 0x6C, 0x65, 0x5F, 0x64, 0x63, 0x76, 0x73, 0x00, 0x67, 0x65, 0x74, 0x5F, 0x70
	db	0x65, 0x72, 0x66, 0x69, 0x6E, 0x66, 0x6F, 0x00, 0x64, 0x61, 0x74, 0x61, 0x5F, 0x6C, 0x65, 0x6E
	db	0x5F, 0x6F, 0x75, 0x74, 0x00, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x65, 0x5F, 0x6E, 0x65, 0x77
	db	0x00, 0x62, 0x61, 0x74, 0x63, 0x68, 0x65, 0x73, 0x5F, 0x6F, 0x75, 0x74, 0x00, 0x61, 0x70, 0x70
	db	0x65, 0x6E, 0x64, 0x5F, 0x6E, 0x6F, 0x64, 0x65, 0x00, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x65, 0x72
	db	0x5F, 0x68, 0x69, 0x00, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x65, 0x72, 0x5F, 0x6C, 0x6F, 0x00, 0x65
	db	0x78, 0x65, 0x63, 0x75, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x00, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74
	db	0x5F, 0x6F, 0x75, 0x74, 0x00, 0x62, 0x61, 0x74, 0x63, 0x68, 0x65, 0x73, 0x5F, 0x69, 0x6E, 0x00
	db	0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5F, 0x69, 0x64, 0x78, 0x00, 0x63, 0x79, 0x63, 0x6C, 0x65
	db	0x73, 0x5F, 0x68, 0x69, 0x00, 0x63, 0x79, 0x63, 0x6C, 0x65, 0x73, 0x5F, 0x6C, 0x6F, 0x00, 0x64
	db	0x65, 0x70, 0x74, 0x68, 0x5F, 0x6F, 0x75, 0x74, 0x00, 0x77, 0x69, 0x64, 0x74, 0x68, 0x5F, 0x6F
	db	0x75, 0x74, 0x00, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x5F, 0x69, 0x6E, 0x00, 0x6F, 0x70, 0x65
	db	0x72, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x50, 0x72, 0x69, 0x6E, 0x74, 0x4C, 0x6F, 0x67, 0x00
	db	0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x6F, 0x75, 0x74, 0x00, 0x74, 0x65, 0x61, 0x72, 0x64, 0x6F, 0x77
	db	0x6E, 0x00, 0x64, 0x61, 0x74, 0x61, 0x5F, 0x6F, 0x75, 0x74, 0x00, 0x64, 0x65, 0x70, 0x74, 0x68
	db	0x5F, 0x69, 0x6E, 0x00, 0x77, 0x69, 0x64, 0x74, 0x68, 0x5F, 0x69, 0x6E, 0x00, 0x6D, 0x61, 0x78
	db	0x5F, 0x73, 0x69, 0x7A, 0x65, 0x00, 0x73, 0x6E, 0x70, 0x70, 0x72, 0x69, 0x6E, 0x74, 0x00, 0x76
	db	0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x00, 0x6E, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x73, 0x00, 0x64
	db	0x61, 0x74, 0x61, 0x5F, 0x69, 0x6E, 0x00, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x65, 0x00, 0x70
	db	0x72, 0x65, 0x70, 0x61, 0x72, 0x65, 0x00, 0x62, 0x61, 0x74, 0x63, 0x68, 0x65, 0x73, 0x00, 0x6F
	db	0x75, 0x74, 0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6E, 0x67, 0x00, 0x6E
	db	0x6F, 0x64, 0x65, 0x5F, 0x69, 0x64, 0x00, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x00, 0x75, 0x6E
	db	0x75, 0x73, 0x65, 0x64, 0x00, 0x73, 0x72, 0x63, 0x5F, 0x69, 0x64, 0x00, 0x69, 0x6E, 0x70, 0x75
	db	0x74, 0x73, 0x00, 0x67, 0x65, 0x74, 0x6C, 0x6F, 0x67, 0x00, 0x63, 0x6F, 0x6E, 0x66, 0x69, 0x67
	db	0x00, 0x65, 0x76, 0x65, 0x6E, 0x74, 0x00, 0x64, 0x65, 0x70, 0x74, 0x68, 0x00, 0x77, 0x69, 0x64
	db	0x74, 0x68, 0x00, 0x64, 0x61, 0x74, 0x61, 0x00, 0x69, 0x6E, 0x69, 0x74, 0x00, 0x76, 0x65, 0x72
	db	0x00, 0x62, 0x75, 0x66, 0x00

l00024FDC:
	{  }
	{  }
	{ if (p3.new) r5 = add(r5,#0xFFFFFF9B); r5.h = #0xC17D; r6 = iassignr(r14); r23 = r6; memw(r6) = r23 }
	{  }
	{  }
	{ immext(#0x65B5840) }
	{  }
	{  }
	{ r4 = #0x16; memw(r6) = r4 }
	{  }
	{  }
	{  }
	{  }
	{  }
	{ immext(#0x6F99B80); if (!r20>=#0x0) jump:nt 000212EC }

l00025030:
	{ if (p3.new) r31 = add(r21,#0x7A) }
	{  }
	{  }
	{ if (p3.new) r0 = add(r1,#0x10); r3 = !cmp.eq(r5,00000043); if (p3.new) r31 = add(r21,#0x7A); r0 = r16 }
	{  }
	{ p0 = cmp.gt(r15,#0xFFFFFF18); r5.h = #0xD1B9; immext(#0x69A17C0) }
	{  }
	{ crswap(r0,sgp0); p0 = !cmp.gt(r3,FFFFFF2B) }
	{ r16 = add(r16,#0xFFFFFFD6); memw(r7) = r3 }
	{ if (p3.new) r9 = add(r8,#0x3B); if (p3.new) r31 = add(r21,#0x7A); if (p3.new) r0 = add(r1,#0x10); r3 = !cmp.eq(r5,00000043); immext(#0x6EA57C0); r15 = r20 }
	{ g5:g4 = r1:r0 }
	{  }
	{  }
	{  }
	{ ciad(r0) }
	{ if (p3.new) r31 = add(r21,#0x7A); stop(r9) }
	{  }
	{  }
	{  }
	{  }
	{  }
	{  }
	{ if (p3.new) r18 = add(r14,#0x4B); immext(#0x67BD300) }
	{ if (p3.new) r31 = add(r21,#0x7A); if (!r5>=#0x0) jump:t 000238E4 }

l000250F0:
	{ r4 = add(r4,#0x16); memw(r6) = r22 }
	{  }
	{ ciad(r0) }
	{ immext(#0x6EA57C0); if (p3.new) r23 = add(r4,#0x6EA57CB) }
	{ r0 = #0x4368; r31 = mux(p0,#0xFFFFFF9A,#0xFFFFFFD3); r3 = add(r29,#0x9C); memw(r6) = r5 }
	{  }
	{ r14 = and(r0,#0x1A3) }
	{  }
	{  }
	{ ciad(r0) }
	{ crswap(r0,sgp0); p0 = !cmp.gt(r3,FFFFFF2B); if (p1.new) r20 = aslh(r0); if (!r16>=#0x0) jump:nt 00021C18; g18 = r0 }

l0002514C:
	{  }
	{ p1 = !cmp.gt(r16,FFFFFFA3); if (p3) r20 = aslh(r0) }
	{  }
	{  }
	{  }
	{  }
	{ r5 = add(r29,#0x9C); memw(r7) = r4 }
	{  }
	{  }
	{ immext(#0x64A57C0); p1 = cmp.gt(r16,#0x64A57F3); pmuevtcfg = r0 }
	{ r3 = add(r29,#0xD8); memw(r6) = r7 }
	{  }
	{  }
	{ ciad(r0) }
	{ stop(r9); ciad(r0); immext(#0x61D1840); if (p3.new) r9 = add(r9,#0x61D1873); r5.h = #0xD801; r0 = iassignr(r21); r0 = #0x4B40 }
000251B5                68 65 78 61 67 6F 6E 2F 73 72 63      hexagon/src
000251C0 2F 61 6C 6C 6F 63 61 74 65 2E 63 00 61 64 64 20 /allocate.c.add 
000251D0 66 72 65 65 6E 6F 64 65                         freenode        

l000251D8:
	{ r1 = add(r29,#0x18); memw(r7) = r3 }
	{  }
	{  }
	{ stop(r1); r1:r0 = tlbr(r12) }
	{ p0 = and(p3,p1); r1:r0 = vid:ipend }
	{ r1:r0 = tlbr(r12) }
	{  }
	{ r6 = r6 }
	{  }
	{ p0 = and(p3,p1); r1:r0 = tlbr(r21); r1 = add(r29,#0x18); memuh(r6+8) = r19 }
	{  }
	{ r1 = add(r29,#0x18); memuh(r7+8) = r17 }
	{ if (!r3>=#0x0) jump:nt im2col7732_asm; r1 = add(r29,#0x18) }

l00025234:
	{  }
	{  }
	{ r6 = add(r6,#0x16); memuh(r6+8) = r3 }
	{ if (p1) r9 = memb(r0-29) }
	{  }
	{ r4 = add(r4,#0x6); r0 = add(r0,#0xFFFFFFD2) }
	{  }
	{ r0 = add(r0,#0x4); r3 = add(r3,#0x7) }
	{ r4 = add(r4,#0x6); if (cmp.eq(r0.new,r16)) jump:t 00024EA0; r4 = #0x7; memuh(r6+8) = r5 }

l00025264:
	{  }
	{  }
	{  }
	{  }
	{ p0 = cmp.gt(r8,#0xFFFFFF19); immext(#0x79ADB80) }
	{ r3 = #0x17; memuh(r6+8) = r7 }
	{ r3 = #0x17 }
	{ r5 = add(r5,r2); memuh(r7+8) = r3 }
	{ if (p3) r0 = add(r1,#0xFFFFFFB8); if (!r13>=#0x0) jump:t 00023758; r19:r18 = combine(#0x5B,r0); r1 = memuh(r23+r25<<#2) }

l000252A4:
	{  }
	{ r4 = add(r4,#0x6); r0 = add(r0,#0xFFFFFFD2) }
	{  }
	{ r6 = r6; memw(r7) = r3 }
	{  }
	{  }
	{  }
	{ r5 = r2; memuh(r4+8) = r0 }
	{ r2 = add(r2,#0x16); memuh(r3+8) = r18 }
	{  }
	{ r13:r12 = combine(#0xFFFFFFC3,r0) }
	{ r5 = getimask(r0) }
	{ r7:r6 = tlbr(r9) }
	{  }
	{  }
	{ r4 = add(r4,#0x6); r0 = add(r0,#0xFFFFFFD2) }
	{ r5 = r2; memuh(r4+8) = r0 }
	{ r1:r0 = tlbr(r12) }
	{  }
	{ r1 = add(r29,#0x18); memw(r6) = r4 }
	{  }
	{ reserved8197 = r0; r25 = !cmp.eq(r5,FFFFFFA3) }
	{ r19 = #-0x1; r0 = memw(r7) }
	{  }
	{  }
	{  }
	{ if (p2) call 00034A00; r7 = add(r7,#0x15); memuh(r3+8) = r18 }

l00025328:
	{ r7 = add(r7,#0x15); memuh(r3+8) = r18 }
0002532C                                     74 65 72 6D             term
00025330 61 72 6B 20 6E 6F 77 20 30 78 25 78 00 70 72 65 ark now 0x%x.pre
00025340 66 72 65 65 20 6D 61 6C 6C 6F 63 20 66 61 69 6C free malloc fail
00025350 00 63 61 6E 27 74 20 61 70 70 65 6E 64 00 66 72 .can't append.fr
00025360 65 65 6E 6F 64 65 20 63 74 6F 72 20 66 61 69 6C eenode ctor fail
00025370 00 69 64 20 6E 6F 74 20 66 6F 75 6E 64 0A 00 68 .id not found..h
00025380 65 78 61 67 6F 6E 2F 73 72 63 2F 69 6E 74 65 72 exagon/src/inter
00025390 66 61 63 65 2E 63 00 6E 6E 20 69 64 20 25 78 20 face.c.nn id %x 
000253A0 6E 6F 74 20 66 6F 75 6E 64 00 61 70 70 65 6E 64 not found.append
000253B0 3A 20 67 72 61 70 68 20 6E 6F 74 20 75 6E 64 65 : graph not unde
000253C0 72 20 63 6F 6E 73 74 72 75 63 74 69 6F 6E 00 67 r construction.g
000253D0 72 61 70 68 20 6E 6F 74 20 70 72 65 70 61 72 65 raph not prepare
000253E0 64 00 69 6E 20 68 65 78 61 67 6F 6E 5F 6E 6E 5F d.in hexagon_nn_
000253F0 65 78 65 63 75 74 65 5F 6E 65 77 2C 20 25 64 20 execute_new, %d 
00025400 69 6E 20 25 64 20 6F 75 74 00 25 73 3A 25 64 3A in %d out.%s:%d:
00025410 00 0A 00 68 65 78 61 67 6F 6E 2F 73 72 63 2F 6E ...hexagon/src/n
00025420 65 77 6E 6F 64 65 2E 63 00 63 6F 6D 6D 6F 6E 20 ewnode.c.common 
00025430 61 6C 6C 6F 63 20 69 64 20 25 78 20 6D 61 6C 6C alloc id %x mall
00025440 6F 63 20 66 61 69 6C 00 69 6E 70 75 74 20 61 6C oc fail.input al
00025450 6C 6F 63 20 66 61 69 6C 65 64 00 6F 75 74 70 75 loc failed.outpu
00025460 74 20 61 6C 6C 6F 63 20 66 61 69 6C 65 64 00 66 t alloc failed.f
00025470 72 65 65 69 6E 67 20 6E 6F 64 65 20 25 70 00 6E reeing node %p.n
00025480 6F 64 65 20 69 64 3D 30 78 25 78 20 63 74 6F 72 ode id=0x%x ctor
00025490 20 66 61 69 6C 00 64 74 6F 72 20 66 61 69 6C 65  fail.dtor faile
000254A0 64 20 69 6E 20 74 65 61 72 64 6F 77 6E 00 6F 75 d in teardown.ou
000254B0 74 70 75 74 20 70 74 72 20 73 74 6F 72 61 67 65 tput ptr storage
000254C0 20 61 6C 6C 6F 63 20 66 61 69 6C 65 64 00 6F 75  alloc failed.ou
000254D0 74 70 75 74 20 74 65 6E 73 6F 72 20 6D 61 6C 6C tput tensor mall
000254E0 6F 63 20 66 61 69 6C 65 64 00 69 6E 70 75 74 20 oc failed.input 
000254F0 72 65 66 73 20 61 6C 6C 6F 63 20 66 61 69 6C 65 refs alloc faile
00025500 64 00 69 6E 70 75 74 20 70 74 72 20 73 74 6F 72 d.input ptr stor
00025510 61 67 65 20 61 6C 6C 6F 63 20 66 61 69 6C 65 64 age alloc failed
00025520 00 66 61 74 61 6C 3A 20 63 6F 6E 73 74 20 74 65 .fatal: const te
00025530 6E 73 6F 72 20 69 6E 20 67 65 6E 65 72 69 63 20 nsor in generic 
00025540 69 6E 70 75 74 00 6E 6E 20 40 20 25 70 3A 20 69 input.nn @ %p: i
00025550 64 3D 30 78 25 6C 78 20 64 65 62 75 67 5F 6C 65 d=0x%lx debug_le
00025560 76 65 6C 3D 25 64 0A 00 6E 6F 64 65 20 40 20 25 vel=%d..node @ %
00025570 70 3A 20 69 64 3D 30 78 25 78 20 74 79 70 65 3D p: id=0x%x type=
00025580 30 78 25 78 28 25 73 29 20 6E 5F 69 6E 70 75 74 0x%x(%s) n_input
00025590 73 3D 25 64 20 6E 5F 6F 75 74 70 75 74 73 3D 25 s=%d n_outputs=%
000255A0 64 20 70 61 64 64 69 6E 67 3D 25 78 28 25 73 29 d padding=%x(%s)
000255B0 0A 00 2E 2E 2E 20 69 6E 70 75 74 20 25 64 20 40 ..... input %d @
000255C0 20 25 70 20 3C 73 72 63 5F 69 64 20 25 78 20 6F  %p <src_id %x o
000255D0 75 74 5F 69 64 78 20 25 64 3E 0A 00 2E 2E 2E 20 ut_idx %d>..... 
000255E0 6F 75 74 70 75 74 20 25 64 20 40 20 25 70 0A 00 output %d @ %p..
000255F0 25 64 20 6E 6F 64 65 73 20 74 6F 74 61 6C 2E 0A %d nodes total..
00025600 00 57 48 41 54 45 56 45 52 00 53 41 4D 45 00 56 .WHATEVER.SAME.V
00025610 41 4C 49 44 00 4D 49 52 52 4F 52 5F 52 45 46 4C ALID.MIRROR_REFL
00025620 45 43 54 00 4D 49 52 52 4F 52 5F 53 59 4D 4D 45 ECT.MIRROR_SYMME
00025630 54 52 49 43 00 68 65 78 61 67 6F 6E 2F 73 72 63 TRIC.hexagon/src
00025640 2F 70 72 65 70 61 72 65 2E 63 00 66 6F 75 6E 64 /prepare.c.found
00025650 20 62 61 64 20 64 65 70 74 68 20 25 64 20 40 20  bad depth %d @ 
00025660 6E 6F 64 65 69 64 20 25 78 20 70 61 64 64 69 6E nodeid %x paddin
00025670 67 20 62 79 20 25 64 20 74 6F 20 25 64 20 6F 66 g by %d to %d of
00025680 66 73 65 74 20 25 64 0A 00 53 75 63 63 65 73 73 fset %d..Success
00025690 66 75 6C 6C 79 20 70 72 65 70 61 64 64 65 64 20 fully prepadded 
000256A0 73 75 70 65 72 6E 6F 64 65 73 20 25 78 20 61 6E supernodes %x an
000256B0 64 20 25 78 0A 00 70 72 65 70 61 72 65 3A 20 47 d %x..prepare: G
000256C0 72 61 70 68 20 6E 6F 74 20 75 6E 64 65 72 20 63 raph not under c
000256D0 6F 6E 73 74 72 75 63 74 69 6F 6E 00 46 41 54 41 onstruction.FATA
000256E0 4C 3A 20 73 6F 75 72 63 65 20 6E 6F 64 65 20 49 L: source node I
000256F0 44 20 30 78 25 78 20 66 72 6F 6D 20 6E 6F 64 65 D 0x%x from node
00025700 20 25 78 20 6E 6F 74 20 66 6F 75 6E 64 00 46 41  %x not found.FA
00025710 54 41 4C 3A 20 42 61 64 20 6F 75 74 70 75 74 20 TAL: Bad output 
00025720 25 64 20 6F 6E 20 6E 6F 64 65 20 49 44 20 30 78 %d on node ID 0x
00025730 25 78 0A 00 6E 6E 20 25 70 20 6E 6F 64 65 20 25 %x..nn %p node %
00025740 70 20 69 64 78 20 25 64 3A 20 6E 6F 74 20 68 61 p idx %d: not ha
00025750 6E 64 6C 69 6E 67 20 63 6F 6E 73 74 61 6E 74 20 ndling constant 
00025760 69 6E 70 75 74 00 62 61 64 20 66 61 69 6C 75 72 input.bad failur
00025770 65 00 66 6F 75 6E 64 20 63 6F 6E 76 32 64 0A 00 e.found conv2d..
00025780 66 6F 75 6E 64 20 71 64 6F 77 6E 30 0A 00 66 6F found qdown0..fo
00025790 75 6E 64 20 62 69 61 73 61 64 64 0A 00 66 6F 75 und biasadd..fou
000257A0 6E 64 20 71 64 6F 77 6E 31 0A 00 66 6F 75 6E 64 nd qdown1..found
000257B0 20 72 65 6C 75 0A 00 43 72 65 61 74 65 64 20 73  relu..Created s
000257C0 75 70 65 72 6E 6F 64 65 20 69 64 3D 25 78 20 28 upernode id=%x (
000257D0 77 61 73 20 72 65 6C 75 20 49 44 29 00 66 6F 75 was relu ID).fou
000257E0 6E 64 20 6D 61 74 63 68 69 6E 67 20 72 65 6C 75 nd matching relu
000257F0 00 43 68 61 6E 67 65 64 20 72 65 71 75 61 6E 74 .Changed requant
00025800 69 7A 65 20 77 2F 20 63 6F 6E 73 74 20 6D 61 78 ize w/ const max
00025810 20 2D 2D 3E 20 52 65 6C 75 20 74 6F 20 2D 2D 3E  --> Relu to -->
00025820 20 52 65 6C 75 58 00 66 6F 75 6E 64 20 72 65 71  ReluX.found req
00025830 75 61 6E 74 69 7A 61 74 69 6F 6E 72 61 6E 67 65 uantizationrange
00025840 00 46 6F 75 6E 64 20 6D 61 74 63 68 69 6E 67 20 .Found matching 
00025850 72 65 71 75 61 6E 74 69 7A 65 00 43 68 61 6E 67 requantize.Chang
00025860 65 64 20 74 6F 20 61 75 74 6F 72 65 71 75 61 6E ed to autorequan
00025870 74 69 7A 65 20 6E 6F 64 65 20 69 64 3D 25 78 20 tize node id=%x 
00025880 28 77 61 73 20 72 65 71 75 61 6E 74 69 7A 65 20 (was requantize 
00025890 49 44 29 00 68 65 78 61 67 6F 6E 2F 73 72 63 2F ID).hexagon/src/
000258A0 67 72 61 70 68 6F 70 73 2E 63 00 43 41 55 53 41 graphops.c.CAUSA
000258B0 4C 49 54 59 20 56 49 4F 4C 41 54 49 4F 4E 3A 20 LITY VIOLATION: 
000258C0 6E 6F 64 65 20 25 70 20 28 69 64 3D 30 78 25 78 node %p (id=0x%x
000258D0 29 20 72 65 66 65 72 65 6E 63 65 64 20 6F 75 74 ) referenced out
000258E0 70 75 74 20 6F 66 20 6E 6F 64 65 20 25 70 20 28 put of node %p (
000258F0 69 64 3D 30 78 25 78 29 20 62 65 66 6F 72 65 20 id=0x%x) before 
00025900 69 6E 73 74 61 6E 74 69 61 74 65 64 20 69 6E 20 instantiated in 
00025910 74 68 65 20 67 72 61 70 68 00 6E 6E 5F 77 6F 72 the graph.nn_wor
00025920 6B 65 72 00 68 65 78 61 67 6F 6E 2F 73 72 63 2F ker.hexagon/src/
00025930 6E 6E 5F 6F 73 2E 63 00 63 6F 75 6C 64 6E 27 74 nn_os.c.couldn't
00025940 20 70 6F 77 65 72 20 6F 6E 20 68 76 78 0A 00 68  power on hvx..h
00025950 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F exagon/ops/src/o
00025960 70 5F 64 65 63 6F 6E 76 2E 63 00 43 68 65 63 6B p_deconv.c.Check
00025970 69 6E 67 20 64 65 63 6F 6E 76 20 6E 6F 64 65 20 ing deconv node 
00025980 25 70 00 64 65 63 6F 6E 76 20 69 64 20 25 78 20 %p.deconv id %x 
00025990 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 64 wrong # inputs.d
000259A0 65 63 6F 6E 76 20 77 72 6F 6E 67 20 23 20 6F 75 econv wrong # ou
000259B0 74 70 75 74 73 00 64 65 63 6F 6E 76 20 6E 6F 64 tputs.deconv nod
000259C0 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 64 65 e %p check OK.de
000259D0 63 6F 6E 76 20 65 78 65 63 75 74 65 2E 20 6E 6F conv execute. no
000259E0 64 65 3D 25 70 20 69 64 3D 25 78 00 64 65 63 6F de=%p id=%x.deco
000259F0 6E 76 20 69 6E 70 75 74 20 25 64 78 25 64 78 25 nv input %dx%dx%
00025A00 64 78 25 64 00 64 65 63 6F 6E 76 20 66 69 6C 74 dx%d.deconv filt
00025A10 20 25 64 78 25 64 78 25 64 78 25 64 00 64 65 63  %dx%dx%dx%d.dec
00025A20 6F 6E 76 20 73 74 72 69 64 65 20 25 64 78 25 64 onv stride %dx%d
00025A30 00 64 65 63 6F 6E 76 20 70 61 64 64 69 6E 67 20 .deconv padding 
00025A40 25 64 00 65 78 70 65 63 74 65 64 20 6F 75 74 20 %d.expected out 
00025A50 73 68 61 70 65 20 25 64 78 25 64 78 25 64 78 25 shape %dx%dx%dx%
00025A60 64 00 6F 6F 70 73 2C 20 64 65 70 74 68 20 21 3D d.oops, depth !=
00025A70 20 64 65 70 74 68 00 6F 75 74 70 75 74 20 74 6F  depth.output to
00025A80 6F 20 73 6D 61 6C 6C 2C 20 25 64 20 3C 20 25 64 o small, %d < %d
00025A90 00 62 61 64 20 73 74 72 69 64 65 20 62 61 74 63 .bad stride batc
00025AA0 68 00 62 61 64 20 73 74 72 69 64 65 20 64 65 70 h.bad stride dep
00025AB0 74 68 00 64 65 63 6F 6E 76 20 65 78 65 63 75 74 th.deconv execut
00025AC0 65 20 28 72 65 66 29 20 64 6F 6E 65 21 20 25 64 e (ref) done! %d
00025AD0 78 25 64 78 25 64 78 25 64 00 68 65 78 61 67 6F x%dx%dx%d.hexago
00025AE0 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 64 65 63 n/ops/src/op_dec
00025AF0 6F 6E 76 5F 66 2E 63 00 43 68 65 63 6B 69 6E 67 onv_f.c.Checking
00025B00 20 64 65 63 6F 6E 76 20 6E 6F 64 65 20 25 70 00  deconv node %p.
00025B10 64 65 63 6F 6E 76 20 69 64 20 25 78 20 77 72 6F deconv id %x wro
00025B20 6E 67 20 23 20 69 6E 70 75 74 73 00 64 65 63 6F ng # inputs.deco
00025B30 6E 76 20 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 nv wrong # outpu
00025B40 74 73 00 64 65 63 6F 6E 76 20 6E 6F 64 65 20 25 ts.deconv node %
00025B50 70 20 63 68 65 63 6B 20 4F 4B 00 64 65 63 6F 6E p check OK.decon
00025B60 76 20 65 78 65 63 75 74 65 2E 20 6E 6F 64 65 3D v execute. node=
00025B70 25 70 20 69 64 3D 25 78 00 64 65 63 6F 6E 76 20 %p id=%x.deconv 
00025B80 69 6E 70 75 74 20 25 64 78 25 64 78 25 64 78 25 input %dx%dx%dx%
00025B90 64 00 64 65 63 6F 6E 76 20 66 69 6C 74 20 25 64 d.deconv filt %d
00025BA0 78 25 64 78 25 64 78 25 64 00 64 65 63 6F 6E 76 x%dx%dx%d.deconv
00025BB0 20 73 74 72 69 64 65 20 25 64 78 25 64 00 64 65  stride %dx%d.de
00025BC0 63 6F 6E 76 20 70 61 64 64 69 6E 67 20 25 64 00 conv padding %d.
00025BD0 65 78 70 65 63 74 65 64 20 6F 75 74 20 73 68 61 expected out sha
00025BE0 70 65 20 25 64 78 25 64 78 25 64 78 25 64 00 6F pe %dx%dx%dx%d.o
00025BF0 6F 70 73 2C 20 64 65 70 74 68 20 21 3D 20 64 65 ops, depth != de
00025C00 70 74 68 00 6F 75 74 70 75 74 20 74 6F 6F 20 73 pth.output too s
00025C10 6D 61 6C 6C 2C 20 25 64 20 3C 20 25 64 00 62 61 mall, %d < %d.ba
00025C20 64 20 73 74 72 69 64 65 20 62 61 74 63 68 00 62 d stride batch.b
00025C30 61 64 20 73 74 72 69 64 65 20 64 65 70 74 68 00 ad stride depth.
00025C40 64 65 63 6F 6E 76 5F 66 20 65 78 65 63 75 74 65 deconv_f execute
00025C50 20 28 72 65 66 29 20 64 6F 6E 65 21 20 25 64 78  (ref) done! %dx
00025C60 25 64 78 25 64 78 25 64 00 68 65 78 61 67 6F 6E %dx%dx%d.hexagon
00025C70 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 6C 6F 67 73 /ops/src/op_logs
00025C80 6F 66 74 6D 61 78 2E 63 00 43 68 65 63 6B 69 6E oftmax.c.Checkin
00025C90 67 20 6C 6F 67 73 6F 66 74 6D 61 78 20 6E 6F 64 g logsoftmax nod
00025CA0 65 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 e %p.wrong # inp
00025CB0 75 74 73 00 6C 6F 67 73 6F 66 74 6D 61 78 20 6E uts.logsoftmax n
00025CC0 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 ode %p check OK.
00025CD0 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 68 65 out too small.he
00025CE0 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 xagon/ops/src/op
00025CF0 5F 65 78 70 61 6E 64 64 69 6D 73 2E 63 00 43 68 _expanddims.c.Ch
00025D00 65 63 6B 69 6E 67 20 65 78 70 61 6E 64 20 64 69 ecking expand di
00025D10 6D 73 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 ms node %p.wrong
00025D20 20 23 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20  # inputs.wrong 
00025D30 23 20 6F 75 74 70 75 74 73 00 65 78 70 61 6E 64 # outputs.expand
00025D40 20 64 69 6D 73 20 72 61 6E 6B 20 25 70 20 63 68  dims rank %p ch
00025D50 65 63 6B 20 4F 4B 00 6F 75 74 20 74 6F 6F 20 73 eck OK.out too s
00025D60 6D 61 6C 6C 00 68 65 78 61 67 6F 6E 2F 6F 70 73 mall.hexagon/ops
00025D70 2F 73 72 63 2F 6F 70 5F 73 74 72 69 64 65 64 73 /src/op_strideds
00025D80 6C 69 63 65 2E 63 00 63 68 65 63 6B 69 6E 67 20 lice.c.checking 
00025D90 73 6C 69 63 65 20 6E 6F 64 65 20 25 70 00 6E 75 slice node %p.nu
00025DA0 6D 20 69 6E 70 75 74 73 00 6E 75 6D 20 6F 75 74 m inputs.num out
00025DB0 70 75 74 73 00 6F 75 74 20 74 6F 6F 20 73 6D 61 puts.out too sma
00025DC0 6C 6C 00 73 74 72 69 64 65 64 20 73 6C 69 63 65 ll.strided slice
00025DD0 3A 20 4F 6E 6C 79 20 31 44 20 66 6F 72 20 6E 6F : Only 1D for no
00025DE0 77 2E 00 62 61 64 20 73 74 61 72 74 00 62 61 64 w..bad start.bad
00025DF0 20 73 74 6F 70 00 73 6C 69 63 65 20 6E 6F 64 65  stop.slice node
00025E00 20 25 70 20 65 78 65 63 75 74 65 20 25 64 2C 25  %p execute %d,%
00025E10 64 2C 25 64 00 68 65 78 61 67 6F 6E 2F 6F 70 73 d,%d.hexagon/ops
00025E20 2F 73 72 63 2F 6F 70 5F 72 65 73 69 7A 65 6E 65 /src/op_resizene
00025E30 61 72 2E 63 00 72 65 73 69 7A 65 6E 65 61 72 20 ar.c.resizenear 
00025E40 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 23 20 node %p.wrong # 
00025E50 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 20 6F inputs.wrong # o
00025E60 75 74 70 75 74 73 00 72 65 73 69 7A 65 6E 65 61 utputs.resizenea
00025E70 72 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 6F 75 r %p check OK.ou
00025E80 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 25 64 78 25 t too small.%dx%
00025E90 64 78 25 64 78 25 64 20 2D 2D 3E 20 25 64 78 25 dx%dx%d --> %dx%
00025EA0 64 78 25 64 78 25 64 00 68 65 78 61 67 6F 6E 2F dx%dx%d.hexagon/
00025EB0 6F 70 73 2F 73 72 63 2F 6F 70 5F 6D 69 72 72 6F ops/src/op_mirro
00025EC0 72 70 61 64 2E 63 00 6D 69 72 72 6F 72 70 61 64 rpad.c.mirrorpad
00025ED0 20 6E 6F 64 65 20 25 70 00 62 61 64 20 6D 69 72  node %p.bad mir
00025EE0 72 6F 72 20 70 61 64 20 74 79 70 65 00 77 72 6F ror pad type.wro
00025EF0 6E 67 20 23 20 69 6E 70 75 74 73 00 77 72 6F 6E ng # inputs.wron
00025F00 67 20 23 20 6F 75 74 70 75 74 73 00 6D 69 72 72 g # outputs.mirr
00025F10 6F 72 70 61 64 20 25 70 20 63 68 65 63 6B 20 4F orpad %p check O
00025F20 4B 00 69 6E 20 74 65 6E 73 6F 72 3A 20 25 64 78 K.in tensor: %dx
00025F30 25 64 78 25 64 78 25 64 00 62 61 64 20 70 61 64 %dx%dx%d.bad pad
00025F40 20 73 68 61 70 65 00 63 61 6E 27 74 20 70 61 64  shape.can't pad
00025F50 20 62 61 74 63 68 65 73 00 63 61 6E 27 74 20 70  batches.can't p
00025F60 61 64 20 64 65 70 74 68 00 77 69 64 74 68 20 74 ad depth.width t
00025F70 6F 6F 20 73 6D 61 6C 6C 20 28 25 64 3E 3D 25 64 oo small (%d>=%d
00025F80 29 00 68 65 69 67 68 74 20 74 6F 6F 20 73 6D 61 ).height too sma
00025F90 6C 6C 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C ll.out too small
00025FA0 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 .hexagon/ops/src
00025FB0 2F 6F 70 5F 61 64 64 2E 63 00 61 64 64 20 6E 6F /op_add.c.add no
00025FC0 64 65 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E de %p.wrong # in
00025FD0 70 75 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 puts.wrong # out
00025FE0 70 75 74 73 00 61 64 64 20 25 70 20 63 68 65 63 puts.add %p chec
00025FF0 6B 20 4F 4B 00 68 65 78 61 67 6F 6E 2F 69 6E 63 k OK.hexagon/inc
00026000 6C 75 64 65 2F 6E 6E 5F 62 72 6F 61 64 63 61 73 lude/nn_broadcas
00026010 74 2E 68 00 65 6C 65 6D 65 6E 74 77 69 73 65 20 t.h.elementwise 
00026020 65 78 65 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 execute. self=%p
00026030 20 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00  .out too small.
00026040 69 6E 63 6F 6D 70 61 74 69 62 6C 65 20 73 68 61 incompatible sha
00026050 70 65 73 20 28 25 64 78 25 64 78 25 64 78 25 64 pes (%dx%dx%dx%d
00026060 29 20 28 25 64 78 25 64 78 25 64 78 25 64 29 00 ) (%dx%dx%dx%d).
00026070 73 68 61 70 65 73 3A 20 25 64 78 25 64 78 25 64 shapes: %dx%dx%d
00026080 78 25 64 20 25 64 78 25 64 78 25 64 78 25 64 20 x%d %dx%dx%dx%d 
00026090 2D 2D 3E 20 25 64 78 25 64 78 25 64 78 25 64 00 --> %dx%dx%dx%d.
000260A0 65 6C 65 6D 65 6E 74 77 69 73 65 20 64 6F 6E 65 elementwise done
000260B0 2E 20 73 65 6C 66 3D 25 70 20 00 68 65 78 61 67 . self=%p .hexag
000260C0 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 70 72 on/ops/src/op_pr
000260D0 6F 64 5F 66 2E 63 00 73 75 6D 20 6E 6F 64 65 20 od_f.c.sum node 
000260E0 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 %p.wrong # input
000260F0 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 s.wrong # output
00026100 73 00 73 75 6D 20 25 70 20 63 68 65 63 6B 20 4F s.sum %p check O
00026110 4B 00 68 65 78 61 67 6F 6E 2F 69 6E 63 6C 75 64 K.hexagon/includ
00026120 65 2F 6E 6E 5F 72 65 64 75 63 74 69 6F 6E 2E 68 e/nn_reduction.h
00026130 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 68 .out too small.h
00026140 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F exagon/ops/src/o
00026150 70 5F 6D 75 6C 2E 63 00 6D 75 6C 20 6E 6F 64 65 p_mul.c.mul node
00026160 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 75  %p.wrong # inpu
00026170 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 ts.wrong # outpu
00026180 74 73 00 6D 75 6C 20 25 70 20 63 68 65 63 6B 20 ts.mul %p check 
00026190 4F 4B 00 68 65 78 61 67 6F 6E 2F 69 6E 63 6C 75 OK.hexagon/inclu
000261A0 64 65 2F 6E 6E 5F 62 72 6F 61 64 63 61 73 74 2E de/nn_broadcast.
000261B0 68 00 65 6C 65 6D 65 6E 74 77 69 73 65 20 65 78 h.elementwise ex
000261C0 65 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 ecute. self=%p .
000261D0 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 69 6E out too small.in
000261E0 63 6F 6D 70 61 74 69 62 6C 65 20 73 68 61 70 65 compatible shape
000261F0 73 20 28 25 64 78 25 64 78 25 64 78 25 64 29 20 s (%dx%dx%dx%d) 
00026200 28 25 64 78 25 64 78 25 64 78 25 64 29 00 73 68 (%dx%dx%dx%d).sh
00026210 61 70 65 73 3A 20 25 64 78 25 64 78 25 64 78 25 apes: %dx%dx%dx%
00026220 64 20 25 64 78 25 64 78 25 64 78 25 64 20 2D 2D d %dx%dx%dx%d --
00026230 3E 20 25 64 78 25 64 78 25 64 78 25 64 00 65 6C > %dx%dx%dx%d.el
00026240 65 6D 65 6E 74 77 69 73 65 20 64 6F 6E 65 2E 20 ementwise done. 
00026250 73 65 6C 66 3D 25 70 20 00 68 65 78 61 67 6F 6E self=%p .hexagon
00026260 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 70 61 63 6B /ops/src/op_pack
00026270 2E 63 00 63 68 65 63 6B 69 6E 67 20 70 61 63 6B .c.checking pack
00026280 20 6E 6F 64 65 20 25 70 00 6E 75 6D 20 69 6E 70  node %p.num inp
00026290 75 74 73 00 6E 75 6D 20 6F 75 74 70 75 74 73 00 uts.num outputs.
000262A0 62 61 64 20 73 68 61 70 65 00 62 61 64 20 73 69 bad shape.bad si
000262B0 7A 65 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C ze.out too small
000262C0 00 4F 6E 6C 79 20 73 75 70 70 6F 72 74 20 34 44 .Only support 4D
000262D0 2C 20 6F 75 74 20 6F 66 20 64 69 6D 65 6E 73 69 , out of dimensi
000262E0 6F 6E 73 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F ons.hexagon/ops/
000262F0 73 72 63 2F 6F 70 5F 73 68 61 70 65 2E 63 00 43 src/op_shape.c.C
00026300 68 65 63 6B 69 6E 67 20 73 68 61 70 65 20 6E 6F hecking shape no
00026310 64 65 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E de %p.wrong # in
00026320 70 75 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 puts.wrong # out
00026330 70 75 74 73 00 73 68 61 70 65 20 25 70 20 63 68 puts.shape %p ch
00026340 65 63 6B 20 4F 4B 00 73 68 61 70 65 20 65 78 65 eck OK.shape exe
00026350 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F cute. self=%p .o
00026360 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 73 68 61 ut too small.sha
00026370 70 65 20 25 70 20 64 6F 6E 65 00 68 65 78 61 67 pe %p done.hexag
00026380 6F 6E 2F 69 6E 63 6C 75 64 65 2F 6E 6E 5F 62 72 on/include/nn_br
00026390 6F 61 64 63 61 73 74 2E 68 00 65 6C 65 6D 65 6E oadcast.h.elemen
000263A0 74 77 69 73 65 20 65 78 65 63 75 74 65 2E 20 73 twise execute. s
000263B0 65 6C 66 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 elf=%p .out too 
000263C0 73 6D 61 6C 6C 00 69 6E 63 6F 6D 70 61 74 69 62 small.incompatib
000263D0 6C 65 20 73 68 61 70 65 73 20 28 25 64 78 25 64 le shapes (%dx%d
000263E0 78 25 64 78 25 64 29 20 28 25 64 78 25 64 78 25 x%dx%d) (%dx%dx%
000263F0 64 78 25 64 29 00 73 68 61 70 65 73 3A 20 25 64 dx%d).shapes: %d
00026400 78 25 64 78 25 64 78 25 64 20 25 64 78 25 64 78 x%dx%dx%d %dx%dx
00026410 25 64 78 25 64 20 2D 2D 3E 20 25 64 78 25 64 78 %dx%d --> %dx%dx
00026420 25 64 78 25 64 00 65 6C 65 6D 65 6E 74 77 69 73 %dx%d.elementwis
00026430 65 20 64 6F 6E 65 2E 20 73 65 6C 66 3D 25 70 20 e done. self=%p 
00026440 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 .hexagon/ops/src
00026450 2F 6F 70 5F 6C 6F 67 69 63 61 6C 2E 63 00 6C 6F /op_logical.c.lo
00026460 67 69 63 61 6C 20 6F 70 20 6E 6F 64 65 20 25 70 gical op node %p
00026470 00 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 .wrong # inputs.
00026480 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 wrong # outputs.
00026490 6C 6F 67 69 63 61 6C 20 6F 70 20 25 70 20 63 68 logical op %p ch
000264A0 65 63 6B 20 4F 4B 00 68 65 78 61 67 6F 6E 2F 6F eck OK.hexagon/o
000264B0 70 73 2F 73 72 63 2F 6F 70 5F 61 76 67 70 6F 6F ps/src/op_avgpoo
000264C0 6C 2E 63 00 61 76 67 70 6F 6F 6C 20 65 78 65 63 l.c.avgpool exec
000264D0 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 62 61 ute. self=%p .ba
000264E0 64 20 77 69 6E 64 6F 77 2F 73 74 72 69 64 65 20 d window/stride 
000264F0 73 68 61 70 65 00 6F 75 74 20 74 6F 6F 20 73 6D shape.out too sm
00026500 61 6C 6C 00 54 68 69 73 20 6F 70 20 6D 69 67 68 all.This op migh
00026510 74 20 70 61 64 00 61 76 67 70 6F 6F 6C 20 25 70 t pad.avgpool %p
00026520 20 64 6F 6E 65 00 43 68 65 63 6B 69 6E 67 20 61  done.Checking a
00026530 76 67 70 6F 6F 6C 20 6E 6F 64 65 20 25 70 00 61 vgpool node %p.a
00026540 76 67 70 6F 6F 6C 20 77 72 6F 6E 67 20 23 20 69 vgpool wrong # i
00026550 6E 70 75 74 73 00 61 76 67 70 6F 6F 6C 20 77 72 nputs.avgpool wr
00026560 6F 6E 67 20 23 20 6F 75 74 73 00 63 6F 6E 76 32 ong # outs.conv2
00026570 64 20 6E 6F 64 65 20 25 70 20 69 6E 70 75 74 73 d node %p inputs
00026580 3A 20 5B 69 6E 2C 20 6D 69 6E 5F 69 6E 2C 20 6D : [in, min_in, m
00026590 61 78 5F 69 6E 2C 20 77 69 6E 64 6F 77 2C 20 73 ax_in, window, s
000265A0 74 72 69 64 65 5D 3A 00 61 76 67 70 6F 6F 6C 20 tride]:.avgpool 
000265B0 4E 55 4C 4C 20 69 6E 70 75 74 20 25 64 00 61 76 NULL input %d.av
000265C0 67 70 6F 6F 6C 20 4E 55 4C 4C 20 6F 75 74 70 75 gpool NULL outpu
000265D0 74 20 25 64 00 61 76 67 70 6F 6F 6C 20 6E 6F 64 t %d.avgpool nod
000265E0 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 69 6E e %p check OK.in
000265F0 70 75 74 20 25 64 3A 20 42 48 57 44 3D 25 64 2C put %d: BHWD=%d,
00026600 25 64 2C 25 64 2C 25 64 20 64 61 74 61 20 25 64 %d,%d,%d data %d
00026610 20 62 79 74 65 73 20 40 20 25 70 00 68 65 78 61  bytes @ %p.hexa
00026620 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 62 gon/ops/src/op_b
00026630 69 61 73 61 64 64 2E 63 00 43 68 65 63 6B 69 6E iasadd.c.Checkin
00026640 67 20 62 69 61 73 61 64 64 20 6E 6F 64 65 20 25 g biasadd node %
00026650 70 00 62 69 61 73 61 64 64 20 77 72 6F 6E 67 20 p.biasadd wrong 
00026660 23 20 69 6E 70 75 74 73 00 62 69 61 73 61 64 64 # inputs.biasadd
00026670 20 77 72 6F 6E 67 20 23 20 6F 75 74 73 00 62 69  wrong # outs.bi
00026680 61 73 61 64 64 20 4E 55 4C 4C 20 69 6E 70 75 74 asadd NULL input
00026690 20 25 64 00 62 69 61 73 61 64 64 20 4E 55 4C 4C  %d.biasadd NULL
000266A0 20 6F 75 74 70 75 74 20 25 64 00 62 69 61 73 61  output %d.biasa
000266B0 64 64 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B dd node %p check
000266C0 20 4F 4B 00 62 69 61 73 20 73 68 61 70 65 00 64  OK.bias shape.d
000266D0 65 70 74 68 20 6D 69 73 6D 61 74 63 68 20 25 64 epth mismatch %d
000266E0 20 76 73 20 25 64 00 62 69 61 73 61 64 64 20 65  vs %d.biasadd e
000266F0 78 65 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 xecute. self=%p 
00026700 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 62 .out too small.b
00026710 69 61 73 61 64 64 20 69 6E 20 6D 69 6E 2F 6D 61 iasadd in min/ma
00026720 78 3A 20 25 66 2F 25 66 20 62 69 61 73 20 6D 69 x: %f/%f bias mi
00026730 6E 2F 6D 61 78 3A 20 25 66 2F 25 66 00 62 69 61 n/max: %f/%f.bia
00026740 73 61 64 64 3A 20 69 6E 2F 62 69 61 73 2F 6F 75 sadd: in/bias/ou
00026750 74 20 6C 65 76 65 6C 20 73 69 7A 65 3A 20 25 66 t level size: %f
00026760 2F 25 66 2F 25 66 00 62 69 61 73 61 64 64 3A 20 /%f/%f.biasadd: 
00026770 69 6E 20 73 75 62 2F 6D 70 79 3A 20 25 78 2F 25 in sub/mpy: %x/%
00026780 66 20 62 69 61 73 20 73 75 62 2F 6D 70 79 3A 20 f bias sub/mpy: 
00026790 25 78 2F 25 66 00 62 69 61 73 61 64 64 20 25 70 %x/%f.biasadd %p
000267A0 20 64 6F 6E 65 00 68 65 78 61 67 6F 6E 2F 6F 70  done.hexagon/op
000267B0 73 2F 73 72 63 2F 6F 70 5F 63 68 65 63 6B 2E 63 s/src/op_check.c
000267C0 00 43 68 65 63 6B 69 6E 67 20 63 68 65 63 6B 20 .Checking check 
000267D0 6E 6F 64 65 20 25 70 00 63 68 65 63 6B 3A 20 77 node %p.check: w
000267E0 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 63 68 rong # inputs.ch
000267F0 65 63 6B 3A 20 77 72 6F 6E 67 20 23 20 6F 75 74 eck: wrong # out
00026800 70 75 74 73 00 63 68 65 63 6B 20 6E 6F 64 65 20 puts.check node 
00026810 25 70 20 63 68 65 63 6B 20 4F 4B 00 63 68 65 63 %p check OK.chec
00026820 6B 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 3D k execute. self=
00026830 25 70 20 00 63 68 65 63 6B 20 66 61 69 6C 20 73 %p .check fail s
00026840 68 61 70 65 2E 62 61 74 63 68 65 73 20 25 64 20 hape.batches %d 
00026850 21 3D 20 25 64 20 00 63 68 65 63 6B 20 66 61 69 != %d .check fai
00026860 6C 20 73 68 61 70 65 2E 68 65 69 67 68 74 20 25 l shape.height %
00026870 64 20 21 3D 20 25 64 20 00 63 68 65 63 6B 20 66 d != %d .check f
00026880 61 69 6C 20 73 68 61 70 65 2E 77 69 64 74 68 20 ail shape.width 
00026890 25 64 20 21 3D 20 25 64 20 00 63 68 65 63 6B 20 %d != %d .check 
000268A0 66 61 69 6C 20 73 68 61 70 65 2E 64 65 70 74 68 fail shape.depth
000268B0 20 25 64 20 21 3D 20 25 64 20 00 63 68 65 63 6B  %d != %d .check
000268C0 20 66 61 69 6C 20 64 61 74 61 5F 73 69 7A 65 20  fail data_size 
000268D0 25 64 20 21 3D 20 25 64 20 00 64 61 74 61 20 6D %d != %d .data m
000268E0 69 73 6D 61 74 63 68 00 63 68 65 63 6B 20 6E 6F ismatch.check no
000268F0 64 65 20 25 70 20 4F 4B 00 68 65 78 61 67 6F 6E de %p OK.hexagon
00026900 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 63 6C 6F 73 /ops/src/op_clos
00026910 65 2E 63 00 43 68 65 63 6B 69 6E 67 20 63 6C 6F e.c.Checking clo
00026920 73 65 20 71 20 6E 6F 64 65 20 25 70 00 63 68 65 se q node %p.che
00026930 63 6B 3A 20 77 72 6F 6E 67 20 23 20 69 6E 70 75 ck: wrong # inpu
00026940 74 73 00 63 68 65 63 6B 3A 20 77 72 6F 6E 67 20 ts.check: wrong 
00026950 23 20 6F 75 74 70 75 74 73 00 63 6C 6F 73 65 20 # outputs.close 
00026960 71 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 q node %p check 
00026970 4F 4B 00 63 6C 6F 73 65 20 71 20 65 78 65 63 75 OK.close q execu
00026980 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 63 68 65 te. self=%p .che
00026990 63 6B 20 66 61 69 6C 20 73 68 61 70 65 2E 62 61 ck fail shape.ba
000269A0 74 63 68 65 73 20 28 25 64 20 76 73 20 25 64 29 tches (%d vs %d)
000269B0 00 63 68 65 63 6B 20 66 61 69 6C 20 73 68 61 70 .check fail shap
000269C0 65 2E 68 65 69 67 68 74 20 28 25 64 20 76 73 20 e.height (%d vs 
000269D0 25 64 29 00 63 68 65 63 6B 20 66 61 69 6C 20 73 %d).check fail s
000269E0 68 61 70 65 2E 77 69 64 74 68 20 28 25 64 20 76 hape.width (%d v
000269F0 73 20 25 64 29 00 63 68 65 63 6B 20 66 61 69 6C s %d).check fail
00026A00 20 73 68 61 70 65 2E 64 65 70 74 68 20 28 25 64  shape.depth (%d
00026A10 20 76 73 20 25 64 29 00 63 68 65 63 6B 20 66 61  vs %d).check fa
00026A20 69 6C 20 64 61 74 61 5F 73 69 7A 65 20 28 25 64 il data_size (%d
00026A30 20 76 73 20 25 64 29 00 64 75 74 20 6D 69 6E 2F  vs %d).dut min/
00026A40 6D 61 78 20 3D 20 25 66 2F 25 66 20 72 65 66 20 max = %f/%f ref 
00026A50 6D 69 6E 2F 6D 61 78 20 3D 20 25 66 2F 25 66 20 min/max = %f/%f 
00026A60 64 75 74 2F 72 65 66 20 71 3D 25 30 32 78 2F 25 dut/ref q=%02x/%
00026A70 30 38 78 00 69 3A 20 25 64 2F 25 64 20 64 75 74 08x.i: %d/%d dut
00026A80 3A 20 25 66 20 72 65 66 20 25 66 00 64 61 74 61 : %f ref %f.data
00026A90 20 6D 69 73 6D 61 74 63 68 00 63 6C 6F 73 65 20  mismatch.close 
00026AA0 71 20 6E 6F 64 65 20 25 70 20 4F 4B 00 69 3A 20 q node %p OK.i: 
00026AB0 25 64 2F 25 64 20 61 5B 69 5D 3A 20 25 30 38 78 %d/%d a[i]: %08x
00026AC0 20 62 5B 69 5D 3A 20 25 30 38 78 00 63 6C 6F 73  b[i]: %08x.clos
00026AD0 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 3D e execute. self=
00026AE0 25 70 20 00 63 6C 6F 73 65 20 6E 6F 64 65 20 25 %p .close node %
00026AF0 70 20 4F 4B 00 43 68 65 63 6B 69 6E 67 20 63 6C p OK.Checking cl
00026B00 6F 73 65 20 6E 6F 64 65 20 25 70 00 63 6C 6F 73 ose node %p.clos
00026B10 65 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 e node %p check 
00026B20 4F 4B 00 63 6C 6F 73 65 20 63 68 65 63 6B 5F 66 OK.close check_f
00026B30 76 61 6C 73 20 65 78 65 63 75 74 65 2E 20 73 65 vals execute. se
00026B40 6C 66 3D 25 70 20 00 64 61 74 61 20 6E 6F 74 20 lf=%p .data not 
00026B50 63 6C 6F 73 65 2E 20 57 6F 72 73 74 20 6F 66 66 close. Worst off
00026B60 65 6E 64 65 72 3A 20 69 3A 20 25 64 2F 25 64 20 ender: i: %d/%d 
00026B70 61 5B 69 5D 3A 20 25 61 20 25 66 20 62 5B 69 5D a[i]: %a %f b[i]
00026B80 3A 20 25 61 20 25 66 20 6D 61 78 5F 64 69 66 66 : %a %f max_diff
00026B90 3D 25 66 20 72 61 6E 67 65 3D 25 66 20 65 70 73 =%f range=%f eps
00026BA0 69 6C 6F 6E 3D 25 66 00 68 65 78 61 67 6F 6E 2F ilon=%f.hexagon/
00026BB0 6F 70 73 2F 73 72 63 2F 6F 70 5F 63 6F 6E 63 61 ops/src/op_conca
00026BC0 74 2E 63 00 63 6F 6E 63 61 74 20 65 78 65 63 75 t.c.concat execu
00026BD0 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F 6E 6C te. self=%p .onl
00026BE0 79 20 64 65 70 74 68 00 77 69 64 74 68 20 6D 69 y depth.width mi
00026BF0 73 6D 61 74 63 68 20 74 65 6E 73 6F 72 20 25 64 smatch tensor %d
00026C00 00 68 65 69 67 68 74 20 6D 69 73 6D 61 74 63 68 .height mismatch
00026C10 20 74 65 6E 73 6F 72 20 25 64 00 62 61 74 63 68  tensor %d.batch
00026C20 65 73 20 6D 69 73 6D 61 74 63 68 20 74 65 6E 73 es mismatch tens
00026C30 6F 72 20 25 64 00 6F 75 74 20 74 6F 6F 20 73 6D or %d.out too sm
00026C40 61 6C 6C 00 63 6F 6E 63 61 74 20 25 70 20 64 6F all.concat %p do
00026C50 6E 65 00 43 68 65 63 6B 69 6E 67 20 63 6F 6E 63 ne.Checking conc
00026C60 61 74 20 6E 6F 64 65 20 25 70 00 69 6E 70 75 74 at node %p.input
00026C70 20 74 72 69 70 6C 65 74 73 20 70 6C 65 61 73 65  triplets please
00026C80 2C 20 25 64 2C 20 25 64 2C 20 25 64 00 61 74 20 , %d, %d, %d.at 
00026C90 6C 65 61 73 74 20 31 20 69 6E 70 75 74 00 77 72 least 1 input.wr
00026CA0 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 4E 55 ong # outputs.NU
00026CB0 4C 4C 20 69 6E 70 75 74 00 4E 55 4C 4C 20 6F 75 LL input.NULL ou
00026CC0 74 70 75 74 00 63 6F 6E 63 61 74 20 6E 6F 64 65 tput.concat node
00026CD0 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 68 65 78  %p check OK.hex
00026CE0 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F agon/ops/src/op_
00026CF0 63 6F 6E 73 74 2E 63 00 63 61 6E 27 74 20 61 6C const.c.can't al
00026D00 6C 6F 63 20 74 65 6E 73 6F 72 00 63 61 6E 74 20 loc tensor.cant 
00026D10 61 6C 6C 6F 63 20 6E 6F 64 65 00 63 6F 6E 73 74 alloc node.const
00026D20 20 6E 6F 64 65 20 25 70 20 64 74 6F 72 00 4F 4F  node %p dtor.OO
00026D30 50 53 3A 20 63 61 6C 6C 65 64 20 72 65 67 75 6C PS: called regul
00026D40 61 72 20 63 6F 6E 73 74 20 63 74 6F 72 2E 20 64 ar const ctor. d
00026D50 6F 6E 27 74 20 64 6F 20 74 68 61 74 2E 00 43 68 on't do that..Ch
00026D60 65 63 6B 69 6E 67 20 63 6F 6E 73 74 20 6E 6F 64 ecking const nod
00026D70 65 20 25 70 00 63 6F 6E 73 74 3A 20 66 61 74 61 e %p.const: fata
00026D80 6C 3A 20 69 6E 70 75 74 73 00 63 6F 6E 73 74 3A l: inputs.const:
00026D90 20 66 61 74 61 6C 3A 20 4E 55 4C 4C 20 6F 75 74  fatal: NULL out
00026DA0 70 75 74 73 00 63 6F 6E 73 74 3A 20 66 61 74 61 puts.const: fata
00026DB0 6C 3A 20 4E 55 4C 4C 20 6F 75 74 70 75 74 20 30 l: NULL output 0
00026DC0 00 63 6F 6E 73 74 20 6E 6F 64 65 20 25 70 20 63 .const node %p c
00026DD0 68 65 63 6B 20 4F 4B 00 68 65 78 61 67 6F 6E 2F heck OK.hexagon/
00026DE0 6F 70 73 2F 73 72 63 2F 6F 70 5F 63 6F 6E 76 32 ops/src/op_conv2
00026DF0 64 2E 63 00 63 6F 6E 76 32 64 20 65 78 65 63 75 d.c.conv2d execu
00026E00 74 65 2E 20 6E 6F 64 65 3D 25 70 20 69 64 3D 25 te. node=%p id=%
00026E10 78 00 63 6F 6E 76 32 64 20 69 6E 70 75 74 20 25 x.conv2d input %
00026E20 64 78 25 64 78 25 64 78 25 64 00 63 6F 6E 76 32 dx%dx%dx%d.conv2
00026E30 64 20 66 69 6C 74 20 25 64 78 25 64 78 25 64 78 d filt %dx%dx%dx
00026E40 25 64 00 63 6F 6E 76 32 64 20 73 74 72 69 64 65 %d.conv2d stride
00026E50 20 25 64 78 25 64 00 63 6F 6E 76 32 64 20 70 61  %dx%d.conv2d pa
00026E60 64 64 69 6E 67 20 25 64 00 65 78 70 65 63 74 65 dding %d.expecte
00026E70 64 20 6F 75 74 20 73 68 61 70 65 20 25 64 78 25 d out shape %dx%
00026E80 64 78 25 64 78 25 64 00 6F 6F 70 73 2C 20 64 65 dx%dx%d.oops, de
00026E90 70 74 68 20 21 3D 20 64 65 70 74 68 00 6F 75 74 pth != depth.out
00026EA0 70 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 2C 20 25 put too small, %
00026EB0 64 20 3C 20 25 64 00 62 61 64 20 73 74 72 69 64 d < %d.bad strid
00026EC0 65 20 62 61 74 63 68 00 62 61 64 20 73 74 72 69 e batch.bad stri
00026ED0 64 65 20 64 65 70 74 68 00 6D 69 6E 20 74 6F 6F de depth.min too
00026EE0 20 73 6D 61 6C 6C 00 6D 61 78 20 74 6F 6F 20 73  small.max too s
00026EF0 6D 61 6C 6C 00 63 6F 6E 76 32 64 20 65 78 65 63 mall.conv2d exec
00026F00 75 74 65 20 28 72 65 66 29 20 64 6F 6E 65 21 20 ute (ref) done! 
00026F10 25 64 78 25 64 78 25 64 78 25 64 00 63 6F 6E 76 %dx%dx%dx%d.conv
00026F20 32 64 20 6E 6F 64 65 20 69 64 20 25 78 20 63 74 2d node id %x ct
00026F30 6F 72 00 43 68 65 63 6B 69 6E 67 20 63 6F 6E 76 or.Checking conv
00026F40 32 64 20 6E 6F 64 65 20 25 70 00 63 6F 6E 76 32 2d node %p.conv2
00026F50 64 20 69 64 20 25 78 20 77 72 6F 6E 67 20 23 20 d id %x wrong # 
00026F60 69 6E 70 75 74 73 00 63 6F 6E 76 32 64 20 77 72 inputs.conv2d wr
00026F70 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 4E 55 ong # outputs.NU
00026F80 4C 4C 20 69 6E 70 75 74 73 00 4E 55 4C 4C 20 6F LL inputs.NULL o
00026F90 75 74 70 75 74 73 00 69 6E 70 75 74 20 25 64 20 utputs.input %d 
00026FA0 4E 55 4C 4C 00 6F 75 74 70 75 74 20 25 64 20 4E NULL.output %d N
00026FB0 55 4C 4C 00 63 6F 6E 76 32 64 20 6E 6F 64 65 20 ULL.conv2d node 
00026FC0 25 70 20 69 6E 70 75 74 73 3A 20 5B 69 6E 2C 20 %p inputs: [in, 
00026FD0 66 69 6C 74 2C 20 6D 69 6E 5F 69 6E 2C 20 6D 61 filt, min_in, ma
00026FE0 78 5F 69 6E 2C 20 6D 69 6E 5F 66 69 6C 74 2C 20 x_in, min_filt, 
00026FF0 6D 61 78 5F 66 69 6C 74 2C 20 73 74 72 69 64 65 max_filt, stride
00027000 5D 3A 00 63 6F 6E 76 32 64 20 6E 6F 64 65 20 25 ]:.conv2d node %
00027010 70 20 63 68 65 63 6B 20 4F 4B 00 69 6E 70 75 74 p check OK.input
00027020 20 25 64 3A 20 42 48 57 44 3D 25 64 2C 25 64 2C  %d: BHWD=%d,%d,
00027030 25 64 2C 25 64 20 64 61 74 61 20 25 64 20 62 79 %d,%d data %d by
00027040 74 65 73 20 40 20 25 70 00 6F 75 74 70 75 74 20 tes @ %p.output 
00027050 74 6F 6F 20 73 6D 61 6C 6C 2C 20 25 64 20 3C 20 too small, %d < 
00027060 25 64 20 40 20 25 78 00 69 6D 32 63 6F 6C 5F 62 %d @ %x.im2col_b
00027070 75 66 5F 73 69 7A 65 20 3D 20 25 64 20 40 20 25 uf_size = %d @ %
00027080 70 0A 00 66 69 6C 74 5F 70 61 64 20 3D 20 25 64 p..filt_pad = %d
00027090 20 40 20 25 70 0A 00 6F 75 74 5F 70 61 64 20 3D  @ %p..out_pad =
000270A0 20 25 64 20 40 20 25 70 0A 00 63 6F 6E 76 32 64  %d @ %p..conv2d
000270B0 20 65 78 65 63 75 74 65 20 28 68 76 78 29 20 64  execute (hvx) d
000270C0 6F 6E 65 21 20 25 64 78 25 64 78 25 64 78 25 64 one! %dx%dx%dx%d
000270D0 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 .hexagon/ops/src
000270E0 2F 6F 70 5F 66 6C 61 74 74 65 6E 2E 63 00 43 68 /op_flatten.c.Ch
000270F0 65 63 6B 69 6E 67 20 51 66 6C 61 74 74 65 6E 20 ecking Qflatten 
00027100 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 23 20 node %p.wrong # 
00027110 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 20 6F inputs.wrong # o
00027120 75 74 70 75 74 73 00 51 66 6C 61 74 74 65 6E 20 utputs.Qflatten 
00027130 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B node %p check OK
00027140 00 71 66 6C 61 74 74 65 6E 20 65 78 65 63 75 74 .qflatten execut
00027150 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 74 20 e. self=%p .out 
00027160 74 6F 6F 20 73 6D 61 6C 6C 00 63 6F 70 69 65 64 too small.copied
00027170 20 74 65 6E 73 6F 72 20 25 64 20 62 79 74 65 73  tensor %d bytes
00027180 20 6F 66 20 64 61 74 61 00 43 68 65 63 6B 69 6E  of data.Checkin
00027190 67 20 66 6C 61 74 74 65 6E 20 6E 6F 64 65 20 25 g flatten node %
000271A0 70 00 4E 55 4C 4C 20 69 6E 70 75 74 00 4E 55 4C p.NULL input.NUL
000271B0 4C 20 6F 75 74 70 75 74 00 66 6C 61 74 74 65 6E L output.flatten
000271C0 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F  node %p check O
000271D0 4B 00 66 6C 61 74 74 65 6E 20 65 78 65 63 75 74 K.flatten execut
000271E0 65 2E 20 73 65 6C 66 3D 25 70 20 00 68 65 78 61 e. self=%p .hexa
000271F0 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 69 gon/ops/src/op_i
00027200 6E 70 75 74 2E 63 00 43 68 65 63 6B 69 6E 67 20 nput.c.Checking 
00027210 69 6E 70 75 74 20 6E 6F 64 65 20 25 70 00 69 6E input node %p.in
00027220 70 75 74 3A 20 66 61 74 61 6C 3A 20 4E 55 4C 4C put: fatal: NULL
00027230 20 6F 75 74 70 75 74 00 69 6E 70 75 74 20 6E 6F  output.input no
00027240 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 6F de %p check OK.o
00027250 75 74 70 75 74 20 65 78 65 63 75 74 65 2E 20 73 utput execute. s
00027260 65 6C 66 3D 25 70 20 00 6F 6F 70 73 2C 20 69 6E elf=%p .oops, in
00027270 70 75 74 20 23 00 6F 75 74 20 74 6F 6F 20 73 6D put #.out too sm
00027280 61 6C 6C 00 69 6E 70 75 74 20 25 64 20 74 65 6E all.input %d ten
00027290 73 6F 72 73 00 68 65 78 61 67 6F 6E 2F 6F 70 73 sors.hexagon/ops
000272A0 2F 73 72 63 2F 6F 70 5F 6D 61 74 6D 75 6C 2E 63 /src/op_matmul.c
000272B0 00 61 5F 77 69 64 74 68 78 61 5F 64 65 70 74 68 .a_widthxa_depth
000272C0 3D 25 6C 75 78 25 6C 75 20 61 5F 6F 66 66 73 65 =%lux%lu a_offse
000272D0 74 3D 25 6C 64 20 62 5F 6F 66 66 73 65 74 3D 25 t=%ld b_offset=%
000272E0 6C 64 00 6D 61 74 6D 75 6C 20 65 78 65 63 75 74 ld.matmul execut
000272F0 65 20 72 65 66 20 64 6F 6E 65 21 00 6D 61 74 6D e ref done!.matm
00027300 75 6C 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 ul execute. self
00027310 3D 25 70 00 6D 61 74 6D 75 6C 20 69 6E 20 64 69 =%p.matmul in di
00027320 6D 73 3A 20 25 6C 75 78 25 6C 75 78 25 6C 75 78 ms: %lux%lux%lux
00027330 25 6C 75 20 2A 20 25 6C 75 78 25 6C 75 78 25 6C %lu * %lux%lux%l
00027340 75 78 25 6C 75 00 6D 61 74 6D 75 6C 20 6F 75 74 ux%lu.matmul out
00027350 20 64 69 6D 73 3A 20 25 6C 75 78 25 6C 75 78 25  dims: %lux%lux%
00027360 6C 75 78 25 6C 75 00 6F 6F 70 73 2C 20 68 65 69 lux%lu.oops, hei
00027370 67 68 74 20 21 3D 20 31 00 66 69 78 6D 65 3A 20 ght != 1.fixme: 
00027380 73 75 70 70 6F 72 74 20 62 61 74 63 68 65 73 00 support batches.
00027390 6F 75 74 70 75 74 20 74 6F 6F 20 73 6D 61 6C 6C output too small
000273A0 00 6D 69 6E 20 74 6F 6F 20 73 6D 61 6C 6C 00 6D .min too small.m
000273B0 61 78 20 74 6F 6F 20 73 6D 61 6C 6C 00 6D 61 74 ax too small.mat
000273C0 6D 75 6C 20 65 78 65 63 75 74 65 20 64 6F 6E 65 mul execute done
000273D0 21 00 6D 61 74 6D 75 6C 20 6E 6F 64 65 20 69 64 !.matmul node id
000273E0 20 25 78 20 63 74 6F 72 00 43 68 65 63 6B 69 6E  %x ctor.Checkin
000273F0 67 20 6D 61 74 6D 75 6C 20 6E 6F 64 65 20 25 70 g matmul node %p
00027400 00 6D 61 74 6D 75 6C 20 77 72 6F 6E 67 20 23 20 .matmul wrong # 
00027410 69 6E 70 75 74 73 00 6D 61 74 6D 75 6C 20 77 72 inputs.matmul wr
00027420 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 4E 55 ong # outputs.NU
00027430 4C 4C 20 69 6E 70 75 74 73 00 4E 55 4C 4C 20 6F LL inputs.NULL o
00027440 75 74 70 75 74 73 00 69 6E 70 75 74 20 25 64 20 utputs.input %d 
00027450 4E 55 4C 4C 00 6F 75 74 70 75 74 20 25 64 20 4E NULL.output %d N
00027460 55 4C 4C 00 6D 61 74 6D 75 6C 20 6E 6F 64 65 20 ULL.matmul node 
00027470 25 70 20 69 6E 70 75 74 73 3A 20 5B 61 2C 20 62 %p inputs: [a, b
00027480 2C 20 6D 69 6E 5F 61 2C 20 6D 61 78 5F 61 2C 20 , min_a, max_a, 
00027490 6D 69 6E 5F 62 2C 20 6D 61 78 5F 62 5D 3A 00 63 min_b, max_b]:.c
000274A0 6F 75 6C 64 6E 27 74 20 61 6C 6C 6F 63 61 74 65 ouldn't allocate
000274B0 20 62 75 66 66 65 72 20 66 6F 72 20 63 6F 6E 73  buffer for cons
000274C0 74 20 72 65 61 72 72 61 6E 67 65 6D 65 6E 74 00 t rearrangement.
000274D0 50 61 64 20 42 3A 20 66 69 6C 74 5F 65 6C 65 6D Pad B: filt_elem
000274E0 65 6E 74 73 3D 25 6C 75 20 25 6C 75 2C 6F 75 74 ents=%lu %lu,out
000274F0 5F 64 65 70 74 68 3D 25 6C 75 20 25 64 2C 20 66 _depth=%lu %d, f
00027500 69 6C 74 5F 6F 66 66 73 65 74 3D 25 6C 64 00 6D ilt_offset=%ld.m
00027510 61 74 6D 75 6C 20 6E 6F 64 65 20 25 70 20 63 68 atmul node %p ch
00027520 65 63 6B 20 4F 4B 00 69 6E 70 75 74 20 25 64 3A eck OK.input %d:
00027530 20 42 48 57 44 3D 25 64 2C 25 64 2C 25 64 2C 25  BHWD=%d,%d,%d,%
00027540 64 20 64 61 74 61 20 25 64 20 62 79 74 65 73 20 d data %d bytes 
00027550 40 20 25 70 00 50 61 64 20 41 3A 20 61 5F 77 69 @ %p.Pad A: a_wi
00027560 64 74 68 78 61 5F 64 65 70 74 68 3D 25 6C 75 78 dthxa_depth=%lux
00027570 25 6C 75 2C 61 5F 77 69 64 74 68 78 61 5F 64 65 %lu,a_widthxa_de
00027580 70 74 68 5F 70 61 64 3D 25 6C 75 78 25 64 2C 20 pth_pad=%lux%d, 
00027590 61 5F 6F 66 66 73 65 74 3D 25 6C 64 20 62 5F 6F a_offset=%ld b_o
000275A0 66 66 73 65 74 3D 25 6C 64 00 6D 61 74 6D 75 6C ffset=%ld.matmul
000275B0 20 65 78 65 63 75 74 65 20 61 73 6D 20 64 6F 65  execute asm doe
000275C0 73 20 6E 6F 74 20 68 61 6E 64 6C 65 20 6F 75 74 s not handle out
000275D0 5F 77 69 64 74 68 20 21 3D 20 31 2C 20 66 6F 72 _width != 1, for
000275E0 20 6E 6F 77 20 75 73 65 20 72 65 66 65 72 65 6E  now use referen
000275F0 63 65 20 43 20 63 6F 64 65 21 00 6D 61 74 6D 75 ce C code!.matmu
00027600 6C 20 65 78 65 63 75 74 65 20 61 73 6D 20 64 6F l execute asm do
00027610 6E 65 21 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F ne!.hexagon/ops/
00027620 73 72 63 2F 6F 70 5F 6D 61 78 70 6F 6F 6C 2E 63 src/op_maxpool.c
00027630 00 6D 61 78 70 6F 6F 6C 20 65 78 65 63 75 74 65 .maxpool execute
00027640 2E 20 73 65 6C 66 3D 25 70 20 00 62 61 64 20 77 . self=%p .bad w
00027650 69 6E 64 6F 77 2F 73 74 72 69 64 65 20 73 68 61 indow/stride sha
00027660 70 65 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C pe.out too small
00027670 00 54 68 69 73 20 6F 70 20 6D 69 67 68 74 20 70 .This op might p
00027680 61 64 00 6D 61 78 70 6F 6F 6C 20 25 70 20 64 6F ad.maxpool %p do
00027690 6E 65 00 43 68 65 63 6B 69 6E 67 20 6D 61 78 70 ne.Checking maxp
000276A0 6F 6F 6C 20 6E 6F 64 65 20 25 70 00 6D 61 78 70 ool node %p.maxp
000276B0 6F 6F 6C 20 77 72 6F 6E 67 20 23 20 69 6E 70 75 ool wrong # inpu
000276C0 74 73 00 6D 61 78 70 6F 6F 6C 20 77 72 6F 6E 67 ts.maxpool wrong
000276D0 20 23 20 6F 75 74 73 00 63 6F 6E 76 32 64 20 6E  # outs.conv2d n
000276E0 6F 64 65 20 25 70 20 69 6E 70 75 74 73 3A 20 5B ode %p inputs: [
000276F0 69 6E 2C 20 6D 69 6E 5F 69 6E 2C 20 6D 61 78 5F in, min_in, max_
00027700 69 6E 2C 20 77 69 6E 64 6F 77 2C 20 73 74 72 69 in, window, stri
00027710 64 65 5D 3A 00 6D 61 78 70 6F 6F 6C 20 4E 55 4C de]:.maxpool NUL
00027720 4C 20 69 6E 70 75 74 20 25 64 00 6D 61 78 70 6F L input %d.maxpo
00027730 6F 6C 20 4E 55 4C 4C 20 6F 75 74 70 75 74 20 25 ol NULL output %
00027740 64 00 6D 61 78 70 6F 6F 6C 20 6E 6F 64 65 20 25 d.maxpool node %
00027750 70 20 63 68 65 63 6B 20 4F 4B 00 69 6E 70 75 74 p check OK.input
00027760 20 25 64 3A 20 42 48 57 44 3D 25 64 2C 25 64 2C  %d: BHWD=%d,%d,
00027770 25 64 2C 25 64 20 64 61 74 61 20 25 64 20 62 79 %d,%d data %d by
00027780 74 65 73 20 40 20 25 70 00 68 65 78 61 67 6F 6E tes @ %p.hexagon
00027790 2F 69 6E 63 6C 75 64 65 2F 6E 6E 5F 62 72 6F 61 /include/nn_broa
000277A0 64 63 61 73 74 2E 68 00 65 6C 65 6D 65 6E 74 77 dcast.h.elementw
000277B0 69 73 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C ise execute. sel
000277C0 66 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 6D f=%p .out too sm
000277D0 61 6C 6C 00 69 6E 63 6F 6D 70 61 74 69 62 6C 65 all.incompatible
000277E0 20 73 68 61 70 65 73 20 28 25 64 78 25 64 78 25  shapes (%dx%dx%
000277F0 64 78 25 64 29 20 28 25 64 78 25 64 78 25 64 78 dx%d) (%dx%dx%dx
00027800 25 64 29 00 73 68 61 70 65 73 3A 20 25 64 78 25 %d).shapes: %dx%
00027810 64 78 25 64 78 25 64 20 25 64 78 25 64 78 25 64 dx%dx%d %dx%dx%d
00027820 78 25 64 20 2D 2D 3E 20 25 64 78 25 64 78 25 64 x%d --> %dx%dx%d
00027830 78 25 64 00 65 6C 65 6D 65 6E 74 77 69 73 65 20 x%d.elementwise 
00027840 64 6F 6E 65 2E 20 73 65 6C 66 3D 25 70 20 00 68 done. self=%p .h
00027850 65 78 61 67 6F 6E 2F 69 6E 63 6C 75 64 65 2F 6E exagon/include/n
00027860 6E 5F 72 65 64 75 63 74 69 6F 6E 2E 68 00 68 65 n_reduction.h.he
00027870 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 xagon/ops/src/op
00027880 5F 6D 69 6E 6D 61 78 2E 63 00 43 68 65 63 6B 69 _minmax.c.Checki
00027890 6E 67 20 6D 69 6E 2F 6D 61 78 20 6E 6F 64 65 20 ng min/max node 
000278A0 25 70 00 4E 55 4C 4C 20 69 6E 70 75 74 73 00 4E %p.NULL inputs.N
000278B0 55 4C 4C 20 6F 75 74 70 75 74 73 00 4E 55 4C 4C ULL outputs.NULL
000278C0 20 69 6E 70 75 74 20 30 00 4E 55 4C 4C 20 6F 75  input 0.NULL ou
000278D0 74 70 75 74 20 30 00 77 72 6F 6E 67 20 23 20 69 tput 0.wrong # i
000278E0 6E 70 75 74 73 00 6D 69 6E 2F 6D 61 78 20 6E 6F nputs.min/max no
000278F0 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 68 de %p check OK.h
00027900 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F exagon/ops/src/o
00027910 70 5F 73 6F 66 74 6D 61 78 2E 63 00 43 68 65 63 p_softmax.c.Chec
00027920 6B 69 6E 67 20 73 6F 66 74 6D 61 78 20 6E 6F 64 king softmax nod
00027930 65 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 e %p.wrong # inp
00027940 75 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 uts.wrong # outp
00027950 75 74 73 00 73 6F 66 74 6D 61 78 20 6E 6F 64 65 uts.softmax node
00027960 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 71 73 6F  %p check OK.qso
00027970 66 74 6D 61 78 20 65 78 65 63 75 74 65 2E 20 73 ftmax execute. s
00027980 65 6C 66 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 elf=%p .out too 
00027990 73 6D 61 6C 6C 00 71 73 6F 66 74 6D 61 78 20 25 small.qsoftmax %
000279A0 70 20 64 6F 6E 65 00 68 65 78 61 67 6F 6E 2F 6F p done.hexagon/o
000279B0 70 73 2F 73 72 63 2F 6F 70 5F 6E 6F 70 2E 63 00 ps/src/op_nop.c.
000279C0 6E 6F 70 20 6E 6F 64 65 20 25 70 20 64 74 6F 72 nop node %p dtor
000279D0 00 6E 6F 70 20 6E 6F 64 65 20 69 64 20 25 78 20 .nop node id %x 
000279E0 63 74 6F 72 00 43 68 65 63 6B 69 6E 67 20 6E 6F ctor.Checking no
000279F0 70 20 6E 6F 64 65 20 25 70 00 69 6E 70 75 74 73 p node %p.inputs
00027A00 20 21 3D 20 6F 75 74 70 75 74 73 00 6E 6F 70 20  != outputs.nop 
00027A10 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B node %p check OK
00027A20 00 6E 6F 70 20 65 78 65 63 75 74 65 2E 20 73 65 .nop execute. se
00027A30 6C 66 3D 25 70 20 00 68 65 78 61 67 6F 6E 2F 6F lf=%p .hexagon/o
00027A40 70 73 2F 73 72 63 2F 6F 70 5F 6F 75 74 70 75 74 ps/src/op_output
00027A50 2E 63 00 43 68 65 63 6B 69 6E 67 20 6F 75 74 70 .c.Checking outp
00027A60 75 74 20 6E 6F 64 65 20 25 70 00 6F 75 74 70 75 ut node %p.outpu
00027A70 74 3A 20 4E 55 4C 4C 20 69 6E 70 75 74 00 6F 75 t: NULL input.ou
00027A80 74 70 75 74 20 6E 6F 64 65 20 25 70 20 63 68 65 tput node %p che
00027A90 63 6B 20 4F 4B 00 6F 75 74 70 75 74 20 65 78 65 ck OK.output exe
00027AA0 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 62 cute. self=%p .b
00027AB0 61 64 20 23 20 6F 75 74 70 75 74 73 00 6F 75 74 ad # outputs.out
00027AC0 70 75 74 20 25 64 20 74 6F 6F 20 73 6D 61 6C 6C put %d too small
00027AD0 00 63 6F 70 69 65 64 20 25 64 20 74 65 6E 73 6F .copied %d tenso
00027AE0 72 73 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 rs.hexagon/ops/s
00027AF0 72 63 2F 6F 70 5F 70 70 72 69 6E 74 2E 63 00 70 rc/op_pprint.c.p
00027B00 70 72 69 6E 74 69 6E 67 20 6E 6F 64 65 20 25 70 printing node %p
00027B10 20 69 64 20 25 78 00 62 68 77 64 20 3D 20 25 64  id %x.bhwd = %d
00027B20 2C 25 64 2C 25 64 2C 25 64 00 5B 25 64 2C 25 64 ,%d,%d,%d.[%d,%d
00027B30 2C 25 64 2C 25 64 5D 3A 20 25 66 00 5B 25 64 2C ,%d,%d]: %f.[%d,
00027B40 25 64 2C 25 64 2C 25 64 5D 3A 20 30 78 25 30 38 %d,%d,%d]: 0x%08
00027B50 78 00 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 x.wrong # inputs
00027B60 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 .wrong # outputs
00027B70 00 70 70 72 69 6E 74 20 63 68 65 63 6B 20 4F 4B .pprint check OK
00027B80 00 5B 25 64 2C 25 64 2C 25 64 2C 25 64 5D 3A 20 .[%d,%d,%d,%d]: 
00027B90 30 78 25 30 32 78 00 68 65 78 61 67 6F 6E 2F 6F 0x%02x.hexagon/o
00027BA0 70 73 2F 73 72 63 2F 6F 70 5F 70 72 65 66 72 65 ps/src/op_prefre
00027BB0 65 2E 63 00 70 72 65 66 72 65 65 20 6E 6F 64 65 e.c.prefree node
00027BC0 20 25 70 20 64 74 6F 72 00 70 72 65 66 72 65 65  %p dtor.prefree
00027BD0 20 6E 6F 64 65 20 69 64 20 25 78 20 63 74 6F 72  node id %x ctor
00027BE0 00 50 72 65 46 72 65 65 20 6E 6F 64 65 20 73 68 .PreFree node sh
00027BF0 6F 75 6C 64 20 6E 6F 74 20 62 65 20 63 68 65 63 ould not be chec
00027C00 6B 65 64 21 00 50 72 65 46 72 65 65 20 6E 6F 64 ked!.PreFree nod
00027C10 65 20 73 68 6F 75 6C 64 20 6E 6F 74 20 65 78 65 e should not exe
00027C20 63 75 74 65 21 00 68 65 78 61 67 6F 6E 2F 6F 70 cute!.hexagon/op
00027C30 73 2F 73 72 63 2F 6F 70 5F 71 75 61 6E 74 69 7A s/src/op_quantiz
00027C40 65 2E 63 00 64 65 71 75 61 6E 74 69 7A 65 20 33 e.c.dequantize 3
00027C50 32 20 65 78 65 63 75 74 65 2E 00 6F 75 74 20 74 2 execute..out t
00027C60 6F 6F 20 73 6D 61 6C 6C 00 43 68 65 63 6B 69 6E oo small.Checkin
00027C70 67 20 64 65 71 75 61 6E 74 69 7A 65 20 6E 6F 64 g dequantize nod
00027C80 65 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 e %p.wrong # inp
00027C90 75 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 uts.wrong # outp
00027CA0 75 74 73 00 64 65 71 75 61 6E 74 69 7A 65 20 6E uts.dequantize n
00027CB0 6F 64 65 20 25 70 20 4F 4B 00 64 65 71 75 61 6E ode %p OK.dequan
00027CC0 74 69 7A 65 20 65 78 65 63 75 74 65 2E 20 73 65 tize execute. se
00027CD0 6C 66 3D 25 70 20 00 43 68 65 63 6B 69 6E 67 20 lf=%p .Checking 
00027CE0 71 75 61 6E 74 69 7A 65 20 6E 6F 64 65 20 25 70 quantize node %p
00027CF0 00 71 75 61 6E 74 69 7A 65 20 6E 6F 64 65 20 25 .quantize node %
00027D00 70 20 4F 4B 00 71 75 61 6E 74 69 7A 65 20 65 78 p OK.quantize ex
00027D10 65 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 ecute. self=%p .
00027D20 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F hexagon/ops/src/
00027D30 6F 70 5F 72 65 6C 75 2E 63 00 43 68 65 63 6B 69 op_relu.c.Checki
00027D40 6E 67 20 72 65 6C 75 58 20 6E 6F 64 65 20 25 70 ng reluX node %p
00027D50 00 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 .wrong # inputs.
00027D60 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 wrong # outputs.
00027D70 4E 55 4C 4C 20 69 6E 70 75 74 00 4E 55 4C 4C 20 NULL input.NULL 
00027D80 6F 75 74 70 75 74 00 72 65 6C 75 58 20 6E 6F 64 output.reluX nod
00027D90 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 72 65 e %p check OK.re
00027DA0 6C 75 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 lu execute. self
00027DB0 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 6D 61 =%p .out too sma
00027DC0 6C 6C 00 72 65 6C 75 20 25 70 20 64 6F 6E 65 00 ll.relu %p done.
00027DD0 43 68 65 63 6B 69 6E 67 20 72 65 6C 75 20 6E 6F Checking relu no
00027DE0 64 65 20 25 70 00 72 65 6C 75 20 6E 6F 64 65 20 de %p.relu node 
00027DF0 25 70 20 63 68 65 63 6B 20 4F 4B 00 72 65 6C 75 %p check OK.relu
00027E00 20 69 6E 20 6D 69 6E 2F 6D 61 78 3D 25 66 2F 25  in min/max=%f/%
00027E10 66 20 00 72 65 6C 75 20 6F 75 74 20 6D 69 6E 2F f .relu out min/
00027E20 6D 61 78 3D 25 66 2F 25 66 20 00 68 65 78 61 67 max=%f/%f .hexag
00027E30 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 72 65 on/ops/src/op_re
00027E40 71 75 61 6E 74 69 7A 65 2E 63 00 43 68 65 63 6B quantize.c.Check
00027E50 69 6E 67 20 72 65 71 75 61 6E 74 72 61 6E 67 65 ing requantrange
00027E60 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 23  node %p.wrong #
00027E70 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 20  inputs.wrong # 
00027E80 6F 75 74 70 75 74 73 00 72 65 71 75 61 6E 74 72 outputs.requantr
00027E90 61 6E 67 65 20 6E 6F 64 65 20 25 70 20 63 68 65 ange node %p che
00027EA0 63 6B 20 4F 4B 00 72 65 71 75 61 6E 74 72 61 6E ck OK.requantran
00027EB0 67 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 ge execute. self
00027EC0 3D 25 70 20 00 72 65 71 75 61 6E 74 72 61 6E 67 =%p .requantrang
00027ED0 65 20 69 6E 20 6D 69 6E 2F 6D 61 78 3D 25 66 2F e in min/max=%f/
00027EE0 25 66 20 00 72 65 71 75 61 6E 74 72 61 6E 67 65 %f .requantrange
00027EF0 20 6F 75 74 20 6D 69 6E 2F 6D 61 78 3D 25 66 2F  out min/max=%f/
00027F00 25 66 20 00 72 65 71 75 61 6E 74 72 61 6E 67 65 %f .requantrange
00027F10 20 25 70 20 64 6F 6E 65 00 43 68 65 63 6B 69 6E  %p done.Checkin
00027F20 67 20 72 65 71 75 61 6E 74 69 7A 65 20 6E 6F 64 g requantize nod
00027F30 65 20 25 70 00 72 65 71 75 61 6E 74 69 7A 65 20 e %p.requantize 
00027F40 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B node %p check OK
00027F50 00 61 75 74 6F 72 65 71 75 61 6E 74 69 7A 65 20 .autorequantize 
00027F60 65 78 65 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 execute. self=%p
00027F70 20 00 61 75 74 6F 72 65 71 75 61 6E 74 69 7A 65  .autorequantize
00027F80 20 69 6E 20 6D 69 6E 2F 6D 61 78 3D 25 66 2F 25  in min/max=%f/%
00027F90 66 20 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C f .out too small
00027FA0 00 72 65 71 75 61 6E 74 69 7A 65 20 6F 75 74 20 .requantize out 
00027FB0 6D 69 6E 2F 6D 61 78 3D 25 66 2F 25 66 20 00 72 min/max=%f/%f .r
00027FC0 65 71 75 61 6E 74 69 7A 65 20 25 70 20 64 6F 6E equantize %p don
00027FD0 65 00 43 68 65 63 6B 69 6E 67 20 61 75 74 6F 72 e.Checking autor
00027FE0 65 71 75 61 6E 74 69 7A 65 20 6E 6F 64 65 20 25 equantize node %
00027FF0 70 00 4E 55 4C 4C 20 69 6E 70 75 74 00 4E 55 4C p.NULL input.NUL
00028000 4C 20 6F 75 74 70 75 74 00 61 75 74 6F 72 65 71 L output.autoreq
00028010 75 61 6E 74 69 7A 65 20 6E 6F 64 65 20 25 70 20 uantize node %p 
00028020 63 68 65 63 6B 20 4F 4B 00 61 75 74 6F 72 65 71 check OK.autoreq
00028030 75 61 6E 74 69 7A 65 20 6F 75 74 20 6D 69 6E 2F uantize out min/
00028040 6D 61 78 3D 25 66 2F 25 66 20 00 61 75 74 6F 72 max=%f/%f .autor
00028050 65 71 75 61 6E 74 69 7A 65 20 25 70 20 64 6F 6E equantize %p don
00028060 65 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 e...............
00028070 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
preds3332		; 00028080
	db	0x51, 0x51, 0x51, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43
	db	0x43, 0x43, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x49, 0x49, 0x49, 0x49, 0x49
	db	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40
	db	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0xC0
	db	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0
	db	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0
	db	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0
	db	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0
vpred7732		; 00028100
	db	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03
	db	0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02
	db	0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C
	db	0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08
	db	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30
	db	0x30, 0x30, 0x30, 0x30, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20
	db	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0
	db	0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0
	db	0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03
	db	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02
	db	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E
	db	0x0E, 0x0E, 0x0E, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x08
	db	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38
	db	0x38, 0x38, 0x38, 0x38, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x20
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10
	db	0x10, 0x10, 0x10, 0x10, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x60, 0x60
	db	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40
	db	0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03
	db	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02
	db	0x02, 0x02, 0x02, 0x02, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0C, 0x0C
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05
	db	0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1C, 0x1C
	db	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18
	db	0x18, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x70, 0x70
	db	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60
	db	0x60, 0x60, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0
	db	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	db	0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	db	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
00028500 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F hexagon/ops/src/
00028510 6F 70 5F 73 75 70 65 72 6E 6F 64 65 2E 63 00 73 op_supernode.c.s
00028520 75 70 65 72 6E 6F 64 65 20 65 78 65 63 75 74 65 upernode execute
00028530 2E 20 6E 6F 64 65 3D 25 70 20 69 64 3D 25 78 00 . node=%p id=%x.
00028540 73 75 70 65 72 6E 6F 64 65 20 69 6E 70 75 74 20 supernode input 
00028550 25 64 78 25 64 78 25 64 78 25 64 00 73 75 70 65 %dx%dx%dx%d.supe
00028560 72 6E 6F 64 65 20 66 69 6C 74 20 25 64 78 25 64 rnode filt %dx%d
00028570 78 25 64 78 25 64 00 73 75 70 65 72 6E 6F 64 65 x%dx%d.supernode
00028580 20 73 74 72 69 64 65 20 25 64 78 25 64 00 73 75  stride %dx%d.su
00028590 70 65 72 6E 6F 64 65 20 70 61 64 64 69 6E 67 20 pernode padding 
000285A0 25 64 00 65 78 70 65 63 74 65 64 20 6F 75 74 20 %d.expected out 
000285B0 73 68 61 70 65 20 25 64 78 25 64 78 25 64 78 25 shape %dx%dx%dx%
000285C0 64 00 6F 6F 70 73 2C 20 64 65 70 74 68 20 21 3D d.oops, depth !=
000285D0 20 64 65 70 74 68 00 73 63 72 61 74 63 68 20 74  depth.scratch t
000285E0 6F 6F 20 73 6D 61 6C 6C 20 28 25 64 3E 25 64 29 oo small (%d>%d)
000285F0 00 6F 75 74 70 75 74 20 74 6F 6F 20 73 6D 61 6C .output too smal
00028600 6C 2C 20 25 64 20 3C 20 25 64 00 62 61 64 20 73 l, %d < %d.bad s
00028610 74 72 69 64 65 20 62 61 74 63 68 00 62 61 64 20 tride batch.bad 
00028620 73 74 72 69 64 65 20 64 65 70 74 68 00 6D 69 6E stride depth.min
00028630 20 74 6F 6F 20 73 6D 61 6C 6C 00 6D 61 78 20 74  too small.max t
00028640 6F 6F 20 73 6D 61 6C 6C 00 73 75 70 65 72 6E 6F oo small.superno
00028650 64 65 20 65 78 65 63 75 74 65 20 28 72 65 66 29 de execute (ref)
00028660 20 64 6F 6E 65 21 20 25 64 78 25 64 78 25 64 78  done! %dx%dx%dx
00028670 25 64 00 43 68 65 63 6B 69 6E 67 20 73 75 70 65 %d.Checking supe
00028680 72 6E 6F 64 65 20 6E 6F 64 65 20 25 70 00 73 75 rnode node %p.su
00028690 70 65 72 6E 6F 64 65 20 77 72 6F 6E 67 20 23 20 pernode wrong # 
000286A0 69 6E 70 75 74 73 00 73 75 70 65 72 6E 6F 64 65 inputs.supernode
000286B0 20 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73  wrong # outputs
000286C0 00 4E 55 4C 4C 20 69 6E 70 75 74 73 00 4E 55 4C .NULL inputs.NUL
000286D0 4C 20 6F 75 74 70 75 74 73 00 69 6E 70 75 74 20 L outputs.input 
000286E0 25 64 20 4E 55 4C 4C 00 6F 75 74 70 75 74 20 25 %d NULL.output %
000286F0 64 20 4E 55 4C 4C 00 63 6F 75 6C 64 6E 27 74 20 d NULL.couldn't 
00028700 61 6C 6C 6F 63 61 74 65 20 69 6E 66 6F 00 63 6F allocate info.co
00028710 75 6C 64 6E 27 74 20 61 6C 6C 6F 63 61 74 65 20 uldn't allocate 
00028720 62 75 66 66 65 72 20 66 6F 72 20 63 6F 6E 73 74 buffer for const
00028730 20 72 65 61 72 72 61 6E 67 65 6D 65 6E 74 00 73  rearrangement.s
00028740 75 70 65 72 6E 6F 64 65 20 6E 6F 64 65 20 25 70 upernode node %p
00028750 20 63 68 65 63 6B 20 4F 4B 00 73 75 70 65 72 6E  check OK.supern
00028760 6F 64 65 20 69 6E 70 75 74 20 25 64 78 25 64 78 ode input %dx%dx
00028770 25 64 78 25 64 20 5B 25 66 2C 25 66 5D 00 73 75 %dx%d [%f,%f].su
00028780 70 65 72 6E 6F 64 65 20 66 69 6C 74 20 25 64 78 pernode filt %dx
00028790 25 64 78 25 64 78 25 64 20 5B 25 66 2C 25 66 5D %dx%dx%d [%f,%f]
000287A0 00 4D 61 78 69 6D 75 6D 20 76 61 6C 75 65 3A 20 .Maximum value: 
000287B0 25 66 25 73 00 20 28 70 72 65 63 61 6C 63 75 6C %f%s. (precalcul
000287C0 61 74 65 64 29 00 00 57 6F 6F 2C 20 61 62 6C 65 ated)..Woo, able
000287D0 20 74 6F 20 73 6B 69 70 20 69 6D 32 63 6F 6C 00  to skip im2col.
000287E0 57 6F 6F 2C 20 61 62 6C 65 20 74 6F 20 73 6B 69 Woo, able to ski
000287F0 70 20 75 6E 70 61 64 00 53 75 70 65 72 6E 6F 64 p unpad.Supernod
00028800 65 20 25 78 20 6D 61 78 76 61 6C 75 65 20 74 6F e %x maxvalue to
00028810 6F 20 73 6D 61 6C 6C 2C 20 72 65 74 72 79 69 6E o small, retryin
00028820 67 20 77 2F 20 25 66 2E 2E 2E 00 73 75 70 65 72 g w/ %f....super
00028830 6E 6F 64 65 20 65 78 65 63 75 74 65 20 28 68 76 node execute (hv
00028840 78 29 20 64 6F 6E 65 21 20 25 64 78 25 64 78 25 x) done! %dx%dx%
00028850 64 78 25 64 00 68 65 78 61 67 6F 6E 2F 6F 70 73 dx%d.hexagon/ops
00028860 2F 73 72 63 2F 6F 70 5F 61 76 67 70 6F 6F 6C 5F /src/op_avgpool_
00028870 66 2E 63 00 43 68 65 63 6B 69 6E 67 20 61 76 67 f.c.Checking avg
00028880 70 6F 6F 6C 20 6E 6F 64 65 20 25 70 00 61 76 67 pool node %p.avg
00028890 70 6F 6F 6C 20 77 72 6F 6E 67 20 23 20 69 6E 70 pool wrong # inp
000288A0 75 74 73 00 61 76 67 70 6F 6F 6C 20 77 72 6F 6E uts.avgpool wron
000288B0 67 20 23 20 6F 75 74 73 00 61 76 67 70 6F 6F 6C g # outs.avgpool
000288C0 20 4E 55 4C 4C 20 69 6E 70 75 74 20 25 64 00 61  NULL input %d.a
000288D0 76 67 70 6F 6F 6C 20 4E 55 4C 4C 20 6F 75 74 70 vgpool NULL outp
000288E0 75 74 20 25 64 00 61 76 67 70 6F 6F 6C 20 6E 6F ut %d.avgpool no
000288F0 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 66 de %p check OK.f
00028900 70 20 61 76 67 70 6F 6F 6C 20 65 78 65 63 75 74 p avgpool execut
00028910 65 2E 20 73 65 6C 66 3D 25 70 20 00 62 61 64 20 e. self=%p .bad 
00028920 77 69 6E 64 6F 77 2F 73 74 72 69 64 65 20 73 68 window/stride sh
00028930 61 70 65 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C ape.out too smal
00028940 6C 00 54 68 69 73 20 6F 70 20 6D 69 67 68 74 20 l.This op might 
00028950 70 61 64 00 61 76 67 70 6F 6F 6C 20 25 70 20 64 pad.avgpool %p d
00028960 6F 6E 65 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F one.hexagon/ops/
00028970 73 72 63 2F 6F 70 5F 62 69 61 73 61 64 64 5F 66 src/op_biasadd_f
00028980 2E 63 00 43 68 65 63 6B 69 6E 67 20 62 69 61 73 .c.Checking bias
00028990 61 64 64 20 6E 6F 64 65 20 25 70 00 62 69 61 73 add node %p.bias
000289A0 61 64 64 20 77 72 6F 6E 67 20 23 20 69 6E 70 75 add wrong # inpu
000289B0 74 73 00 62 69 61 73 61 64 64 20 77 72 6F 6E 67 ts.biasadd wrong
000289C0 20 23 20 6F 75 74 73 00 62 69 61 73 61 64 64 20  # outs.biasadd 
000289D0 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B node %p check OK
000289E0 00 62 69 61 73 20 73 68 61 70 65 00 64 65 70 74 .bias shape.dept
000289F0 68 20 6D 69 73 6D 61 74 63 68 20 25 64 20 76 73 h mismatch %d vs
00028A00 20 25 64 00 62 69 61 73 61 64 64 20 65 78 65 63  %d.biasadd exec
00028A10 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 ute. self=%p .ou
00028A20 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 62 69 61 73 t too small.bias
00028A30 61 64 64 20 25 70 20 64 6F 6E 65 00 68 65 78 61 add %p done.hexa
00028A40 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 63 gon/ops/src/op_c
00028A50 6F 6E 63 61 74 5F 66 2E 63 00 43 68 65 63 6B 69 oncat_f.c.Checki
00028A60 6E 67 20 63 6F 6E 63 61 74 20 6E 6F 64 65 20 25 ng concat node %
00028A70 70 00 61 74 20 6C 65 61 73 74 20 31 20 69 6E 70 p.at least 1 inp
00028A80 75 74 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 ut.wrong # outpu
00028A90 74 73 00 4E 55 4C 4C 20 69 6E 70 75 74 00 4E 55 ts.NULL input.NU
00028AA0 4C 4C 20 6F 75 74 70 75 74 00 63 6F 6E 63 61 74 LL output.concat
00028AB0 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F  node %p check O
00028AC0 4B 00 63 6F 6E 63 61 74 20 65 78 65 63 75 74 65 K.concat execute
00028AD0 2E 20 73 65 6C 66 3D 25 70 20 00 6F 6E 6C 79 20 . self=%p .only 
00028AE0 64 65 70 74 68 00 77 69 64 74 68 20 6D 69 73 6D depth.width mism
00028AF0 61 74 63 68 20 74 65 6E 73 6F 72 20 25 64 00 68 atch tensor %d.h
00028B00 65 69 67 68 74 20 6D 69 73 6D 61 74 63 68 20 74 eight mismatch t
00028B10 65 6E 73 6F 72 20 25 64 00 62 61 74 63 68 65 73 ensor %d.batches
00028B20 20 6D 69 73 6D 61 74 63 68 20 74 65 6E 73 6F 72  mismatch tensor
00028B30 20 25 64 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C  %d.out too smal
00028B40 6C 00 63 6F 6E 63 61 74 20 25 70 20 64 6F 6E 65 l.concat %p done
00028B50 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 .hexagon/ops/src
00028B60 2F 6F 70 5F 63 6F 6E 76 32 64 5F 66 2E 63 00 43 /op_conv2d_f.c.C
00028B70 68 65 63 6B 69 6E 67 20 63 6F 6E 76 32 64 20 6E hecking conv2d n
00028B80 6F 64 65 20 25 70 00 63 6F 6E 76 32 64 20 69 64 ode %p.conv2d id
00028B90 20 25 78 20 77 72 6F 6E 67 20 23 20 69 6E 70 75  %x wrong # inpu
00028BA0 74 73 00 63 6F 6E 76 32 64 20 77 72 6F 6E 67 20 ts.conv2d wrong 
00028BB0 23 20 6F 75 74 70 75 74 73 00 4E 55 4C 4C 20 69 # outputs.NULL i
00028BC0 6E 70 75 74 73 00 4E 55 4C 4C 20 6F 75 74 70 75 nputs.NULL outpu
00028BD0 74 73 00 69 6E 70 75 74 20 25 64 20 4E 55 4C 4C ts.input %d NULL
00028BE0 00 6F 75 74 70 75 74 20 25 64 20 4E 55 4C 4C 00 .output %d NULL.
00028BF0 63 6F 6E 76 32 64 20 6E 6F 64 65 20 25 70 20 63 conv2d node %p c
00028C00 68 65 63 6B 20 4F 4B 00 63 6F 6E 76 32 64 20 65 heck OK.conv2d e
00028C10 78 65 63 75 74 65 2E 20 6E 6F 64 65 3D 25 70 20 xecute. node=%p 
00028C20 69 64 3D 25 78 00 63 6F 6E 76 32 64 20 69 6E 70 id=%x.conv2d inp
00028C30 75 74 20 25 64 78 25 64 78 25 64 78 25 64 00 63 ut %dx%dx%dx%d.c
00028C40 6F 6E 76 32 64 20 66 69 6C 74 20 25 64 78 25 64 onv2d filt %dx%d
00028C50 78 25 64 78 25 64 00 63 6F 6E 76 32 64 20 73 74 x%dx%d.conv2d st
00028C60 72 69 64 65 20 25 64 78 25 64 00 63 6F 6E 76 32 ride %dx%d.conv2
00028C70 64 20 70 61 64 64 69 6E 67 20 25 64 00 65 78 70 d padding %d.exp
00028C80 65 63 74 65 64 20 6F 75 74 20 73 68 61 70 65 20 ected out shape 
00028C90 25 64 78 25 64 78 25 64 78 25 64 00 6F 6F 70 73 %dx%dx%dx%d.oops
00028CA0 2C 20 64 65 70 74 68 20 21 3D 20 64 65 70 74 68 , depth != depth
00028CB0 00 6F 75 74 70 75 74 20 74 6F 6F 20 73 6D 61 6C .output too smal
00028CC0 6C 2C 20 25 64 20 3C 20 25 64 00 62 61 64 20 73 l, %d < %d.bad s
00028CD0 74 72 69 64 65 20 62 61 74 63 68 00 62 61 64 20 tride batch.bad 
00028CE0 73 74 72 69 64 65 20 64 65 70 74 68 00 63 6F 6E stride depth.con
00028CF0 76 32 64 5F 66 20 65 78 65 63 75 74 65 20 28 72 v2d_f execute (r
00028D00 65 66 29 20 64 6F 6E 65 21 20 25 64 78 25 64 78 ef) done! %dx%dx
00028D10 25 64 78 25 64 00 68 65 78 61 67 6F 6E 2F 6F 70 %dx%d.hexagon/op
00028D20 73 2F 73 72 63 2F 6F 70 5F 6D 61 74 6D 75 6C 5F s/src/op_matmul_
00028D30 66 2E 63 00 43 68 65 63 6B 69 6E 67 20 6D 61 74 f.c.Checking mat
00028D40 6D 75 6C 20 6E 6F 64 65 20 25 70 00 6D 61 74 6D mul node %p.matm
00028D50 75 6C 20 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 ul wrong # input
00028D60 73 00 6D 61 74 6D 75 6C 20 77 72 6F 6E 67 20 23 s.matmul wrong #
00028D70 20 6F 75 74 70 75 74 73 00 4E 55 4C 4C 20 69 6E  outputs.NULL in
00028D80 70 75 74 73 00 4E 55 4C 4C 20 6F 75 74 70 75 74 puts.NULL output
00028D90 73 00 6D 61 74 6D 75 6C 20 6E 6F 64 65 20 25 70 s.matmul node %p
00028DA0 20 63 68 65 63 6B 20 4F 4B 00 6D 61 74 6D 75 6C  check OK.matmul
00028DB0 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 3D 25  execute. self=%
00028DC0 70 00 6D 61 74 6D 75 6C 20 69 6E 20 64 69 6D 73 p.matmul in dims
00028DD0 3A 20 25 64 78 25 64 78 25 64 78 25 64 20 2A 20 : %dx%dx%dx%d * 
00028DE0 25 64 78 25 64 78 25 64 78 25 64 00 6F 6F 70 73 %dx%dx%dx%d.oops
00028DF0 2C 20 68 65 69 67 68 74 20 21 3D 20 31 00 66 69 , height != 1.fi
00028E00 78 6D 65 3A 20 73 75 70 70 6F 72 74 20 62 61 74 xme: support bat
00028E10 63 68 65 73 00 6F 75 74 70 75 74 20 74 6F 6F 20 ches.output too 
00028E20 73 6D 61 6C 6C 00 6D 61 74 6D 75 6C 20 65 78 65 small.matmul exe
00028E30 63 75 74 65 20 28 72 65 66 29 20 64 6F 6E 65 21 cute (ref) done!
00028E40 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 .hexagon/ops/src
00028E50 2F 6F 70 5F 6D 61 78 70 6F 6F 6C 5F 66 2E 63 00 /op_maxpool_f.c.
00028E60 43 68 65 63 6B 69 6E 67 20 6D 61 78 70 6F 6F 6C Checking maxpool
00028E70 20 6E 6F 64 65 20 25 70 00 6D 61 78 70 6F 6F 6C  node %p.maxpool
00028E80 20 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00  wrong # inputs.
00028E90 6D 61 78 70 6F 6F 6C 20 77 72 6F 6E 67 20 23 20 maxpool wrong # 
00028EA0 6F 75 74 73 00 6D 61 78 70 6F 6F 6C 20 4E 55 4C outs.maxpool NUL
00028EB0 4C 20 69 6E 70 75 74 20 25 64 00 6D 61 78 70 6F L input %d.maxpo
00028EC0 6F 6C 20 4E 55 4C 4C 20 6F 75 74 70 75 74 20 25 ol NULL output %
00028ED0 64 00 6D 61 78 70 6F 6F 6C 20 6E 6F 64 65 20 25 d.maxpool node %
00028EE0 70 20 63 68 65 63 6B 20 4F 4B 00 6D 61 78 70 6F p check OK.maxpo
00028EF0 6F 6C 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 ol execute. self
00028F00 3D 25 70 20 00 62 61 64 20 77 69 6E 64 6F 77 2F =%p .bad window/
00028F10 73 74 72 69 64 65 20 73 68 61 70 65 00 6F 75 74 stride shape.out
00028F20 20 74 6F 6F 20 73 6D 61 6C 6C 00 54 68 69 73 20  too small.This 
00028F30 6F 70 20 6D 69 67 68 74 20 70 61 64 00 6D 61 78 op might pad.max
00028F40 70 6F 6F 6C 20 25 70 20 64 6F 6E 65 00 68 65 78 pool %p done.hex
00028F50 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F agon/ops/src/op_
00028F60 72 65 6C 75 5F 66 2E 63 00 43 68 65 63 6B 69 6E relu_f.c.Checkin
00028F70 67 20 72 65 6C 75 58 20 6E 6F 64 65 20 25 70 00 g reluX node %p.
00028F80 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 wrong # inputs.w
00028F90 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 72 rong # outputs.r
00028FA0 65 6C 75 58 20 6E 6F 64 65 20 25 70 20 63 68 65 eluX node %p che
00028FB0 63 6B 20 4F 4B 00 72 65 6C 75 58 20 65 78 65 63 ck OK.reluX exec
00028FC0 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 ute. self=%p .ou
00028FD0 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 72 65 6C 75 t too small.relu
00028FE0 58 20 25 70 20 64 6F 6E 65 00 43 68 65 63 6B 69 X %p done.Checki
00028FF0 6E 67 20 72 65 6C 75 20 6E 6F 64 65 20 25 70 00 ng relu node %p.
00029000 72 65 6C 75 20 6E 6F 64 65 20 25 70 20 63 68 65 relu node %p che
00029010 63 6B 20 4F 4B 00 72 65 6C 75 20 65 78 65 63 75 ck OK.relu execu
00029020 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 72 65 6C te. self=%p .rel
00029030 75 20 25 70 20 64 6F 6E 65 00 68 65 78 61 67 6F u %p done.hexago
00029040 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 73 6F 66 n/ops/src/op_sof
00029050 74 6D 61 78 5F 66 2E 63 00 43 68 65 63 6B 69 6E tmax_f.c.Checkin
00029060 67 20 73 6F 66 74 6D 61 78 20 6E 6F 64 65 20 25 g softmax node %
00029070 70 00 4E 55 4C 4C 20 69 6E 70 75 74 73 00 4E 55 p.NULL inputs.NU
00029080 4C 4C 20 6F 75 74 70 75 74 73 00 4E 55 4C 4C 20 LL outputs.NULL 
00029090 69 6E 70 75 74 20 30 00 4E 55 4C 4C 20 6F 75 74 input 0.NULL out
000290A0 70 75 74 20 30 00 77 72 6F 6E 67 20 23 20 69 6E put 0.wrong # in
000290B0 70 75 74 73 00 73 6F 66 74 6D 61 78 20 6E 6F 64 puts.softmax nod
000290C0 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 6F 75 e %p check OK.ou
000290D0 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 68 65 78 61 t too small.hexa
000290E0 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 6C gon/ops/src/op_l
000290F0 72 6E 2E 63 00 43 68 65 63 6B 69 6E 67 20 71 20 rn.c.Checking q 
00029100 6C 72 6E 20 6E 6F 64 65 20 25 70 00 4C 52 4E 20 lrn node %p.LRN 
00029110 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 4C wrong # inputs.L
00029120 52 4E 20 77 72 6F 6E 67 20 23 20 6F 75 74 73 00 RN wrong # outs.
00029130 71 20 6C 72 6E 20 25 70 20 63 68 65 63 6B 20 4F q lrn %p check O
00029140 4B 00 6F 75 74 70 75 74 20 74 6F 6F 20 73 6D 61 K.output too sma
00029150 6C 6C 2C 20 25 64 20 3C 20 25 64 00 4C 52 4E 20 ll, %d < %d.LRN 
00029160 62 79 20 62 61 74 63 68 65 73 3F 00 68 65 78 61 by batches?.hexa
00029170 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 6C gon/ops/src/op_l
00029180 72 6E 5F 66 2E 63 00 43 68 65 63 6B 69 6E 67 20 rn_f.c.Checking 
00029190 6C 72 6E 20 6E 6F 64 65 20 25 70 00 4C 52 4E 20 lrn node %p.LRN 
000291A0 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 4C wrong # inputs.L
000291B0 52 4E 20 77 72 6F 6E 67 20 23 20 6F 75 74 73 00 RN wrong # outs.
000291C0 6C 72 6E 20 6E 6F 64 65 20 25 70 20 63 68 65 63 lrn node %p chec
000291D0 6B 20 4F 4B 00 6F 75 74 70 75 74 20 74 6F 6F 20 k OK.output too 
000291E0 73 6D 61 6C 6C 2C 20 25 64 20 3C 20 25 64 00 4C small, %d < %d.L
000291F0 52 4E 20 62 79 20 62 61 74 63 68 65 73 3F 00 40 RN by batches?.@
00029200 20 5B 25 64 2C 25 64 2C 25 64 2C 25 64 5D 3A 20  [%d,%d,%d,%d]: 
00029210 72 65 73 75 6C 74 3D 25 66 0A 00 77 69 6E 64 6F result=%f..windo
00029220 77 3D 5B 25 64 2C 25 64 2C 25 64 5D 20 65 61 63 w=[%d,%d,%d] eac
00029230 68 73 69 64 65 3D 5B 25 64 2C 25 64 2C 25 64 5D hside=[%d,%d,%d]
00029240 00 79 3D 25 64 20 78 3D 25 64 20 7A 3D 25 64 20 .y=%d x=%d z=%d 
00029250 69 6E 70 75 74 3D 25 66 20 73 75 6D 3D 25 66 0A input=%f sum=%f.
00029260 00 25 66 20 2B 20 25 66 20 2A 20 25 66 3A 20 25 .%f + %f * %f: %
00029270 66 00 70 6F 77 28 25 66 2C 25 66 29 3A 20 25 66 f.pow(%f,%f): %f
00029280 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 .hexagon/ops/src
00029290 2F 6F 70 5F 76 61 72 69 61 62 6C 65 2E 63 00 4E /op_variable.c.N
000292A0 6F 74 20 61 20 76 61 72 69 61 62 6C 65 00 74 6F ot a variable.to
000292B0 6F 20 73 6D 61 6C 6C 00 76 61 72 69 61 62 6C 65 o small.variable
000292C0 20 6E 6F 64 65 20 25 70 20 64 74 6F 72 00 61 6C  node %p dtor.al
000292D0 6C 6F 63 20 6E 6F 64 65 00 74 65 6E 73 6F 72 20 loc node.tensor 
000292E0 73 74 6F 72 61 67 65 00 43 68 65 63 6B 69 6E 67 storage.Checking
000292F0 20 76 61 72 69 61 62 6C 65 20 6E 6F 64 65 20 25  variable node %
00029300 70 00 74 6F 6F 20 6D 61 6E 79 20 69 6E 70 75 74 p.too many input
00029310 73 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C 00 s.out too small.
00029320 76 61 72 69 61 62 6C 65 20 65 78 65 63 75 74 65 variable execute
00029330 2E 20 73 65 6C 66 3D 25 70 20 00 62 61 64 20 23 . self=%p .bad #
00029340 20 69 6E 70 75 74 73 20 28 6F 64 64 29 00 74 6F  inputs (odd).to
00029350 6F 20 6D 61 6E 79 20 6F 75 74 73 00 61 73 73 69 o many outs.assi
00029360 67 6E 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 gn execute. self
00029370 3D 25 70 20 69 6E 70 75 74 73 3D 25 64 00 63 61 =%p inputs=%d.ca
00029380 6E 27 74 20 63 6F 70 79 20 74 6F 20 69 6E 70 75 n't copy to inpu
00029390 74 20 25 64 00 63 61 6E 27 74 20 63 6F 70 79 20 t %d.can't copy 
000293A0 74 6F 20 6F 75 74 70 75 74 20 25 64 00 68 65 78 to output %d.hex
000293B0 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F agon/ops/src/op_
000293C0 72 65 73 68 61 70 65 2E 63 00 43 68 65 63 6B 69 reshape.c.Checki
000293D0 6E 67 20 51 72 65 73 68 61 70 65 20 6E 6F 64 65 ng Qreshape node
000293E0 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 75  %p.wrong # inpu
000293F0 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 ts.wrong # outpu
00029400 74 73 00 51 72 65 73 68 61 70 65 20 6E 6F 64 65 ts.Qreshape node
00029410 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 43 68 65  %p check OK.Che
00029420 63 6B 69 6E 67 20 72 65 73 68 61 70 65 20 6E 6F cking reshape no
00029430 64 65 20 25 70 00 72 65 73 68 61 70 65 20 6E 6F de %p.reshape no
00029440 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 28 de %p check OK.(
00029450 71 29 72 65 73 68 61 70 65 20 65 78 65 63 75 74 q)reshape execut
00029460 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 74 20 e. self=%p .out 
00029470 74 6F 6F 20 73 6D 61 6C 6C 00 74 6F 6F 20 6D 61 too small.too ma
00029480 6E 79 20 75 6E 6B 6E 6F 77 6E 20 64 69 6D 65 6E ny unknown dimen
00029490 73 69 6F 6E 73 00 62 61 64 20 65 78 74 72 61 20 sions.bad extra 
000294A0 63 6F 70 79 00 71 72 65 73 68 61 70 65 20 25 64 copy.qreshape %d
000294B0 78 25 64 78 25 64 78 25 78 20 28 25 64 78 25 64 x%dx%dx%x (%dx%d
000294C0 78 25 64 78 25 64 29 20 2D 2D 3E 20 25 64 78 25 x%dx%d) --> %dx%
000294D0 64 78 25 64 78 25 64 00 68 65 78 61 67 6F 6E 2F dx%dx%d.hexagon/
000294E0 6F 70 73 2F 73 72 63 2F 6F 70 5F 73 6C 69 63 65 ops/src/op_slice
000294F0 2E 63 00 63 68 65 63 6B 69 6E 67 20 73 6C 69 63 .c.checking slic
00029500 65 20 6E 6F 64 65 20 25 70 00 6E 75 6D 20 69 6E e node %p.num in
00029510 70 75 74 73 00 6E 75 6D 20 6F 75 74 70 75 74 73 puts.num outputs
00029520 00 73 6C 69 63 65 20 6E 6F 64 65 20 25 70 20 65 .slice node %p e
00029530 78 65 63 75 74 65 00 6F 75 74 20 74 6F 6F 20 73 xecute.out too s
00029540 6D 61 6C 6C 00 62 61 64 20 62 5F 73 69 7A 65 00 mall.bad b_size.
00029550 62 61 64 20 68 5F 73 69 7A 65 00 62 61 64 20 77 bad h_size.bad w
00029560 5F 73 69 7A 65 00 62 61 64 20 64 5F 73 69 7A 65 _size.bad d_size
00029570 00 69 6E 20 62 20 74 6F 6F 20 73 6D 61 6C 6C 00 .in b too small.
00029580 69 6E 20 68 20 74 6F 6F 20 73 6D 61 6C 6C 00 69 in h too small.i
00029590 6E 20 77 20 74 6F 6F 20 73 6D 61 6C 6C 00 69 6E n w too small.in
000295A0 20 64 20 74 6F 6F 20 73 6D 61 6C 6C 00 68 65 78  d too small.hex
000295B0 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F agon/ops/src/op_
000295C0 73 70 6C 69 74 2E 63 00 63 68 65 63 6B 69 6E 67 split.c.checking
000295D0 20 73 70 6C 69 74 20 6E 6F 64 65 20 25 70 00 6E  split node %p.n
000295E0 75 6D 20 69 6E 70 75 74 73 00 6E 75 6D 20 6F 75 um inputs.num ou
000295F0 74 70 75 74 73 00 73 70 6C 69 74 20 6E 6F 64 65 tputs.split node
00029600 20 25 70 20 65 78 65 63 75 74 65 00 6F 75 74 20  %p execute.out 
00029610 25 64 20 74 6F 6F 20 73 6D 61 6C 6C 00 46 49 58 %d too small.FIX
00029620 4D 45 3A 20 73 70 6C 69 74 20 61 73 73 75 6D 65 ME: split assume
00029630 73 20 64 65 70 74 68 2C 20 6E 65 65 64 20 63 6F s depth, need co
00029640 6D 70 61 74 69 62 6C 65 20 64 69 6D 65 6E 73 69 mpatible dimensi
00029650 6F 6E 20 76 61 6C 75 65 00 68 65 78 61 67 6F 6E on value.hexagon
00029660 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 74 61 6E 68 /ops/src/op_tanh
00029670 5F 66 2E 63 00 43 68 65 63 6B 69 6E 67 20 74 61 _f.c.Checking ta
00029680 6E 68 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 nh node %p.wrong
00029690 20 23 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20  # inputs.wrong 
000296A0 23 20 6F 75 74 70 75 74 73 00 74 61 6E 68 20 6E # outputs.tanh n
000296B0 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 ode %p check OK.
000296C0 74 61 6E 68 20 65 78 65 63 75 74 65 2E 20 73 65 tanh execute. se
000296D0 6C 66 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 lf=%p .out too s
000296E0 6D 61 6C 6C 00 74 61 6E 68 20 25 70 20 64 6F 6E mall.tanh %p don
000296F0 65 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 e.hexagon/ops/sr
00029700 63 2F 6F 70 5F 73 69 67 6D 6F 69 64 5F 66 2E 63 c/op_sigmoid_f.c
00029710 00 43 68 65 63 6B 69 6E 67 20 73 69 67 6D 6F 69 .Checking sigmoi
00029720 64 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 d node %p.wrong 
00029730 23 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 # inputs.wrong #
00029740 20 6F 75 74 70 75 74 73 00 73 69 67 6D 6F 69 64  outputs.sigmoid
00029750 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B 20 4F  node %p check O
00029760 4B 00 73 69 67 6D 6F 69 64 20 65 78 65 63 75 74 K.sigmoid execut
00029770 65 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 74 20 e. self=%p .out 
00029780 74 6F 6F 20 73 6D 61 6C 6C 00 73 69 67 6D 6F 69 too small.sigmoi
00029790 64 20 25 70 20 64 6F 6E 65 00 00 00 00 00 00 00 d %p done.......
000297A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
; ...
lut_non_lin_asm_tanh		; 00029800
	db	0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x82, 0x00, 0x83, 0x00
	db	0x85, 0x00, 0x87, 0x00, 0x8C, 0x00, 0x93, 0x00, 0x9E, 0x00, 0xAE, 0x00, 0xC5, 0x00, 0xE1, 0x00
	db	0x00, 0x00, 0x20, 0x00, 0x3C, 0x00, 0x52, 0x00, 0x62, 0x00, 0x6D, 0x00, 0x74, 0x00, 0x79, 0x00
	db	0x7B, 0x00, 0x7D, 0x00, 0x7E, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x07, 0x00
	db	0x0C, 0x00, 0x13, 0x00, 0x1D, 0x00, 0x2C, 0x00, 0x41, 0x00, 0x59, 0x00, 0x6F, 0x00, 0x7D, 0x00
	db	0x7D, 0x00, 0x6F, 0x00, 0x59, 0x00, 0x41, 0x00, 0x2C, 0x00, 0x1D, 0x00, 0x13, 0x00, 0x0C, 0x00
	db	0x07, 0x00, 0x04, 0x00, 0x03, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
00029900 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F hexagon/ops/src/
00029910 6F 70 5F 74 61 6E 68 2E 63 00 74 61 6E 68 20 65 op_tanh.c.tanh e
00029920 78 65 63 75 74 65 2E 20 73 65 6C 66 3D 25 70 20 xecute. self=%p 
00029930 00 54 68 69 73 20 6F 70 20 6D 69 67 68 74 20 70 .This op might p
00029940 61 64 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C 6C ad.out too small
00029950 00 74 61 6E 68 20 25 70 20 64 6F 6E 65 00 43 68 .tanh %p done.Ch
00029960 65 63 6B 69 6E 67 20 74 61 6E 68 20 6E 6F 64 65 ecking tanh node
00029970 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 75  %p.wrong # inpu
00029980 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 ts.wrong # outpu
00029990 74 73 00 74 61 6E 68 20 6E 6F 64 65 20 25 70 20 ts.tanh node %p 
000299A0 63 68 65 63 6B 20 4F 4B 00 00 00 00 00 00 00 00 check OK........
000299B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
; ...
lut_non_lin_asm_sigmoid		; 00029A00
	db	0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x05, 0x00, 0x06, 0x00, 0x08, 0x00, 0x0A, 0x00, 0x0C, 0x00
	db	0x0F, 0x00, 0x13, 0x00, 0x17, 0x00, 0x1C, 0x00, 0x22, 0x00, 0x29, 0x00, 0x30, 0x00, 0x38, 0x00
	db	0x40, 0x00, 0x48, 0x00, 0x50, 0x00, 0x57, 0x00, 0x5E, 0x00, 0x64, 0x00, 0x69, 0x00, 0x6D, 0x00
	db	0x71, 0x00, 0x74, 0x00, 0x76, 0x00, 0x78, 0x00, 0x7A, 0x00, 0x7B, 0x00, 0x7C, 0x00, 0x7D, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x00
	db	0x04, 0x00, 0x04, 0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x07, 0x00, 0x08, 0x00, 0x08, 0x00
	db	0x08, 0x00, 0x08, 0x00, 0x07, 0x00, 0x07, 0x00, 0x06, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00
	db	0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
00029B00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F hexagon/ops/src/
00029B10 6F 70 5F 73 69 67 6D 6F 69 64 2E 63 00 73 69 67 op_sigmoid.c.sig
00029B20 6D 6F 69 64 20 65 78 65 63 75 74 65 2E 20 73 65 moid execute. se
00029B30 6C 66 3D 25 70 20 00 54 68 69 73 20 6F 70 20 6D lf=%p .This op m
00029B40 69 67 68 74 20 70 61 64 00 6F 75 74 20 74 6F 6F ight pad.out too
00029B50 20 73 6D 61 6C 6C 00 73 69 67 6D 6F 69 64 20 25  small.sigmoid %
00029B60 70 20 64 6F 6E 65 00 43 68 65 63 6B 69 6E 67 20 p done.Checking 
00029B70 73 69 67 6D 6F 69 64 20 6E 6F 64 65 20 25 70 00 sigmoid node %p.
00029B80 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 wrong # inputs.w
00029B90 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 73 rong # outputs.s
00029BA0 69 67 6D 6F 69 64 20 6E 6F 64 65 20 25 70 20 63 igmoid node %p c
00029BB0 68 65 63 6B 20 4F 4B 00 68 65 78 61 67 6F 6E 2F heck OK.hexagon/
00029BC0 6F 70 73 2F 73 72 63 2F 6F 70 5F 61 64 64 5F 66 ops/src/op_add_f
00029BD0 2E 63 00 61 64 64 20 6E 6F 64 65 20 25 70 00 77 .c.add node %p.w
00029BE0 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 72 rong # inputs.wr
00029BF0 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 61 64 ong # outputs.ad
00029C00 64 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 68 65 d %p check OK.he
00029C10 78 61 67 6F 6E 2F 69 6E 63 6C 75 64 65 2F 6E 6E xagon/include/nn
00029C20 5F 62 72 6F 61 64 63 61 73 74 2E 68 00 65 6C 65 _broadcast.h.ele
00029C30 6D 65 6E 74 77 69 73 65 20 65 78 65 63 75 74 65 mentwise execute
00029C40 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 74 20 74 . self=%p .out t
00029C50 6F 6F 20 73 6D 61 6C 6C 00 69 6E 63 6F 6D 70 61 oo small.incompa
00029C60 74 69 62 6C 65 20 73 68 61 70 65 73 20 28 25 64 tible shapes (%d
00029C70 78 25 64 78 25 64 78 25 64 29 20 28 25 64 78 25 x%dx%dx%d) (%dx%
00029C80 64 78 25 64 78 25 64 29 00 73 68 61 70 65 73 3A dx%dx%d).shapes:
00029C90 20 25 64 78 25 64 78 25 64 78 25 64 20 25 64 78  %dx%dx%dx%d %dx
00029CA0 25 64 78 25 64 78 25 64 20 2D 2D 3E 20 25 64 78 %dx%dx%d --> %dx
00029CB0 25 64 78 25 64 78 25 64 00 65 6C 65 6D 65 6E 74 %dx%dx%d.element
00029CC0 77 69 73 65 20 64 6F 6E 65 2E 20 73 65 6C 66 3D wise done. self=
00029CD0 25 70 20 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F %p .hexagon/ops/
00029CE0 73 72 63 2F 6F 70 5F 6D 75 6C 5F 66 2E 63 00 6D src/op_mul_f.c.m
00029CF0 75 6C 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 ul node %p.wrong
00029D00 20 23 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20  # inputs.wrong 
00029D10 23 20 6F 75 74 70 75 74 73 00 6D 75 6C 20 25 70 # outputs.mul %p
00029D20 20 63 68 65 63 6B 20 4F 4B 00 6D 75 6C 5F 66 20  check OK.mul_f 
00029D30 6E 6F 64 65 20 25 70 00 68 65 78 61 67 6F 6E 2F node %p.hexagon/
00029D40 69 6E 63 6C 75 64 65 2F 6E 6E 5F 62 72 6F 61 64 include/nn_broad
00029D50 63 61 73 74 2E 68 00 65 6C 65 6D 65 6E 74 77 69 cast.h.elementwi
00029D60 73 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 se execute. self
00029D70 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 6D 61 =%p .out too sma
00029D80 6C 6C 00 69 6E 63 6F 6D 70 61 74 69 62 6C 65 20 ll.incompatible 
00029D90 73 68 61 70 65 73 20 28 25 64 78 25 64 78 25 64 shapes (%dx%dx%d
00029DA0 78 25 64 29 20 28 25 64 78 25 64 78 25 64 78 25 x%d) (%dx%dx%dx%
00029DB0 64 29 00 73 68 61 70 65 73 3A 20 25 64 78 25 64 d).shapes: %dx%d
00029DC0 78 25 64 78 25 64 20 25 64 78 25 64 78 25 64 78 x%dx%d %dx%dx%dx
00029DD0 25 64 20 2D 2D 3E 20 25 64 78 25 64 78 25 64 78 %d --> %dx%dx%dx
00029DE0 25 64 00 65 6C 65 6D 65 6E 74 77 69 73 65 20 64 %d.elementwise d
00029DF0 6F 6E 65 2E 20 73 65 6C 66 3D 25 70 20 00 68 65 one. self=%p .he
00029E00 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 xagon/ops/src/op
00029E10 5F 6E 65 67 5F 66 2E 63 00 6E 65 67 20 6E 6F 64 _neg_f.c.neg nod
00029E20 65 20 25 70 00 77 72 6F 6E 67 20 23 20 69 6E 70 e %p.wrong # inp
00029E30 75 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 74 70 uts.wrong # outp
00029E40 75 74 73 00 6E 65 67 20 25 70 20 63 68 65 63 6B uts.neg %p check
00029E50 20 4F 4B 00 6F 75 74 20 74 6F 6F 20 73 6D 61 6C  OK.out too smal
00029E60 6C 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 l.hexagon/ops/sr
00029E70 63 2F 6F 70 5F 73 75 62 5F 66 2E 63 00 73 75 62 c/op_sub_f.c.sub
00029E80 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 23  node %p.wrong #
00029E90 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 20  inputs.wrong # 
00029EA0 6F 75 74 70 75 74 73 00 73 75 62 20 25 70 20 63 outputs.sub %p c
00029EB0 68 65 63 6B 20 4F 4B 00 68 65 78 61 67 6F 6E 2F heck OK.hexagon/
00029EC0 69 6E 63 6C 75 64 65 2F 6E 6E 5F 62 72 6F 61 64 include/nn_broad
00029ED0 63 61 73 74 2E 68 00 65 6C 65 6D 65 6E 74 77 69 cast.h.elementwi
00029EE0 73 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 se execute. self
00029EF0 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 6D 61 =%p .out too sma
00029F00 6C 6C 00 69 6E 63 6F 6D 70 61 74 69 62 6C 65 20 ll.incompatible 
00029F10 73 68 61 70 65 73 20 28 25 64 78 25 64 78 25 64 shapes (%dx%dx%d
00029F20 78 25 64 29 20 28 25 64 78 25 64 78 25 64 78 25 x%d) (%dx%dx%dx%
00029F30 64 29 00 73 68 61 70 65 73 3A 20 25 64 78 25 64 d).shapes: %dx%d
00029F40 78 25 64 78 25 64 20 25 64 78 25 64 78 25 64 78 x%dx%d %dx%dx%dx
00029F50 25 64 20 2D 2D 3E 20 25 64 78 25 64 78 25 64 78 %d --> %dx%dx%dx
00029F60 25 64 00 65 6C 65 6D 65 6E 74 77 69 73 65 20 64 %d.elementwise d
00029F70 6F 6E 65 2E 20 73 65 6C 66 3D 25 70 20 00 68 65 one. self=%p .he
00029F80 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 xagon/ops/src/op
00029F90 5F 72 61 6E 6B 2E 63 00 43 68 65 63 6B 69 6E 67 _rank.c.Checking
00029FA0 20 72 61 6E 6B 20 6E 6F 64 65 20 25 70 00 77 72  rank node %p.wr
00029FB0 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 72 6F ong # inputs.wro
00029FC0 6E 67 20 23 20 6F 75 74 70 75 74 73 00 72 61 6E ng # outputs.ran
00029FD0 67 65 20 72 61 6E 6B 20 25 70 20 63 68 65 63 6B ge rank %p check
00029FE0 20 4F 4B 00 72 61 6E 6B 20 65 78 65 63 75 74 65  OK.rank execute
00029FF0 2E 20 73 65 6C 66 3D 25 70 20 00 6F 75 74 20 74 . self=%p .out t
0002A000 6F 6F 20 73 6D 61 6C 6C 00 72 61 6E 6B 20 25 70 oo small.rank %p
0002A010 20 64 6F 6E 65 00 68 65 78 61 67 6F 6E 2F 6F 70  done.hexagon/op
0002A020 73 2F 73 72 63 2F 6F 70 5F 72 61 6E 67 65 2E 63 s/src/op_range.c
0002A030 00 43 68 65 63 6B 69 6E 67 20 72 61 6E 67 65 20 .Checking range 
0002A040 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 23 20 node %p.wrong # 
0002A050 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 20 6F inputs.wrong # o
0002A060 75 74 70 75 74 73 00 72 61 6E 67 65 20 6E 6F 64 utputs.range nod
0002A070 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 72 61 e %p check OK.ra
0002A080 6E 67 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C nge execute. sel
0002A090 66 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 6D f=%p .out too sm
0002A0A0 61 6C 6C 00 72 61 6E 67 65 20 25 70 20 64 6F 6E all.range %p don
0002A0B0 65 00 68 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 e.hexagon/ops/sr
0002A0C0 63 2F 6F 70 5F 74 72 61 6E 73 70 6F 73 65 2E 63 c/op_transpose.c
0002A0D0 00 43 68 65 63 6B 69 6E 67 20 74 72 61 6E 73 70 .Checking transp
0002A0E0 6F 73 65 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E ose node %p.wron
0002A0F0 67 20 23 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 g # inputs.wrong
0002A100 20 23 20 6F 75 74 70 75 74 73 00 72 61 6E 67 65  # outputs.range
0002A110 20 74 72 61 6E 73 70 6F 73 65 20 25 70 20 63 68  transpose %p ch
0002A120 65 63 6B 20 4F 4B 00 00 00 00 00 00 01 00 00 00 eck OK..........
0002A130 02 00 00 00 03 00 00 00 74 72 61 6E 73 70 6F 73 ........transpos
0002A140 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C 66 3D e execute. self=
0002A150 25 70 20 00 74 72 61 6E 73 70 6F 73 65 20 69 6E %p .transpose in
0002A160 70 75 74 20 3D 20 25 64 78 25 64 78 25 64 78 25 put = %dx%dx%dx%
0002A170 64 00 64 69 6D 73 20 21 31 64 00 6F 75 74 20 74 d.dims !1d.out t
0002A180 6F 6F 20 73 6D 61 6C 6C 00 6F 6F 70 73 2C 20 74 oo small.oops, t
0002A190 6F 6F 20 64 69 6D 65 6E 73 69 6F 6E 61 6C 00 64 oo dimensional.d
0002A1A0 69 6D 73 20 6C 65 6E 67 74 68 20 31 3F 20 49 20 ims length 1? I 
0002A1B0 74 68 69 6E 6B 20 74 68 61 74 20 6D 65 61 6E 73 think that means
0002A1C0 20 64 6F 20 6E 6F 74 68 69 6E 67 2E 00 73 74 72  do nothing..str
0002A1D0 69 64 65 20 69 64 78 20 3D 20 25 64 2C 25 64 2C ide idx = %d,%d,
0002A1E0 25 64 2C 25 64 20 73 74 72 69 64 65 73 3D 25 64 %d,%d strides=%d
0002A1F0 2C 25 64 2C 25 64 2C 25 64 20 64 69 6D 73 3D 25 ,%d,%d,%d dims=%
0002A200 64 2C 25 64 2C 25 64 2C 25 64 00 74 72 61 6E 73 d,%d,%d,%d.trans
0002A210 70 6F 73 65 20 25 70 20 64 6F 6E 65 00 68 65 78 pose %p done.hex
0002A220 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F agon/ops/src/op_
0002A230 61 64 64 6E 5F 66 2E 63 00 43 68 65 63 6B 69 6E addn_f.c.Checkin
0002A240 67 20 61 64 64 4E 20 6E 6F 64 65 20 25 70 00 77 g addN node %p.w
0002A250 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 72 rong # inputs.wr
0002A260 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 61 64 ong # outputs.ad
0002A270 64 4E 20 6E 6F 64 65 20 25 70 20 63 68 65 63 6B dN node %p check
0002A280 20 4F 4B 00 61 64 64 4E 20 65 78 65 63 75 74 65  OK.addN execute
0002A290 2E 20 73 65 6C 66 3D 25 70 20 00 73 68 61 70 65 . self=%p .shape
0002A2A0 20 6D 69 73 6D 61 74 63 68 00 6F 75 74 20 74 6F  mismatch.out to
0002A2B0 6F 20 73 6D 61 6C 6C 00 61 64 64 6E 20 25 70 20 o small.addn %p 
0002A2C0 64 6F 6E 65 00 68 65 78 61 67 6F 6E 2F 6F 70 73 done.hexagon/ops
0002A2D0 2F 73 72 63 2F 6F 70 5F 69 6E 73 74 61 6E 63 65 /src/op_instance
0002A2E0 6E 6F 72 6D 2E 63 00 77 72 6F 6E 67 20 23 20 69 norm.c.wrong # i
0002A2F0 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 20 6F 75 nputs.wrong # ou
0002A300 74 70 75 74 73 00 6F 75 74 20 74 6F 6F 20 73 6D tputs.out too sm
0002A310 61 6C 6C 00 43 75 72 72 65 6E 74 6C 79 20 62 61 all.Currently ba
0002A320 74 63 68 65 73 20 6E 6F 74 20 73 75 70 70 6F 72 tches not suppor
0002A330 74 65 64 00 73 65 74 20 6F 75 74 20 74 65 6E 73 ted.set out tens
0002A340 6F 72 20 73 68 61 70 65 20 25 64 78 25 64 78 25 or shape %dx%dx%
0002A350 64 78 25 64 00 68 65 78 61 67 6F 6E 2F 6F 70 73 dx%d.hexagon/ops
0002A360 2F 73 72 63 2F 6F 70 5F 73 75 62 2E 63 00 73 75 /src/op_sub.c.su
0002A370 62 20 6E 6F 64 65 20 25 70 00 77 72 6F 6E 67 20 b node %p.wrong 
0002A380 23 20 69 6E 70 75 74 73 00 77 72 6F 6E 67 20 23 # inputs.wrong #
0002A390 20 6F 75 74 70 75 74 73 00 73 75 62 20 25 70 20  outputs.sub %p 
0002A3A0 63 68 65 63 6B 20 4F 4B 00 68 65 78 61 67 6F 6E check OK.hexagon
0002A3B0 2F 69 6E 63 6C 75 64 65 2F 6E 6E 5F 62 72 6F 61 /include/nn_broa
0002A3C0 64 63 61 73 74 2E 68 00 65 6C 65 6D 65 6E 74 77 dcast.h.elementw
0002A3D0 69 73 65 20 65 78 65 63 75 74 65 2E 20 73 65 6C ise execute. sel
0002A3E0 66 3D 25 70 20 00 6F 75 74 20 74 6F 6F 20 73 6D f=%p .out too sm
0002A3F0 61 6C 6C 00 69 6E 63 6F 6D 70 61 74 69 62 6C 65 all.incompatible
0002A400 20 73 68 61 70 65 73 20 28 25 64 78 25 64 78 25  shapes (%dx%dx%
0002A410 64 78 25 64 29 20 28 25 64 78 25 64 78 25 64 78 dx%d) (%dx%dx%dx
0002A420 25 64 29 00 73 68 61 70 65 73 3A 20 25 64 78 25 %d).shapes: %dx%
0002A430 64 78 25 64 78 25 64 20 25 64 78 25 64 78 25 64 dx%dx%d %dx%dx%d
0002A440 78 25 64 20 2D 2D 3E 20 25 64 78 25 64 78 25 64 x%d --> %dx%dx%d
0002A450 78 25 64 00 65 6C 65 6D 65 6E 74 77 69 73 65 20 x%d.elementwise 
0002A460 64 6F 6E 65 2E 20 73 65 6C 66 3D 25 70 20 00 68 done. self=%p .h
0002A470 65 78 61 67 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F exagon/ops/src/o
0002A480 70 5F 70 72 65 6C 75 2E 63 00 43 68 65 63 6B 69 p_prelu.c.Checki
0002A490 6E 67 20 70 72 65 6C 75 20 6E 6F 64 65 20 25 70 ng prelu node %p
0002A4A0 00 77 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 .wrong # inputs.
0002A4B0 77 72 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 wrong # outputs.
0002A4C0 4E 55 4C 4C 20 69 6E 70 75 74 00 4E 55 4C 4C 20 NULL input.NULL 
0002A4D0 6F 75 74 70 75 74 00 70 72 65 6C 75 20 6E 6F 64 output.prelu nod
0002A4E0 65 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 50 72 e %p check OK.Pr
0002A4F0 65 6C 75 20 65 78 65 63 75 74 65 2E 20 73 65 6C elu execute. sel
0002A500 66 3D 25 70 20 00 50 72 65 6C 75 20 69 6E 20 6D f=%p .Prelu in m
0002A510 69 6E 2F 6D 61 78 3D 25 66 2F 25 66 20 00 61 6C in/max=%f/%f .al
0002A520 70 68 61 20 6D 75 73 74 20 62 65 20 3C 3D 20 31 pha must be <= 1
0002A530 2E 30 66 00 61 6C 70 68 61 20 6D 75 73 74 20 62 .0f.alpha must b
0002A540 65 20 3E 3D 20 30 2E 30 66 00 61 6C 70 68 61 3D e >= 0.0f.alpha=
0002A550 25 66 20 61 6C 70 68 61 5F 66 72 61 63 3D 25 78 %f alpha_frac=%x
0002A560 2F 25 78 2C 61 6C 70 68 61 5F 6F 66 66 73 65 74 /%x,alpha_offset
0002A570 3D 25 78 0A 00 6F 75 74 20 74 6F 6F 20 73 6D 61 =%x..out too sma
0002A580 6C 6C 00 69 6E 5F 64 61 74 61 5B 25 64 5D 20 3D ll.in_data[%d] =
0002A590 20 25 64 2C 20 6F 75 74 5F 64 61 74 61 20 3D 20  %d, out_data = 
0002A5A0 25 64 0A 00 50 72 65 6C 75 20 6F 75 74 20 6D 69 %d..Prelu out mi
0002A5B0 6E 2F 6D 61 78 3D 25 66 2F 25 66 20 00 50 72 65 n/max=%f/%f .Pre
0002A5C0 6C 75 20 25 70 20 64 6F 6E 65 00 68 65 78 61 67 lu %p done.hexag
0002A5D0 6F 6E 2F 6F 70 73 2F 73 72 63 2F 6F 70 5F 70 72 on/ops/src/op_pr
0002A5E0 65 6C 75 5F 66 2E 63 00 43 68 65 63 6B 69 6E 67 elu_f.c.Checking
0002A5F0 20 70 72 65 6C 75 20 6E 6F 64 65 20 25 70 00 77  prelu node %p.w
0002A600 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 72 rong # inputs.wr
0002A610 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 70 72 ong # outputs.pr
0002A620 65 6C 75 20 6E 6F 64 65 20 25 70 20 63 68 65 63 elu node %p chec
0002A630 6B 20 4F 4B 00 70 72 65 6C 75 20 65 78 65 63 75 k OK.prelu execu
0002A640 74 65 2E 20 73 65 6C 66 3D 25 70 20 00 6E 65 67 te. self=%p .neg
0002A650 61 74 69 76 65 20 61 6C 70 68 61 00 6F 75 74 20 ative alpha.out 
0002A660 74 6F 6F 20 73 6D 61 6C 6C 00 70 72 65 6C 75 20 too small.prelu 
0002A670 25 70 20 64 6F 6E 65 00 68 65 78 61 67 6F 6E 2F %p done.hexagon/
0002A680 6F 70 73 2F 73 72 63 2F 6F 70 5F 73 75 6D 5F 66 ops/src/op_sum_f
0002A690 2E 63 00 73 75 6D 20 6E 6F 64 65 20 25 70 00 77 .c.sum node %p.w
0002A6A0 72 6F 6E 67 20 23 20 69 6E 70 75 74 73 00 77 72 rong # inputs.wr
0002A6B0 6F 6E 67 20 23 20 6F 75 74 70 75 74 73 00 73 75 ong # outputs.su
0002A6C0 6D 20 25 70 20 63 68 65 63 6B 20 4F 4B 00 68 65 m %p check OK.he
0002A6D0 78 61 67 6F 6E 2F 69 6E 63 6C 75 64 65 2F 6E 6E xagon/include/nn
0002A6E0 5F 72 65 64 75 63 74 69 6F 6E 2E 68 00 6F 75 74 _reduction.h.out
0002A6F0 20 74 6F 6F 20 73 6D 61 6C 6C 00 49 4E 50 55 54  too small.INPUT
0002A700 00 4F 55 54 50 55 54 00 4E 6F 70 00 43 6F 6E 73 .OUTPUT.Nop.Cons
0002A710 74 00 43 68 65 63 6B 00 43 6C 6F 73 65 5F 66 00 t.Check.Close_f.
0002A720 43 6C 6F 73 65 5F 71 75 69 6E 74 38 00 43 6C 6F Close_quint8.Clo
0002A730 73 65 5F 71 5F 71 75 69 6E 74 38 00 43 6C 6F 73 se_q_quint8.Clos
0002A740 65 5F 69 6E 74 33 32 00 43 6C 6F 73 65 5F 71 69 e_int32.Close_qi
0002A750 6E 74 33 32 00 50 50 72 69 6E 74 5F 38 00 50 50 nt32.PPrint_8.PP
0002A760 72 69 6E 74 5F 33 32 00 50 50 72 69 6E 74 5F 66 rint_32.PPrint_f
0002A770 00 50 72 65 46 72 65 65 00 46 6C 61 74 74 65 6E .PreFree.Flatten
0002A780 00 51 75 61 6E 74 69 7A 65 64 43 6F 6E 76 32 64 .QuantizedConv2d
0002A790 5F 38 78 38 74 6F 33 32 00 51 75 61 6E 74 69 7A _8x8to32.Quantiz
0002A7A0 65 64 43 6F 6E 76 32 64 5F 38 78 38 74 6F 33 32 edConv2d_8x8to32
0002A7B0 5F 72 65 66 00 51 75 61 6E 74 69 7A 65 64 4D 61 _ref.QuantizedMa
0002A7C0 74 4D 75 6C 5F 38 78 38 74 6F 33 32 00 51 75 61 tMul_8x8to32.Qua
0002A7D0 6E 74 69 7A 65 64 4D 61 74 4D 75 6C 5F 38 78 38 ntizedMatMul_8x8
0002A7E0 74 6F 33 32 5F 72 65 66 00 51 75 61 6E 74 69 7A to32_ref.Quantiz
0002A7F0 65 44 6F 77 6E 41 6E 64 53 68 72 69 6E 6B 52 61 eDownAndShrinkRa
0002A800 6E 67 65 5F 33 32 74 6F 38 00 51 75 61 6E 74 69 nge_32to8.Quanti
0002A810 7A 65 44 6F 77 6E 41 6E 64 53 68 72 69 6E 6B 52 zeDownAndShrinkR
0002A820 61 6E 67 65 5F 33 32 74 6F 38 5F 72 65 66 00 51 ange_32to8_ref.Q
0002A830 75 61 6E 74 69 7A 65 64 52 65 6C 75 5F 38 00 51 uantizedRelu_8.Q
0002A840 75 61 6E 74 69 7A 65 64 52 65 6C 75 5F 38 5F 72 uantizedRelu_8_r
0002A850 65 66 00 51 75 61 6E 74 69 7A 65 64 52 65 6C 75 ef.QuantizedRelu
0002A860 58 5F 38 00 51 75 61 6E 74 69 7A 65 64 52 65 6C X_8.QuantizedRel
0002A870 75 58 5F 38 5F 72 65 66 00 51 75 61 6E 74 69 7A uX_8_ref.Quantiz
0002A880 65 64 53 69 67 6D 6F 69 64 5F 38 00 51 75 61 6E edSigmoid_8.Quan
0002A890 74 69 7A 65 64 53 69 67 6D 6F 69 64 5F 38 5F 72 tizedSigmoid_8_r
0002A8A0 65 66 00 51 75 61 6E 74 69 7A 65 64 54 61 6E 68 ef.QuantizedTanh
0002A8B0 5F 38 00 51 75 61 6E 74 69 7A 65 64 54 61 6E 68 _8.QuantizedTanh
0002A8C0 5F 38 5F 72 65 66 00 51 75 61 6E 74 69 7A 65 64 _8_ref.Quantized
0002A8D0 4D 61 78 50 6F 6F 6C 5F 38 00 51 75 61 6E 74 69 MaxPool_8.Quanti
0002A8E0 7A 65 64 4D 61 78 50 6F 6F 6C 5F 38 5F 72 65 66 zedMaxPool_8_ref
0002A8F0 00 51 75 61 6E 74 69 7A 65 64 41 76 67 50 6F 6F .QuantizedAvgPoo
0002A900 6C 5F 38 00 51 75 61 6E 74 69 7A 65 64 41 76 67 l_8.QuantizedAvg
0002A910 50 6F 6F 6C 5F 38 5F 72 65 66 00 51 75 61 6E 74 Pool_8_ref.Quant
0002A920 69 7A 65 64 43 6F 6E 63 61 74 5F 38 00 51 75 61 izedConcat_8.Qua
0002A930 6E 74 69 7A 65 64 43 6F 6E 63 61 74 5F 38 5F 72 ntizedConcat_8_r
0002A940 65 66 00 51 75 61 6E 74 69 7A 65 64 42 69 61 73 ef.QuantizedBias
0002A950 41 64 64 5F 38 70 38 74 6F 33 32 00 51 75 61 6E Add_8p8to32.Quan
0002A960 74 69 7A 65 64 42 69 61 73 41 64 64 5F 38 70 38 tizedBiasAdd_8p8
0002A970 74 6F 33 32 5F 72 65 66 00 51 75 61 6E 74 69 7A to32_ref.Quantiz
0002A980 65 64 53 6F 66 74 6D 61 78 5F 38 00 51 75 61 6E edSoftmax_8.Quan
0002A990 74 69 7A 65 64 53 6F 66 74 6D 61 78 5F 38 5F 72 tizedSoftmax_8_r
0002A9A0 65 66 00 51 75 61 6E 74 69 7A 65 64 4C 52 4E 5F ef.QuantizedLRN_
0002A9B0 38 00 51 75 61 6E 74 69 7A 65 64 4C 52 4E 5F 38 8.QuantizedLRN_8
0002A9C0 5F 72 65 66 00 4D 69 6E 5F 66 00 4D 69 6E 5F 66 _ref.Min_f.Min_f
0002A9D0 5F 72 65 66 00 4D 61 78 5F 66 00 4D 61 78 5F 66 _ref.Max_f.Max_f
0002A9E0 5F 72 65 66 00 51 75 61 6E 74 69 7A 65 00 51 75 _ref.Quantize.Qu
0002A9F0 61 6E 74 69 7A 65 5F 72 65 66 00 44 65 71 75 61 antize_ref.Dequa
0002AA00 6E 74 69 7A 65 00 44 65 71 75 61 6E 74 69 7A 65 ntize.Dequantize
0002AA10 5F 72 65 66 00 53 75 70 65 72 6E 6F 64 65 5F 38 _ref.Supernode_8
0002AA20 78 38 70 38 74 6F 38 00 53 75 70 65 72 6E 6F 64 x8p8to8.Supernod
0002AA30 65 5F 38 78 38 70 38 74 6F 38 5F 72 65 66 00 51 e_8x8p8to8_ref.Q
0002AA40 75 61 6E 74 69 7A 65 64 46 6C 61 74 74 65 6E 00 uantizedFlatten.
0002AA50 53 6F 66 74 6D 61 78 5F 66 00 43 6F 6E 76 32 64 Softmax_f.Conv2d
0002AA60 5F 66 00 4D 61 74 4D 75 6C 5F 66 00 52 65 6C 75 _f.MatMul_f.Relu
0002AA70 5F 66 00 52 65 6C 75 58 5F 66 00 41 76 67 50 6F _f.ReluX_f.AvgPo
0002AA80 6F 6C 5F 66 00 4D 61 78 50 6F 6F 6C 5F 66 00 43 ol_f.MaxPool_f.C
0002AA90 6F 6E 63 61 74 5F 66 00 42 69 61 73 41 64 64 5F oncat_f.BiasAdd_
0002AAA0 66 00 4C 52 4E 5F 66 00 56 61 72 69 61 62 6C 65 f.LRN_f.Variable
0002AAB0 00 41 73 73 69 67 6E 00 52 65 73 68 61 70 65 00 .Assign.Reshape.
0002AAC0 51 75 61 6E 74 69 7A 65 64 52 65 73 68 61 70 65 QuantizedReshape
0002AAD0 00 54 61 6E 68 5F 66 00 53 69 67 6D 6F 69 64 5F .Tanh_f.Sigmoid_
0002AAE0 66 00 53 6C 69 63 65 5F 38 00 53 6C 69 63 65 5F f.Slice_8.Slice_
0002AAF0 66 00 51 75 61 6E 74 69 7A 65 64 53 6C 69 63 65 f.QuantizedSlice
0002AB00 5F 38 00 41 64 64 5F 66 00 4D 75 6C 5F 66 00 4D _8.Add_f.Mul_f.M
0002AB10 69 6E 69 6D 75 6D 5F 66 00 4D 61 78 69 6D 75 6D inimum_f.Maximum
0002AB20 5F 66 00 52 65 71 75 61 6E 74 69 7A 65 5F 33 32 _f.Requantize_32
0002AB30 74 6F 38 00 52 65 71 75 61 6E 74 69 7A 65 5F 33 to8.Requantize_3
0002AB40 32 74 6F 38 5F 72 65 66 00 52 65 71 75 61 6E 74 2to8_ref.Requant
0002AB50 69 7A 61 74 69 6F 6E 52 61 6E 67 65 5F 33 32 00 izationRange_32.
0002AB60 52 65 71 75 61 6E 74 69 7A 61 74 69 6F 6E 52 61 RequantizationRa
0002AB70 6E 67 65 5F 33 32 5F 72 65 66 00 4E 65 67 5F 66 nge_32_ref.Neg_f
0002AB80 00 53 75 62 5F 66 00 41 64 64 4E 5F 66 00 52 61 .Sub_f.AddN_f.Ra
0002AB90 6E 67 65 5F 69 6E 74 33 32 00 52 61 6E 6B 5F 69 nge_int32.Rank_i
0002ABA0 6E 74 33 32 00 54 72 61 6E 73 70 6F 73 65 5F 69 nt32.Transpose_i
0002ABB0 6E 74 33 32 00 54 72 61 6E 73 70 6F 73 65 5F 66 nt32.Transpose_f
0002ABC0 00 49 6E 73 74 61 6E 63 65 4E 6F 72 6D 5F 66 00 .InstanceNorm_f.
0002ABD0 51 75 61 6E 74 69 7A 65 64 49 6E 73 74 61 6E 63 QuantizedInstanc
0002ABE0 65 4E 6F 72 6D 5F 38 00 51 75 61 6E 74 69 7A 65 eNorm_8.Quantize
0002ABF0 64 49 6E 73 74 61 6E 63 65 4E 6F 72 6D 5F 38 5F dInstanceNorm_8_
0002AC00 72 65 66 00 53 75 62 5F 69 6E 74 33 32 00 41 64 ref.Sub_int32.Ad
0002AC10 64 5F 69 6E 74 33 32 00 53 70 6C 69 74 5F 66 00 d_int32.Split_f.
0002AC20 44 65 71 75 61 6E 74 69 7A 65 5F 71 69 6E 74 33 Dequantize_qint3
0002AC30 32 5F 66 00 50 52 65 6C 75 5F 66 00 51 75 61 6E 2_f.PRelu_f.Quan
0002AC40 74 69 7A 65 64 50 52 65 6C 75 5F 38 00 53 75 6D tizedPRelu_8.Sum
0002AC50 5F 66 00 50 72 6F 64 5F 66 00 4D 75 6C 5F 69 6E _f.Prod_f.Mul_in
0002AC60 74 33 32 00 4C 6F 67 69 63 61 6C 41 6E 64 5F 69 t32.LogicalAnd_i
0002AC70 6E 74 33 32 00 4C 6F 67 69 63 61 6C 4F 72 5F 69 nt32.LogicalOr_i
0002AC80 6E 74 33 32 00 4C 6F 67 69 63 61 6C 58 6F 72 5F nt32.LogicalXor_
0002AC90 69 6E 74 33 32 00 53 68 61 70 65 5F 69 6E 74 33 int32.Shape_int3
0002ACA0 32 00 50 61 63 6B 5F 69 6E 74 33 32 00 4D 69 72 2.Pack_int32.Mir
0002ACB0 72 6F 72 50 61 64 5F 66 00 52 65 73 69 7A 65 4E rorPad_f.ResizeN
0002ACC0 65 61 72 65 73 74 4E 65 69 67 68 62 6F 72 5F 66 earestNeighbor_f
0002ACD0 00 53 74 72 69 64 65 64 53 6C 69 63 65 5F 69 6E .StridedSlice_in
0002ACE0 74 33 32 00 53 74 72 69 64 65 64 53 6C 69 63 65 t32.StridedSlice
0002ACF0 5F 66 00 45 78 70 61 6E 64 44 69 6D 73 5F 69 6E _f.ExpandDims_in
0002AD00 74 33 32 00 45 78 70 61 6E 64 44 69 6D 73 5F 66 t32.ExpandDims_f
0002AD10 00 4C 6F 67 53 6F 66 74 6D 61 78 5F 66 00 53 70 .LogSoftmax_f.Sp
0002AD20 6C 69 74 5F 69 6E 74 33 32 00 51 75 61 6E 74 69 lit_int32.Quanti
0002AD30 7A 65 64 53 70 6C 69 74 5F 38 00 44 65 63 6F 6E zedSplit_8.Decon
0002AD40 76 5F 66 00 51 75 61 6E 74 69 7A 65 64 44 65 63 v_f.QuantizedDec
0002AD50 6F 6E 76 5F 38 78 38 74 6F 33 32 00 51 75 61 6E onv_8x8to32.Quan
0002AD60 74 69 7A 65 64 44 65 63 6F 6E 76 5F 38 78 38 74 tizedDeconv_8x8t
0002AD70 6F 33 32 5F 72 65 66 00                         o32_ref.        
