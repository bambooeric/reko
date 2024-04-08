;;; Segment .start (00000000)
00000000 4C C0 00 58 3E C0 00 58 42 C0 00 58 00 00 00 00 L..X>..XB..X....
00000010 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
; ...
00000080 00 C0 3C 72 B8 FB 3C 71 00 C0 9C 52 00 C0 3C 72 ..<r..<q...R..<r
00000090 34 FD 3C 71 00 C0 9C 52                         4.<q...R        

;; hexagon_start_init: 00000098
hexagon_start_init proc
	{ r0 = rev }
	{ r0 = and(r0,0xFF) }
	{ p0 = cmp.eq(r0,0x2) }
	{ if (!p0) jump:nt 000000B4 }

l000000A8:
	{ r0.h = 0x100 }
	{ r0.l = 0x0 }
	{ reseved60 = r0 }

l000000B4:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 000000C8 }

l000000C4:
	{ reseved60 = r0 }

l000000C8:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 000000DC }

l000000D8:
	{ reseved61 = r0 }

l000000DC:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 000000F0 }

l000000EC:
	{ reseved62 = r0 }

l000000F0:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 00000104 }

l00000100:
	{ reseved63 = r0 }

l00000104:
	{ dckill }
	{ isync }
	{ ickill }
	{ isync }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) callr r0 }

l00000124:
	{ r0 = 0x0 }
	{ ssr = r0 }
	{ isync }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0xC0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0xD0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0xC0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ r0.h = 0x0 }
	{ r0.l = 0xD0 }
	{ r0 = memw(r0) }
	{ p1 = cmp.eq(r0,0x0) }
	{ p2 = or(p0,p1) }
	{ r0 = syscfg }
	{ r3 = mux(p2,0x0,0x28) }
	{ r0 = or(r0,r3) }
	{ syscfg = r0 }
	{ isync }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p3 = cmp.eq(r0,0x0) }
	{ if (!p3) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x90E3 }
	{  }
	{ if (!p3) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x90E3 }
	{ r0 = memw(r0) }
	{ p3 = cmp.eq(r0,0x0) }
	{ p0 = or(p2,p3) }
	{ r0 = mux(p0,0x0,0x1) }
	{ r1.h = 0x0 }
	{ r1.l = 0xF0 }
	{ memw(r1) = r0 }
	{ r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0xE0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0xE0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ p0 = not(p0) }
	{ r0 = p0 }
	{ nop }
	{ isdben = r0 }
	{ brkpt }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F10 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F20 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F30 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F40 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F80 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F90 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3FA0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F70 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F60 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3FB0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3FC0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3FD0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3FE0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F00 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) r0 = add(r0,0xFFFFFFFF) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F50 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3FF0 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x3F60 }
	{ r0 = memw(r0) }
	{ evb = r0 }
	{ r0.h = 0x0 }
	{ r0.l = 0x6B30 }
	{ r0 = memw(r0) }
	{ sgp0 = r0 }
	{ r0.h = 0x0 }
	{ r0.l = 0x3FB0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ p0 = not(p0) }
	{ r1 = p0 }
	{ r0 = syscfg }
	{ r0 = insert(0x1,0x1) }
	{ syscfg = r0 }
	{ r0.h = 0x0 }
	{ r0.l = 0x3FC0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ p0 = not(p0) }
	{ r1 = p0 }
	{ r0 = syscfg }
	{ r0 = insert(0x1,0x9) }
	{ syscfg = r0 }
	{ r0.h = 0x0 }
	{ r0.l = 0x3FD0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ p0 = not(p0) }
	{ r1 = p0 }
	{ r0 = syscfg }
	{ r0 = insert(0x1,0x9) }
	{ syscfg = r0 }
	{ r0.h = 0x0 }
	{ r0.l = 0x3FE0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ p0 = not(p0) }
	{ r1 = p0 }
	{ r0 = ssr }
	{ r0 = insert(0x1,0x19) }
	{ ssr = r0 }
	{ r0 = rev }
	{ r0 = and(r0,0xFF) }
	{ p0 = cmp.gtu(r0,0x2) }
	{ if (p0) jump:nt 000004F8 }

l000004E8:
	{ r0 = syscfg }
	{ r1 = extractu(r0,0x2,0x12) }
	{ p0 = cmp.eq(r1,0x0) }
	{ if (p0) jump:nt 00000570 }

l000004F8:
	{ r0 = ccr }
	{ r3 = 0x0 }
	{ r0 = insert(0x4,0x14) }
	{ ccr = r0 }
	{ r0 = syscfg }
	{ r0 = insert(0x3,0x13) }
	{ nop }
	{ nop }
	{ nop }
	{ nop }
	{ isync }
	{ r1 = rev }
	{ r1 = and(r1,0xFF) }
	{ p0 = cmp.eq(r1,0x2) }
	{ if (p0) jump:nt 00000538 }

l00000534:
	{ syncht }

l00000538:
	{ syscfg = r0 }
	{ isync }
	{ l2kill }
	{ r2 = rev }
	{ r2 = extractu(r2,0x4,0xC) }
	{ r2 = memb(r2+00001B44) }
	{ r3.h = 0x0 }
	{ r3.l = 0x3F00 }
	{ r3 = memw(r3) }
	{ r3 = min(r3,r2) }
	{ r0 = insert(0x3,0x13) }
	{ syscfg = r0 }
	{ isync }

l00000570:
	{ r1.h = 0x0 }
	{ r1.l = 0x3F10 }
	{ r1 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x3F30 }
	{ r0 = memw(r0) }
	{ r2 = syscfg }
	{ r2 = insert(0x1,0x1) }
	{ r2 = insert(0x1,0x1) }
	{ r0 = rev }
	{ r0 = and(r0,0xFF) }
	{ p0 = cmp.eq(r0,0x2) }
	{ if (p0) jump:nt 000005C8 }

l000005A4:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 000005B8 }

l000005B4:
	{ r2 = setbit(r2,0x10) }

l000005B8:
	{ r1.h = 0x0 }
	{ r1.l = 0x3F50 }
	{ r1 = memw(r1) }
	{ r2 = insert(0x1,0x11) }

l000005C8:
	{ syscfg = r2 }
	{ isync }
	{ r2 = ccr }
	{ r0.h = 0x0 }
	{ r0.l = 0x3F20 }
	{ r0 = memw(r0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x3F40 }
	{ r1 = memw(r1) }
	{ r0 |= asl(r1,0x1) }
	{ r2 = insert(0x2,0x12) }
	{ r2 = setbit(r2,0x8) }
	{ ccr = r2 }
	{ r0 = and(r0,0x0) }
	{ r0 = setbit(r0,0x0) }
	{ USR = r0 }
	{ isync }
	{ r0.h = 0x0 }
	{ r0.l = 0x3F80 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 000006A8 }

l00000620:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.gt(r0,0x1) }
	{ if (p0) jump:nt 0000065C }

l00000630:
	{ r0.h = 0x0 }
	{ r0.l = 0x3FA0 }
	{ r0 = memw(r0) }
	{ p3 = cmp.eq(r0,0x0) }
	{ r0 = mux(p3,0x1F,0x3F) }
	{ r3:r2 = combine(0x0,0x0) }

l00000648:
	{ tlbw(r3:r2,r0) }
	{ isync }
	{ r0 = add(r0,0xFFFFFFFF) }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) jump:nt 00000648 }

l0000065C:
	{ r2.h = 0x0 }
	{ r2.l = 0x0 }
	{ r2 = lsr(r2,0xC) }
	{ r1.h = 0xFC3 }
	{ r1.l = 0x0 }
	{ r0.h = 0xDC03 }
	{ r0.l = 0x0 }
	{ r1 = or(r1,r2) }
	{ r0 |= asl(r2,0x1) }
	{ r0 = setbit(r0,0x8) }
	{ r0 = and(r0,0xFFFFFFF0) }
	{ r2 = 0x0 }
	{ tlbw(r1:r0,r3) }
	{ r0 = syscfg }
	{ r0 = setbit(r0,0x0) }
	{ r1 = p3 }
	{ r0 = insert(0x1,0x1) }
	{ syscfg = r0 }
	{ isync }

l000006A8:
	{ r0 = 0x0 }
	{ imask = r0 }
	{ r1 = 0xFFFFFFFF }
	{ iel = r1 }
	{ iahl = r1 }
	{ cswi(r1) }
	{ r0 = ssr }
	{ r0 = setbit(r0,0x4) }
	{ ssr = r0 }
	{ r0 = syscfg }
	{ r0 = setbit(r0,0x8) }
	{ syscfg = r0 }
	{ isync }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 000006F4 }

l000006EC:
	{ ccr = r0 }
	{ isync }

l000006F4:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 0000070C }

l00000704:
	{ USR = r0 }
	{ isync }

l0000070C:
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 00000724 }

l0000071C:
	{ syscfg = r0 }
	{ isync }

l00000724:
	{ r0.h = 0x0 }
	{ r0.l = 0x90E3 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (p0) jump:nt 00000760 }

l00000738:
	{ r0.h = 0x0 }
	{ r0.l = 0x8063 }
	{ r1 = 0x20 }
	{ r28.h = 0x0 }
	{ r28.l = 0x5841 }
	{ callr r28 }
	{ r0 = 0x16 }
	{ r1.h = 0x0 }
	{ r1.l = 0x80A3 }
	{ trap0(0x0) }

l00000760:
	{ r28.h = 0x0 }
	{ r28.l = 0xEEE0 }
	{ jumpr r28 }
0000076C                                     00 C0 00 7F             ....

;; __coredump: 00000770
;;   Called from:
;;     00000A70 (in event_handle_nmi)
;;     00000A7C (in event_handle_error)
;;     00000A8C (in event_handle_rsvd)
;;     00000E38 (in event_handle_trap1)
__coredump proc
	{ r0.h = 0x0 }
	{ r0.l = 0x3FF0 }
	{ r0 = memw(r0) }
	{ memd(r0++#8) = r1:r0 }
	{ memd(r0++#8) = r3:r2 }
	{ memd(r0++#8) = r5:r4 }
	{ memd(r0) = r7:r6 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x8) }
	{ memd(r0++#8) = r9:r8 }
	{ memd(r0++#8) = r11:r10 }
	{ memd(r0++#8) = r13:r12 }
	{ memd(r0) = r15:r14 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x8) }
	{ memd(r0++#8) = r17:r16 }
	{ memd(r0++#8) = r19:r18 }
	{ memd(r0++#8) = r21:r20 }
	{ memd(r0) = r23:r22 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x8) }
	{ memd(r0++#8) = r25:r24 }
	{ memd(r0++#8) = r27:r26 }
	{ memd(r0++#8) = r29:r28 }
	{ memd(r0) = r31:r30 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x8) }
	{ r1 = SA0 }
	{ memw(r0++#4) = r1 }
	{ r1 = LC0 }
	{ memw(r0++#4) = r1 }
	{ r1 = SA1 }
	{ memw(r0++#4) = r1 }
	{ r1 = LC1 }
	{ memw(r0++#4) = r1 }
	{ r1 = P3:0 }
	{ memw(r0++#4) = r1 }
	{ r1 = M0 }
	{ memw(r0++#4) = r1 }
	{ r1 = M1 }
	{ memw(r0++#4) = r1 }
	{ r1 = USR }
	{ memw(r0) = r1 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x4) }
	{ r1 = PC }
	{ memw(r0++#4) = r1 }
	{ r1 = UGP }
	{ memw(r0++#4) = r1 }
	{ r1 = sgp0 }
	{ memw(r0++#4) = r1 }
	{ r1 = ssr }
	{ memw(r0++#4) = r1 }
	{ r1 = imask }
	{ memw(r0++#4) = r1 }
	{ r1 = badva }
	{ memw(r0++#4) = r1 }
	{ r1 = elr }
	{ memw(r0++#4) = r1 }
	{ r1 = stid }
	{ memw(r0) = r1 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x4) }
	{ r1 = evb }
	{ memw(r0++#4) = r1 }
	{ r1 = ipend }
	{ memw(r0++#4) = r1 }
	{ r1 = syscfg }
	{ memw(r0++#4) = r1 }
	{ r1 = modectl }
	{ memw(r0++#4) = r1 }
	{ r1 = rev }
	{ memw(r0++#4) = r1 }
	{ r1 = 0x0 }
	{ memw(r0++#4) = r1 }
	{ r1 = 0x0 }
	{ memw(r0++#4) = r1 }
	{ r1 = 0x0 }
	{ memw(r0) = r1 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x4) }
	{ r1 = diag }
	{ memw(r0++#4) = r1 }
	{ r1 = iad }
	{ memw(r0++#4) = r1 }
	{ r1 = iel }
	{ memw(r0++#4) = r1 }
	{ r1 = iahl }
	{ memw(r0++#4) = r1 }
	{ r1 = pcyclehi }
	{ memw(r0++#4) = r1 }
	{ r1 = pcyclelo }
	{ memw(r0++#4) = r1 }
	{ r1 = isdbst }
	{ memw(r0++#4) = r1 }
	{ r1 = isdbcfg0 }
	{ memw(r0) = r1 }
	{ dccleana(r0) }
	{ r0 = add(r0,0x4) }
	{ r1 = isdbcfg1 }
	{ memw(r0++#4) = r1 }
	{ r1 = brkptpc0 }
	{ memw(r0++#4) = r1 }
	{ r1 = brkptcfg0 }
	{ memw(r0++#4) = r1 }
	{ r1 = brkptpc1 }
	{ memw(r0++#4) = r1 }
	{ r1 = brkptcfg1 }
	{ memw(r0++#4) = r1 }
	{ r1 = isdben }
	{ memw(r0++#4) = r1 }
	{ r1 = isdgpr }
	{ memw(r0) = r1 }
	{ dccleana(r0) }
	{ r1 = memw(r0-276) }
	{ r0 = ssr }
	{ r0 = clrbit(r0,0x0) }
	{ r0 = clrbit(r0,0x2) }
	{ ssr = r0 }
	{ isync }
	{ r0 = 0xCD }
	{ trap0(0x0) }
	{ r2 = 0xFFFFFFFF }
	{ r0 = 0xFFFFFFFF }
	{ stop(r0) }
	{ nop; nop; nop }

;; event_handle_reset: 00000970
;;   Called from:
;;     00000964 (in event_handle_reset)
;;     00005000 (in .EventVectors)
event_handle_reset proc
	{ r1 = htid }
	{ r0.h = 0x0; r29.h = 0x0; r28.h = 0x0 }
	{ r0.l = 0x6C50; r29.l = 0x6BF0; r1 = asl(r1,0x2); r28.l = 0x6B90 }
	{ r0 = add(r0,r1); r29 = add(r29,r1); r28 = add(r28,r1) }
	{ r2 = 0x0 }
	{ ssr = r2 }
	{ isync }
	{ imask = r2 }
	{ r2.h = 0x0 }
	{ r2.l = 0x6B30 }
	{ r2 = add(r2,r1) }
	{ r2 = memw(r2) }
	{ sgp0 = r2 }
	{ r2.h = 0x4 }
	{ r2.l = 0x0 }
	{ gp = r2 }
	{ r2.h = 0x10 }
	{ r2.l = 0x0 }
	{ ssr = r2 }
	{ r2.h = 0x0 }
	{ r2.l = 0x3FE0 }
	{ r2 = memw(r2) }
	{ p0 = !cmp.eq(r2,00000000) }
	{ r1 = p0 }
	{ r2 = ssr }
	{ r2 = insert(0x1,0x19) }
	{ ssr = r2 }
	{ r2.h = 0x4 }
	{ USR = r2 }
	{ r2.h = 0x4C }
	{ ccr = r2 }
	{ isync }
	{ r2.h = 0xEAFA }
	{ r2.l = 0xFBBE }
	{ r3 = r2; r1 = r2 }
	{ r11:r10 = combine(r3,r2); r9:r8 = combine(r3,r2); r7:r6 = combine(r3,r2); r5:r4 = combine(r3,r2) }
	{ r19:r18 = combine(r3,r2); r17:r16 = combine(r3,r2); r15:r14 = combine(r3,r2); r13:r12 = combine(r3,r2) }
	{ r27:r26 = combine(r3,r2); r25:r24 = combine(r3,r2); r23:r22 = combine(r3,r2); r21:r20 = combine(r3,r2) }
	{ r29 = memw(r29); r28 = memw(r28); r31.h = 0x0 }
	{ r0 = memw(r0); r30 = 0x0; jump thread_start; r31.l = 0x4901 }

;; thread_start: 00000A64
;;   Called from:
;;     00000A54 (in event_handle_reset)
thread_start proc
	{ jumpr r28 }

;; event_handle_nmi: 00000A68
event_handle_nmi proc
	{ r0 = 0x1 }
	{ stid = r0 }
	{ jump __coredump }

;; event_handle_error: 00000A74
event_handle_error proc
	{ r0 = 0x2 }
	{ stid = r0 }
	{ jump __coredump }

;; event_handle_rsvd: 00000A80
event_handle_rsvd proc
	{ r0.h = 0x7AB7 }
	{ r0.l = 0xFBBE }
	{ stid = r0 }
	{ jump __coredump }
00000A90 00 40 00 7F 00 40 00 7F 00 40 00 7F 00 C0 00 7F .@...@...@......
00000AA0 00 40 00 7F 00 40 00 7F 00 40 00 7F 00 C0 00 7F .@...@...@......
00000AB0 00 40 00 7F 00 40 00 7F 00 40 00 7F 00 C0 00 7F .@...@...@......

;; event_handle_tlbmissx: 00000AC0
event_handle_tlbmissx proc
	{ crswap(r29,sgp0) }
	{ r29 = add(r29,0xFFFFFFC0) }
	{ memd(r29) = r1:r0 }
	{ memd(r29+8) = r3:r2 }
	{ memd(r29+16) = r5:r4 }
	{ memd(r29+24) = r7:r6 }
	{ memd(r29+32) = r9:r8 }
	{ r9 = P3:0 }
	{ r8 = ssr }
	{ r7 = elr }
	{ p1 = tstbit(r8,0x0) }
	{ r0.h = 0x0; if (!p1) jump:nt 00000AFC; r7 = lsr(r7,0xC) }

l00000AF8:
	{ r7 = add(r7,0x1) }

l00000AFC:
	{ r1 = 0x6; r0.l = 0x6E10 }

l00000B04:
	{ r6 = memw_locked(r0) }
	{ p0 = cmp.gt(r6,0x7E); r6 = add(r6,0x1) }
	{ r3.h = 0x0; r6 = mux(p0,r1,r6) }
	{ memw_locked(r0,p0) = r6 }
	{ r3.l = 0x3F70; if (!p0) jump:nt 00000B04 }

l00000B24:
	{ r3 = memw(r3); r7 = lsr(r7,0x8) }
	{ r3 = addasl(r3,r7,0x1) }
	{ r3 = memh(r3); r7 = asl(r7,0x8) }
	{ r5 = extractu(r3,0xC,0x4) }
	{ r1 = 0x0; r0 = 0x10; r4 = extractu(r3,0x4,0x4) }
	{ r0.h = 0xC003; r1.h = 0x3; r4 = asl(r4,0x18) }
	{ r0 |= asl(r5,0x9); r1 = or(r1,r7) }
	{ r4.h = 0x0; r0 = or(r0,r4) }
	{ r5 = 0x1; r4.l = 0x6E00 }

l00000B68:
	{ r2 = memw_locked(r4) }
	{ p0 = cmp.eq(r2,0x0) }
	{ if (!p0) jump:nt 00000B68 }

l00000B74:
	{ memw_locked(r4,p0) = r5 }
	{ if (!p0) jump:nt 00000B68 }

l00000B7C:
	{ r5 = tlbp(r1) }
	{ p0 = tstbit(r5,0x1F) }
	{ if (!p0) jump:nt 00000B90 }

l00000B88:
	{ tlbw(r1:r0,r6) }
	{ isync }

l00000B90:
	{ r1 = 0x0 }

l00000B94:
	{ r2 = memw_locked(r4) }
	{ memw_locked(r4,p0) = r1 }
	{ if (!p0) jump:nt 00000B94 }

l00000BA0:
	{ P3:0 = r9 }
	{ r7:r6 = memd(r29+24); r9:r8 = memd(r29+32) }
	{ r3:r2 = memd(r29+8); r5:r4 = memd(r29+16) }
	{ r1:r0 = memd(r29); r29 = add(r29,0x40) }
	{ crswap(r29,sgp0) }
	{ rte }

;; event_handle_tlbmissrw: 00000BC0
event_handle_tlbmissrw proc
	{ crswap(r29,sgp0) }
	{ r29 = add(r29,0xFFFFFFC0) }
	{ memd(r29) = r1:r0 }
	{ memd(r29+8) = r3:r2 }
	{ memd(r29+16) = r5:r4 }
	{ memd(r29+24) = r7:r6 }
	{ memd(r29+32) = r9:r8 }
	{ r8 = ssr }
	{ r7 = badva }
	{ r1 = 0x6; r0.l = 0x6E10; r9 = P3:0 }
	{ r0.h = 0x0; r7 = lsr(r7,0x14) }

l00000BF8:
	{ r6 = memw_locked(r0) }
	{ r3.h = 0x0; p0 = cmp.gt(r6,0x7E); r6 = add(r6,0x1) }
	{ r3.l = 0x3F70; r6 = mux(p0,r1,r6) }
	{ memw_locked(r0,p0) = r6 }
	{ if (!p0) jump:nt 00000BF8 }

l00000C18:
	{ r3 = memw(r3) }
	{ r3 = addasl(r3,r7,0x1) }
	{ r3 = memh(r3); r7 = asl(r7,0x8) }
	{ r5 = extractu(r3,0xC,0x4) }
	{ r1 = 0x0; r0 = 0x10; r4 = extractu(r3,0x4,0x4) }
	{ r0.h = 0xC003; r1.h = 0x3; r4 = asl(r4,0x18) }
	{ r0 |= asl(r5,0x9); r1 = or(r1,r7) }
	{ r4.h = 0x0; r0 = or(r0,r4) }
	{ r5 = 0x1; r4.l = 0x6E00 }

l00000C58:
	{ r2 = memw_locked(r4) }
	{ memw_locked(r4,p0) = r5 }
	{ p1 = cmp.eq(r2,0x0) }
	{ if (!p0) jump:nt 00000C58 }

l00000C68:
	{ if (!p1) jump:nt 00000C58 }

l00000C6C:
	{ r5 = tlbp(r1) }
	{ p0 = tstbit(r5,0x1F) }
	{ if (!p0) jump:nt 00000C80 }

l00000C78:
	{ tlbw(r1:r0,r6) }
	{ isync }

l00000C80:
	{ r1 = 0x0 }

l00000C84:
	{ r2 = memw_locked(r4) }
	{ memw_locked(r4,p0) = r1 }
	{ if (!p0) jump:nt 00000C84 }

l00000C90:
	{ P3:0 = r9 }
	{ r7:r6 = memd(r29+24); r9:r8 = memd(r29+32) }
	{ r3:r2 = memd(r29+8); r5:r4 = memd(r29+16) }
	{ r1:r0 = memd(r29); r29 = add(r29,0x40) }
	{ crswap(r29,sgp0) }
	{ rte }

;; event_handle_trap0: 00000CB0
event_handle_trap0 proc
	{ crswap(r29,sgp0) }
	{ memd(r29-40) = r5:r4; p0 = cmp.eq(r0,0x40); r29 = add(r29,0xFFFFFFD8); r5 = P3:0 }
	{ memd(r29+8) = r3:r2; r4.h = 0x5555; p2 = cmp.eq(r0,0x52); p1 = cmp.eq(r0,0x44) }
	{ r3.h = 0x0 }
	{ r3.l = 0xF0 }
	{ r3 = memw(r3) }
	{ if (p3.new) jump:nt 00000DFC; p3 = cmp.eq(r3,0x1) }

l00000CE8:
	{ memd(r29+16) = r7:r6; r4.l = 0x5555; p0 = or(p1,p2); if (p0) jump:nt 00000DDC }

l00000CF8:
	{ memd(r29+24) = r9:r8; r6 = 0xCD; r3.h = 0x0; if (p0) jump:nt 00000DDC }

l00000D08:
	{ p3 = cmp.eq(r0,r6); p2 = cmp.eq(r0,0x18); r4.h = 0x0; r3.l = 0x100 }
	{ r7 = memw(r3); r4.l = 0x80; p3 = or(p2,p3); r9 = r5 }
	{ nop; r8 = htid }
	{ nop; p0 = cmp.eq(r7,0x0); if (p3) jump:nt 00000E10; r6.h = 0x8 }

l00000D40:
	{ r7 = memw(r3); r5 = 0x1; if (!p0) jump:nt 00000D40; p0 = cmp.eq(r7,0x0) }

l00000D4C:
	{ r7 = memw_locked(r3) }
	{ memw_locked(r3,p1) = r5 }
	{ p0 = cmp.eq(r7,0x0); if (!p1) jump:nt 00000D4C }

l00000D5C:
	{ if (!p0) jump:nt 00000D40 }

l00000D60:
	{ memd(r4) = r1:r0; r2 = mux(p2,r2,r8) }
	{ memw(r4+8) = r2 }
	{ memw(r4+12) = r5 }
	{ dccleaninva(r4) }
	{ r6 = memb(r4+15) }
	{ dccleaninva(r4) }
	{ r6.h = 0x0 }
	{ r6.l = 0xF0 }
	{ r6 = memw(r6) }
	{ r5 = 0x0; r6 = 0x0; if (p0.new) jump:nt 00000DA0; p0 = cmp.eq(r6,0x1) }

l00000D90:
	{ r6 = memw(r4+12) }
	{ dccleaninva(r4) }
	{ r1:r0 = memd(r4); r5 = 0x0 }

l00000DA0:
	{ r7 = memw_locked(r3) }
	{ memw_locked(r3,p1) = r5 }
	{ memw(r29+32) = r4; p0 = cmp.eq(r6,0x0); if (!p1) jump:nt 00000DA0 }

l00000DB0:
	{ r7:r6 = memd(r29+16); r5:r4 = memd(r29); if (!p0) jump:nt 00000DD0 }

l00000DB8:
	{ r9:r8 = memd(r29+24); r3:r2 = memd(r29+8); r29 = add(r29,0x28); P3:0 = r9 }
	{ crswap(r29,sgp0) }
	{ rte }

l00000DD0:
	{ r4 = memw(r29+32); jump 00000D40; r1 = 0x1; r0 = 0xC1 }

l00000DDC:
	{ r1 = pcyclehi }
	{ r0 = pcyclelo }
	{ r7:r6 = memd(r29+16); r3:r2 = mpyu(r0,r4); if (p2) jump:nt 00000DFC }

l00000DF0:
	{ r3:r2 = lsr(r3:r2,0x20); r1:r0 = mpyu(r1,r4) }
	{ r1:r0 = add(r3:r2,r1:r0) }

l00000DFC:
	{ r5:r4 = memd(r29); r3:r2 = memd(r29+8); r29 = add(r29,0x28); P3:0 = r5 }
	{ crswap(r29,sgp0) }
	{ rte }

l00000E10:
	{ r6.l = 0x98; if (!p2) jump:nt 00000E20 }

l00000E18:
	{ jump 00000D40; p2 = cmp.eq(r1,r6) }

l00000E20:
	{ r1.h = 0x0 }
	{ r1.l = 0x3FF0 }
	{ r1 = memw(r1) }
	{ jump 00000D40 }

;; event_handle_trap1: 00000E30
event_handle_trap1 proc
	{ r0 = 0x9 }
	{ stid = r0 }
	{ jump __coredump }

;; event_handle_int: 00000E3C
event_handle_int proc
	{ crswap(r29,sgp0) }
	{ allocframe(#0xA0) }
	{ memd(r29) = r1:r0; r0 = SA0 }
	{ memd(r29+8) = r3:r2; r1 = LC0 }
	{ memd(r29+16) = r5:r4; r2 = SA1 }
	{ memd(r29+24) = r7:r6; r3 = LC1 }
	{ memd(r29+32) = r9:r8; r4 = P3:0 }
	{ memd(r29+40) = r11:r10; r5 = M0 }
	{ memd(r29+48) = r13:r12; r6 = M1 }
	{ memd(r29+56) = r15:r14; r7 = USR }
	{ memd(r29+64) = r17:r16; r8 = UGP }
	{ r9 = elr }
	{ memd(r29+72) = r19:r18 }
	{ memd(r29+80) = r21:r20 }
	{ memd(r29+88) = r23:r22 }
	{ memd(r29+96) = r25:r24 }
	{ memd(r29+104) = r27:r26 }
	{ memd(r29+112) = r1:r0 }
	{ r0 = ssr }
	{ memd(r29+120) = r3:r2; r2 = r0; r7 = insert(0x8,0x10); r1.h = 0x0 }
	{ memd(r29+128) = r5:r4; r1.l = 0x4000; r0 = and(r0,0x1F) }
	{ memd(r29+136) = r7:r6; r1 = addasl(r1,r0,0x2) }
	{ memd(r29+144) = r9:r8; r1 = memw(r1); r31 = r28; r3 = 0x0 }
	{ memd(r29+152) = r31:r30; p0 = cmp.eq(r1,0x0); r2 = insert(0x3,0x13) }
	{ if (p0) jump:nt 00000F24 }

l00000EEC:
	{ ssr = r2 }
	{ crswap(r29,sgp0) }
	{ callr r1 }
	{ crswap(r29,sgp0) }
	{ r0 = ssr }
	{ r7:r6 = memd(r29+136); r1 = 0x6; r26.h = 0x0 }
	{ r26.l = 0x4; r0 = insert(0x3,0x13); r7 = asrh(r7) }
	{ r7 = and(r7,0x1F) }
	{ r26 &= lsl(r26,r7) }
	{ ssr = r0 }
	{ ciad(r26) }

l00000F24:
	{ r9:r8 = memd(r29+144); r31:r30 = memd(r29+152) }
	{ elr = r9 }
	{ r5:r4 = memd(r29+128); r7:r6 = memd(r29+136); UGP = r8 }
	{ r1:r0 = memd(r29+112); r3:r2 = memd(r29+120); r28 = r31; USR = r7 }
	{ r25:r24 = memd(r29+96); r27:r26 = memd(r29+104); M1 = r6 }
	{ r21:r20 = memd(r29+80); r23:r22 = memd(r29+88); M0 = r5 }
	{ r17:r16 = memd(r29+64); r19:r18 = memd(r29+72); P3:0 = r4 }
	{ r13:r12 = memd(r29+48); r15:r14 = memd(r29+56); LC1 = r3 }
	{ r9:r8 = memd(r29+32); r11:r10 = memd(r29+40); SA1 = r2 }
	{ r5:r4 = memd(r29+16); r7:r6 = memd(r29+24); LC0 = r1 }
	{ r1:r0 = memd(r29); r3:r2 = memd(r29+8); SA0 = r0 }
	{ deallocframe }
	{ crswap(r29,sgp0) }
	{ rte }
00000F94             00 40 00 7F 00 40 00 7F 00 C0 00 7F     .@...@......

;; .NoHandler: 00000FA0
.NoHandler proc
	{ jumpr r31 }
00000FA4             00 00 00 00 00 00 00 00 00 00 00 00     ............
00000FB0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00000FC0 03 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 ................
00000FD0 01 00 00 00 01 00 00 00 00 50 00 00 88 1B 00 00 .........P......
00000FE0 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 ................
00000FF0 01 00 00 00 01 00 00 00 01 00 00 00 80 10 00 00 ................
00001000 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001010 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001020 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001030 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001040 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001050 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001060 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001070 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 A0 0F 00 00 ................
00001080 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
; ...
00001AC0 00 00 00 00 00 00 00 00 00 00 00 00 20 13 00 00 ............ ...
00001AD0 A8 14 00 00 30 16 00 00 B8 17 00 00 40 19 00 00 ....0.......@...
00001AE0 C8 1A 00 00 70 07 00 00 70 07 00 00 70 07 00 00 ....p...p...p...
00001AF0 70 07 00 00 70 07 00 00 70 07 00 00 00 00 00 00 p...p...p.......
00001B00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
; ...
00001B40 00 00 00 00 00 02 03 03 04 04 04 04 04 04 04 04 ................
00001B50 04 04 04 04 00 00 00 00 00 00 00 00 00 00 00 00 ................
00001B60 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
; ...
00001B80 00 00 00 00 05 00 00 00 07 00 17 00 27 00 37 00 ............'.7.
00001B90 47 00 57 00 67 00 77 00 87 00 97 00 A7 00 B7 00 G.W.g.w.........
00001BA0 C7 00 D7 00 E7 00 F7 00 07 01 17 01 27 01 37 01 ............'.7.
00001BB0 47 01 57 01 67 01 77 01 87 01 97 01 A7 01 B7 01 G.W.g.w.........
00001BC0 C7 01 D7 01 E7 01 F7 01 07 02 17 02 27 02 37 02 ............'.7.
00001BD0 47 02 57 02 67 02 77 02 87 02 97 02 A7 02 B7 02 G.W.g.w.........
00001BE0 C7 02 D7 02 E7 02 F7 02 07 03 17 03 27 03 37 03 ............'.7.
00001BF0 47 03 57 03 67 03 77 03 87 03 97 03 A7 03 B7 03 G.W.g.w.........
00001C00 C7 03 D7 03 E7 03 F7 03 07 04 17 04 27 04 37 04 ............'.7.
00001C10 47 04 57 04 67 04 77 04 87 04 97 04 A7 04 B7 04 G.W.g.w.........
00001C20 C7 04 D7 04 E7 04 F7 04 07 05 17 05 27 05 37 05 ............'.7.
00001C30 47 05 57 05 67 05 77 05 87 05 97 05 A7 05 B7 05 G.W.g.w.........
00001C40 C7 05 D7 05 E7 05 F7 05 07 06 17 06 27 06 37 06 ............'.7.
00001C50 47 06 57 06 67 06 77 06 87 06 97 06 A7 06 B7 06 G.W.g.w.........
00001C60 C7 06 D7 06 E7 06 F7 06 07 07 17 07 27 07 37 07 ............'.7.
00001C70 47 07 57 07 67 07 77 07 87 07 97 07 A7 07 B7 07 G.W.g.w.........
00001C80 C7 07 D7 07 E7 07 F7 07 07 08 17 08 27 08 37 08 ............'.7.
00001C90 47 08 57 08 67 08 77 08 87 08 97 08 A7 08 B7 08 G.W.g.w.........
00001CA0 C7 08 D7 08 E7 08 F7 08 07 09 17 09 27 09 37 09 ............'.7.
00001CB0 47 09 57 09 67 09 77 09 87 09 97 09 A7 09 B7 09 G.W.g.w.........
00001CC0 C7 09 D7 09 E7 09 F7 09 07 0A 17 0A 27 0A 37 0A ............'.7.
00001CD0 47 0A 57 0A 67 0A 77 0A 87 0A 97 0A A7 0A B7 0A G.W.g.w.........
00001CE0 C7 0A D7 0A E7 0A F7 0A 07 0B 17 0B 27 0B 37 0B ............'.7.
00001CF0 47 0B 57 0B 67 0B 77 0B 87 0B 97 0B A7 0B B7 0B G.W.g.w.........
00001D00 C7 0B D7 0B E7 0B F7 0B 07 0C 17 0C 27 0C 37 0C ............'.7.
00001D10 47 0C 57 0C 67 0C 77 0C 87 0C 97 0C A7 0C B7 0C G.W.g.w.........
00001D20 C7 0C D7 0C E7 0C F7 0C 07 0D 17 0D 27 0D 37 0D ............'.7.
00001D30 47 0D 57 0D 67 0D 77 0D 87 0D 97 0D A7 0D B7 0D G.W.g.w.........
00001D40 C7 0D D7 0D E7 0D F7 0D 07 0E 17 0E 27 0E 37 0E ............'.7.
00001D50 47 0E 57 0E 67 0E 77 0E 87 0E 97 0E A7 0E B7 0E G.W.g.w.........
00001D60 C7 0E D7 0E E7 0E F7 0E 07 0F 17 0F 27 0F 37 0F ............'.7.
00001D70 47 0F 57 0F 67 0F 77 0F 87 0F 97 0F A7 0F B7 0F G.W.g.w.........
00001D80 C7 0F D7 0F E7 0F F7 0F 07 10 17 10 27 10 37 10 ............'.7.
00001D90 47 10 57 10 67 10 77 10 87 10 97 10 A7 10 B7 10 G.W.g.w.........
00001DA0 C7 10 D7 10 E7 10 F7 10 07 11 17 11 27 11 37 11 ............'.7.
00001DB0 47 11 57 11 67 11 77 11 87 11 97 11 A7 11 B7 11 G.W.g.w.........
00001DC0 C7 11 D7 11 E7 11 F7 11 07 12 17 12 27 12 37 12 ............'.7.
00001DD0 47 12 57 12 67 12 77 12 87 12 97 12 A7 12 B7 12 G.W.g.w.........
00001DE0 C7 12 D7 12 E7 12 F7 12 07 13 17 13 27 13 37 13 ............'.7.
00001DF0 47 13 57 13 67 13 77 13 87 13 97 13 A7 13 B7 13 G.W.g.w.........
00001E00 C7 13 D7 13 E7 13 F7 13 07 14 17 14 27 14 37 14 ............'.7.
00001E10 47 14 57 14 67 14 77 14 87 14 97 14 A7 14 B7 14 G.W.g.w.........
00001E20 C7 14 D7 14 E7 14 F7 14 07 15 17 15 27 15 37 15 ............'.7.
00001E30 47 15 57 15 67 15 77 15 87 15 97 15 A7 15 B7 15 G.W.g.w.........
00001E40 C7 15 D7 15 E7 15 F7 15 07 16 17 16 27 16 37 16 ............'.7.
00001E50 47 16 57 16 67 16 77 16 87 16 97 16 A7 16 B7 16 G.W.g.w.........
00001E60 C7 16 D7 16 E7 16 F7 16 07 17 17 17 27 17 37 17 ............'.7.
00001E70 47 17 57 17 67 17 77 17 87 17 97 17 A7 17 B7 17 G.W.g.w.........
00001E80 C7 17 D7 17 E7 17 F7 17 07 18 17 18 27 18 37 18 ............'.7.
00001E90 47 18 57 18 67 18 77 18 87 18 97 18 A7 18 B7 18 G.W.g.w.........
00001EA0 C7 18 D7 18 E7 18 F7 18 07 19 17 19 27 19 37 19 ............'.7.
00001EB0 47 19 57 19 67 19 77 19 87 19 97 19 A7 19 B7 19 G.W.g.w.........
00001EC0 C7 19 D7 19 E7 19 F7 19 07 1A 17 1A 27 1A 37 1A ............'.7.
00001ED0 47 1A 57 1A 67 1A 77 1A 87 1A 97 1A A7 1A B7 1A G.W.g.w.........
00001EE0 C7 1A D7 1A E7 1A F7 1A 07 1B 17 1B 27 1B 37 1B ............'.7.
00001EF0 47 1B 57 1B 67 1B 77 1B 87 1B 97 1B A7 1B B7 1B G.W.g.w.........
00001F00 C7 1B D7 1B E7 1B F7 1B 07 1C 17 1C 27 1C 37 1C ............'.7.
00001F10 47 1C 57 1C 67 1C 77 1C 87 1C 97 1C A7 1C B7 1C G.W.g.w.........
00001F20 C7 1C D7 1C E7 1C F7 1C 07 1D 17 1D 27 1D 37 1D ............'.7.
00001F30 47 1D 57 1D 67 1D 77 1D 87 1D 97 1D A7 1D B7 1D G.W.g.w.........
00001F40 C7 1D D7 1D E7 1D F7 1D 07 1E 17 1E 27 1E 37 1E ............'.7.
00001F50 47 1E 57 1E 67 1E 77 1E 87 1E 97 1E A7 1E B7 1E G.W.g.w.........
00001F60 C7 1E D7 1E E7 1E F7 1E 07 1F 17 1F 27 1F 37 1F ............'.7.
00001F70 47 1F 57 1F 67 1F 77 1F 87 1F 97 1F A7 1F B7 1F G.W.g.w.........
00001F80 C7 1F D7 1F E7 1F F7 1F 07 20 17 20 27 20 37 20 ......... . ' 7 
00001F90 47 20 57 20 67 20 77 20 87 20 97 20 A7 20 B7 20 G W g w . . . . 
00001FA0 C7 20 D7 20 E7 20 F7 20 07 21 17 21 27 21 37 21 . . . . .!.!'!7!
00001FB0 47 21 57 21 67 21 77 21 87 21 97 21 A7 21 B7 21 G!W!g!w!.!.!.!.!
00001FC0 C7 21 D7 21 E7 21 F7 21 07 22 17 22 27 22 37 22 .!.!.!.!."."'"7"
00001FD0 47 22 57 22 67 22 77 22 87 22 97 22 A7 22 B7 22 G"W"g"w"."."."."
00001FE0 C7 22 D7 22 E7 22 F7 22 07 23 17 23 27 23 37 23 .".".".".#.#'#7#
00001FF0 47 23 57 23 67 23 77 23 87 23 97 23 A7 23 B7 23 G#W#g#w#.#.#.#.#
00002000 C7 23 D7 23 E7 23 F7 23 07 24 17 24 27 24 37 24 .#.#.#.#.$.$'$7$
00002010 47 24 57 24 67 24 77 24 87 24 97 24 A7 24 B7 24 G$W$g$w$.$.$.$.$
00002020 C7 24 D7 24 E7 24 F7 24 07 25 17 25 27 25 37 25 .$.$.$.$.%.%'%7%
00002030 47 25 57 25 67 25 77 25 87 25 97 25 A7 25 B7 25 G%W%g%w%.%.%.%.%
00002040 C7 25 D7 25 E7 25 F7 25 07 26 17 26 27 26 37 26 .%.%.%.%.&.&'&7&
00002050 47 26 57 26 67 26 77 26 87 26 97 26 A7 26 B7 26 G&W&g&w&.&.&.&.&
00002060 C7 26 D7 26 E7 26 F7 26 07 27 17 27 27 27 37 27 .&.&.&.&.'.'''7'
00002070 47 27 57 27 67 27 77 27 87 27 97 27 A7 27 B7 27 G'W'g'w'.'.'.'.'
00002080 C7 27 D7 27 E7 27 F7 27 07 28 17 28 27 28 37 28 .'.'.'.'.(.('(7(
00002090 47 28 57 28 67 28 77 28 87 28 97 28 A7 28 B7 28 G(W(g(w(.(.(.(.(
000020A0 C7 28 D7 28 E7 28 F7 28 07 29 17 29 27 29 37 29 .(.(.(.(.).)')7)
000020B0 47 29 57 29 67 29 77 29 87 29 97 29 A7 29 B7 29 G)W)g)w).).).).)
000020C0 C7 29 D7 29 E7 29 F7 29 07 2A 17 2A 27 2A 37 2A .).).).).*.*'*7*
000020D0 47 2A 57 2A 67 2A 77 2A 87 2A 97 2A A7 2A B7 2A G*W*g*w*.*.*.*.*
000020E0 C7 2A D7 2A E7 2A F7 2A 07 2B 17 2B 27 2B 37 2B .*.*.*.*.+.+'+7+
000020F0 47 2B 57 2B 67 2B 77 2B 87 2B 97 2B A7 2B B7 2B G+W+g+w+.+.+.+.+
00002100 C7 2B D7 2B E7 2B F7 2B 07 2C 17 2C 27 2C 37 2C .+.+.+.+.,.,',7,
00002110 47 2C 57 2C 67 2C 77 2C 87 2C 97 2C A7 2C B7 2C G,W,g,w,.,.,.,.,
00002120 C7 2C D7 2C E7 2C F7 2C 07 2D 17 2D 27 2D 37 2D .,.,.,.,.-.-'-7-
00002130 47 2D 57 2D 67 2D 77 2D 87 2D 97 2D A7 2D B7 2D G-W-g-w-.-.-.-.-
00002140 C7 2D D7 2D E7 2D F7 2D 07 2E 17 2E 27 2E 37 2E .-.-.-.-....'.7.
00002150 47 2E 57 2E 67 2E 77 2E 87 2E 97 2E A7 2E B7 2E G.W.g.w.........
00002160 C7 2E D7 2E E7 2E F7 2E 07 2F 17 2F 27 2F 37 2F ........././'/7/
00002170 47 2F 57 2F 67 2F 77 2F 87 2F 97 2F A7 2F B7 2F G/W/g/w/././././
00002180 C7 2F D7 2F E7 2F F7 2F 07 30 17 30 27 30 37 30 ././././.0.0'070
00002190 47 30 57 30 67 30 77 30 87 30 97 30 A7 30 B7 30 G0W0g0w0.0.0.0.0
000021A0 C7 30 D7 30 E7 30 F7 30 07 31 17 31 27 31 37 31 .0.0.0.0.1.1'171
000021B0 47 31 57 31 67 31 77 31 87 31 97 31 A7 31 B7 31 G1W1g1w1.1.1.1.1
000021C0 C7 31 D7 31 E7 31 F7 31 07 32 17 32 27 32 37 32 .1.1.1.1.2.2'272
000021D0 47 32 57 32 67 32 77 32 87 32 97 32 A7 32 B7 32 G2W2g2w2.2.2.2.2
000021E0 C7 32 D7 32 E7 32 F7 32 07 33 17 33 27 33 37 33 .2.2.2.2.3.3'373
000021F0 47 33 57 33 67 33 77 33 87 33 97 33 A7 33 B7 33 G3W3g3w3.3.3.3.3
00002200 C7 33 D7 33 E7 33 F7 33 07 34 17 34 27 34 37 34 .3.3.3.3.4.4'474
00002210 47 34 57 34 67 34 77 34 87 34 97 34 A7 34 B7 34 G4W4g4w4.4.4.4.4
00002220 C7 34 D7 34 E7 34 F7 34 07 35 17 35 27 35 37 35 .4.4.4.4.5.5'575
00002230 47 35 57 35 67 35 77 35 87 35 97 35 A7 35 B7 35 G5W5g5w5.5.5.5.5
00002240 C7 35 D7 35 E7 35 F7 35 07 36 17 36 27 36 37 36 .5.5.5.5.6.6'676
00002250 47 36 57 36 67 36 77 36 87 36 97 36 A7 36 B7 36 G6W6g6w6.6.6.6.6
00002260 C7 36 D7 36 E7 36 F7 36 07 37 17 37 27 37 37 37 .6.6.6.6.7.7'777
00002270 47 37 57 37 67 37 77 37 87 37 97 37 A7 37 B7 37 G7W7g7w7.7.7.7.7
00002280 C7 37 D7 37 E7 37 F7 37 07 38 17 38 27 38 37 38 .7.7.7.7.8.8'878
00002290 47 38 57 38 67 38 77 38 87 38 97 38 A7 38 B7 38 G8W8g8w8.8.8.8.8
000022A0 C7 38 D7 38 E7 38 F7 38 07 39 17 39 27 39 37 39 .8.8.8.8.9.9'979
000022B0 47 39 57 39 67 39 77 39 87 39 97 39 A7 39 B7 39 G9W9g9w9.9.9.9.9
000022C0 C7 39 D7 39 E7 39 F7 39 07 3A 17 3A 27 3A 37 3A .9.9.9.9.:.:':7:
000022D0 47 3A 57 3A 67 3A 77 3A 87 3A 97 3A A7 3A B7 3A G:W:g:w:.:.:.:.:
000022E0 C7 3A D7 3A E7 3A F7 3A 07 3B 17 3B 27 3B 37 3B .:.:.:.:.;.;';7;
000022F0 47 3B 57 3B 67 3B 77 3B 87 3B 97 3B A7 3B B7 3B G;W;g;w;.;.;.;.;
00002300 C7 3B D7 3B E7 3B F7 3B 07 3C 17 3C 27 3C 37 3C .;.;.;.;.<.<'<7<
00002310 47 3C 57 3C 67 3C 77 3C 87 3C 97 3C A7 3C B7 3C G<W<g<w<.<.<.<.<
00002320 C7 3C D7 3C E7 3C F7 3C 07 3D 17 3D 27 3D 37 3D .<.<.<.<.=.='=7=
00002330 47 3D 57 3D 67 3D 77 3D 87 3D 97 3D A7 3D B7 3D G=W=g=w=.=.=.=.=
00002340 C7 3D D7 3D E7 3D F7 3D 07 3E 17 3E 27 3E 37 3E .=.=.=.=.>.>'>7>
00002350 47 3E 57 3E 67 3E 77 3E 87 3E 97 3E A7 3E B7 3E G>W>g>w>.>.>.>.>
00002360 C7 3E D7 3E E7 3E F7 3E 07 3F 17 3F 27 3F 37 3F .>.>.>.>.?.?'?7?
00002370 47 3F 57 3F 67 3F 77 3F 87 3F 97 3F A7 3F B7 3F G?W?g?w?.?.?.?.?
00002380 C7 3F D7 3F E7 3F F7 3F 07 40 17 40 27 40 37 40 .?.?.?.?.@.@'@7@
00002390 47 40 57 40 67 40 77 40 87 40 97 40 A7 40 B7 40 G@W@g@w@.@.@.@.@
000023A0 C7 40 D7 40 E7 40 F7 40 07 41 17 41 27 41 37 41 .@.@.@.@.A.A'A7A
000023B0 47 41 57 41 67 41 77 41 87 41 97 41 A7 41 B7 41 GAWAgAwA.A.A.A.A
000023C0 C7 41 D7 41 E7 41 F7 41 07 42 17 42 27 42 37 42 .A.A.A.A.B.B'B7B
000023D0 47 42 57 42 67 42 77 42 87 42 97 42 A7 42 B7 42 GBWBgBwB.B.B.B.B
000023E0 C7 42 D7 42 E7 42 F7 42 07 43 17 43 27 43 37 43 .B.B.B.B.C.C'C7C
000023F0 47 43 57 43 67 43 77 43 87 43 97 43 A7 43 B7 43 GCWCgCwC.C.C.C.C
00002400 C7 43 D7 43 E7 43 F7 43 07 44 17 44 27 44 37 44 .C.C.C.C.D.D'D7D
00002410 47 44 57 44 67 44 77 44 87 44 97 44 A7 44 B7 44 GDWDgDwD.D.D.D.D
00002420 C7 44 D7 44 E7 44 F7 44 07 45 17 45 27 45 37 45 .D.D.D.D.E.E'E7E
00002430 47 45 57 45 67 45 77 45 87 45 97 45 A7 45 B7 45 GEWEgEwE.E.E.E.E
00002440 C7 45 D7 45 E7 45 F7 45 07 46 17 46 27 46 37 46 .E.E.E.E.F.F'F7F
00002450 47 46 57 46 67 46 77 46 87 46 97 46 A7 46 B7 46 GFWFgFwF.F.F.F.F
00002460 C7 46 D7 46 E7 46 F7 46 07 47 17 47 27 47 37 47 .F.F.F.F.G.G'G7G
00002470 47 47 57 47 67 47 77 47 87 47 97 47 A7 47 B7 47 GGWGgGwG.G.G.G.G
00002480 C7 47 D7 47 E7 47 F7 47 07 48 17 48 27 48 37 48 .G.G.G.G.H.H'H7H
00002490 47 48 57 48 67 48 77 48 87 48 97 48 A7 48 B7 48 GHWHgHwH.H.H.H.H
000024A0 C7 48 D7 48 E7 48 F7 48 07 49 17 49 27 49 37 49 .H.H.H.H.I.I'I7I
000024B0 47 49 57 49 67 49 77 49 87 49 97 49 A7 49 B7 49 GIWIgIwI.I.I.I.I
000024C0 C7 49 D7 49 E7 49 F7 49 07 4A 17 4A 27 4A 37 4A .I.I.I.I.J.J'J7J
000024D0 47 4A 57 4A 67 4A 77 4A 87 4A 97 4A A7 4A B7 4A GJWJgJwJ.J.J.J.J
000024E0 C7 4A D7 4A E7 4A F7 4A 07 4B 17 4B 27 4B 37 4B .J.J.J.J.K.K'K7K
000024F0 47 4B 57 4B 67 4B 77 4B 87 4B 97 4B A7 4B B7 4B GKWKgKwK.K.K.K.K
00002500 C7 4B D7 4B E7 4B F7 4B 07 4C 17 4C 27 4C 37 4C .K.K.K.K.L.L'L7L
00002510 47 4C 57 4C 67 4C 77 4C 87 4C 97 4C A7 4C B7 4C GLWLgLwL.L.L.L.L
00002520 C7 4C D7 4C E7 4C F7 4C 07 4D 17 4D 27 4D 37 4D .L.L.L.L.M.M'M7M
00002530 47 4D 57 4D 67 4D 77 4D 87 4D 97 4D A7 4D B7 4D GMWMgMwM.M.M.M.M
00002540 C7 4D D7 4D E7 4D F7 4D 07 4E 17 4E 27 4E 37 4E .M.M.M.M.N.N'N7N
00002550 47 4E 57 4E 67 4E 77 4E 87 4E 97 4E A7 4E B7 4E GNWNgNwN.N.N.N.N
00002560 C7 4E D7 4E E7 4E F7 4E 07 4F 17 4F 27 4F 37 4F .N.N.N.N.O.O'O7O
00002570 47 4F 57 4F 67 4F 77 4F 87 4F 97 4F A7 4F B7 4F GOWOgOwO.O.O.O.O
00002580 C7 4F D7 4F E7 4F F7 4F 07 50 17 50 27 50 37 50 .O.O.O.O.P.P'P7P
00002590 47 50 57 50 67 50 77 50 87 50 97 50 A7 50 B7 50 GPWPgPwP.P.P.P.P
000025A0 C7 50 D7 50 E7 50 F7 50 07 51 17 51 27 51 37 51 .P.P.P.P.Q.Q'Q7Q
000025B0 47 51 57 51 67 51 77 51 87 51 97 51 A7 51 B7 51 GQWQgQwQ.Q.Q.Q.Q
000025C0 C7 51 D7 51 E7 51 F7 51 07 52 17 52 27 52 37 52 .Q.Q.Q.Q.R.R'R7R
000025D0 47 52 57 52 67 52 77 52 87 52 97 52 A7 52 B7 52 GRWRgRwR.R.R.R.R
000025E0 C7 52 D7 52 E7 52 F7 52 07 53 17 53 27 53 37 53 .R.R.R.R.S.S'S7S
000025F0 47 53 57 53 67 53 77 53 87 53 97 53 A7 53 B7 53 GSWSgSwS.S.S.S.S
00002600 C7 53 D7 53 E7 53 F7 53 07 54 17 54 27 54 37 54 .S.S.S.S.T.T'T7T
00002610 47 54 57 54 67 54 77 54 87 54 97 54 A7 54 B7 54 GTWTgTwT.T.T.T.T
00002620 C7 54 D7 54 E7 54 F7 54 07 55 17 55 27 55 37 55 .T.T.T.T.U.U'U7U
00002630 47 55 57 55 67 55 77 55 87 55 97 55 A7 55 B7 55 GUWUgUwU.U.U.U.U
00002640 C7 55 D7 55 E7 55 F7 55 07 56 17 56 27 56 37 56 .U.U.U.U.V.V'V7V
00002650 47 56 57 56 67 56 77 56 87 56 97 56 A7 56 B7 56 GVWVgVwV.V.V.V.V
00002660 C7 56 D7 56 E7 56 F7 56 07 57 17 57 27 57 37 57 .V.V.V.V.W.W'W7W
00002670 47 57 57 57 67 57 77 57 87 57 97 57 A7 57 B7 57 GWWWgWwW.W.W.W.W
00002680 C7 57 D7 57 E7 57 F7 57 07 58 17 58 27 58 37 58 .W.W.W.W.X.X'X7X
00002690 47 58 57 58 67 58 77 58 87 58 97 58 A7 58 B7 58 GXWXgXwX.X.X.X.X
000026A0 C7 58 D7 58 E7 58 F7 58 07 59 17 59 27 59 37 59 .X.X.X.X.Y.Y'Y7Y
000026B0 47 59 57 59 67 59 77 59 87 59 97 59 A7 59 B7 59 GYWYgYwY.Y.Y.Y.Y
000026C0 C7 59 D7 59 E7 59 F7 59 07 5A 17 5A 27 5A 37 5A .Y.Y.Y.Y.Z.Z'Z7Z
000026D0 47 5A 57 5A 67 5A 77 5A 87 5A 97 5A A7 5A B7 5A GZWZgZwZ.Z.Z.Z.Z
000026E0 C7 5A D7 5A E7 5A F7 5A 07 5B 17 5B 27 5B 37 5B .Z.Z.Z.Z.[.['[7[
000026F0 47 5B 57 5B 67 5B 77 5B 87 5B 97 5B A7 5B B7 5B G[W[g[w[.[.[.[.[
00002700 C7 5B D7 5B E7 5B F7 5B 07 5C 17 5C 27 5C 37 5C .[.[.[.[.\.\'\7\
00002710 47 5C 57 5C 67 5C 77 5C 87 5C 97 5C A7 5C B7 5C G\W\g\w\.\.\.\.\
00002720 C7 5C D7 5C E7 5C F7 5C 07 5D 17 5D 27 5D 37 5D .\.\.\.\.].]']7]
00002730 47 5D 57 5D 67 5D 77 5D 87 5D 97 5D A7 5D B7 5D G]W]g]w].].].].]
00002740 C7 5D D7 5D E7 5D F7 5D 07 5E 17 5E 27 5E 37 5E .].].].].^.^'^7^
00002750 47 5E 57 5E 67 5E 77 5E 87 5E 97 5E A7 5E B7 5E G^W^g^w^.^.^.^.^
00002760 C7 5E D7 5E E7 5E F7 5E 07 5F 17 5F 27 5F 37 5F .^.^.^.^._._'_7_
00002770 47 5F 57 5F 67 5F 77 5F 87 5F 97 5F A7 5F B7 5F G_W_g_w_._._._._
00002780 C7 5F D7 5F E7 5F F7 5F 07 60 17 60 27 60 37 60 ._._._._.`.`'`7`
00002790 47 60 57 60 67 60 77 60 87 60 97 60 A7 60 B7 60 G`W`g`w`.`.`.`.`
000027A0 C7 60 D7 60 E7 60 F7 60 07 61 17 61 27 61 37 61 .`.`.`.`.a.a'a7a
000027B0 47 61 57 61 67 61 77 61 87 61 97 61 A7 61 B7 61 GaWagawa.a.a.a.a
000027C0 C7 61 D7 61 E7 61 F7 61 07 62 17 62 27 62 37 62 .a.a.a.a.b.b'b7b
000027D0 47 62 57 62 67 62 77 62 87 62 97 62 A7 62 B7 62 GbWbgbwb.b.b.b.b
000027E0 C7 62 D7 62 E7 62 F7 62 07 63 17 63 27 63 37 63 .b.b.b.b.c.c'c7c
000027F0 47 63 57 63 67 63 77 63 87 63 97 63 A7 63 B7 63 GcWcgcwc.c.c.c.c
00002800 C7 63 D7 63 E7 63 F7 63 07 64 17 64 27 64 37 64 .c.c.c.c.d.d'd7d
00002810 47 64 57 64 67 64 77 64 87 64 97 64 A7 64 B7 64 GdWdgdwd.d.d.d.d
00002820 C7 64 D7 64 E7 64 F7 64 07 65 17 65 27 65 37 65 .d.d.d.d.e.e'e7e
00002830 47 65 57 65 67 65 77 65 87 65 97 65 A7 65 B7 65 GeWegewe.e.e.e.e
00002840 C7 65 D7 65 E7 65 F7 65 07 66 17 66 27 66 37 66 .e.e.e.e.f.f'f7f
00002850 47 66 57 66 67 66 77 66 87 66 97 66 A7 66 B7 66 GfWfgfwf.f.f.f.f
00002860 C7 66 D7 66 E7 66 F7 66 07 67 17 67 27 67 37 67 .f.f.f.f.g.g'g7g
00002870 47 67 57 67 67 67 77 67 87 67 97 67 A7 67 B7 67 GgWgggwg.g.g.g.g
00002880 C7 67 D7 67 E7 67 F7 67 07 68 17 68 27 68 37 68 .g.g.g.g.h.h'h7h
00002890 47 68 57 68 67 68 77 68 87 68 97 68 A7 68 B7 68 GhWhghwh.h.h.h.h
000028A0 C7 68 D7 68 E7 68 F7 68 07 69 17 69 27 69 37 69 .h.h.h.h.i.i'i7i
000028B0 47 69 57 69 67 69 77 69 87 69 97 69 A7 69 B7 69 GiWigiwi.i.i.i.i
000028C0 C7 69 D7 69 E7 69 F7 69 07 6A 17 6A 27 6A 37 6A .i.i.i.i.j.j'j7j
000028D0 47 6A 57 6A 67 6A 77 6A 87 6A 97 6A A7 6A B7 6A GjWjgjwj.j.j.j.j
000028E0 C7 6A D7 6A E7 6A F7 6A 07 6B 17 6B 27 6B 37 6B .j.j.j.j.k.k'k7k
000028F0 47 6B 57 6B 67 6B 77 6B 87 6B 97 6B A7 6B B7 6B GkWkgkwk.k.k.k.k
00002900 C7 6B D7 6B E7 6B F7 6B 07 6C 17 6C 27 6C 37 6C .k.k.k.k.l.l'l7l
00002910 47 6C 57 6C 67 6C 77 6C 87 6C 97 6C A7 6C B7 6C GlWlglwl.l.l.l.l
00002920 C7 6C D7 6C E7 6C F7 6C 07 6D 17 6D 27 6D 37 6D .l.l.l.l.m.m'm7m
00002930 47 6D 57 6D 67 6D 77 6D 87 6D 97 6D A7 6D B7 6D GmWmgmwm.m.m.m.m
00002940 C7 6D D7 6D E7 6D F7 6D 07 6E 17 6E 27 6E 37 6E .m.m.m.m.n.n'n7n
00002950 47 6E 57 6E 67 6E 77 6E 87 6E 97 6E A7 6E B7 6E GnWngnwn.n.n.n.n
00002960 C7 6E D7 6E E7 6E F7 6E 07 6F 17 6F 27 6F 37 6F .n.n.n.n.o.o'o7o
00002970 47 6F 57 6F 67 6F 77 6F 87 6F 97 6F A7 6F B7 6F GoWogowo.o.o.o.o
00002980 C7 6F D7 6F E7 6F F7 6F 07 70 17 70 27 70 37 70 .o.o.o.o.p.p'p7p
00002990 47 70 57 70 67 70 77 70 87 70 97 70 A7 70 B7 70 GpWpgpwp.p.p.p.p
000029A0 C7 70 D7 70 E7 70 F7 70 07 71 17 71 27 71 37 71 .p.p.p.p.q.q'q7q
000029B0 47 71 57 71 67 71 77 71 87 71 97 71 A7 71 B7 71 GqWqgqwq.q.q.q.q
000029C0 C7 71 D7 71 E7 71 F7 71 07 72 17 72 27 72 37 72 .q.q.q.q.r.r'r7r
000029D0 47 72 57 72 67 72 77 72 87 72 97 72 A7 72 B7 72 GrWrgrwr.r.r.r.r
000029E0 C7 72 D7 72 E7 72 F7 72 07 73 17 73 27 73 37 73 .r.r.r.r.s.s's7s
000029F0 47 73 57 73 67 73 77 73 87 73 97 73 A7 73 B7 73 GsWsgsws.s.s.s.s
00002A00 C7 73 D7 73 E7 73 F7 73 07 74 17 74 27 74 37 74 .s.s.s.s.t.t't7t
00002A10 47 74 57 74 67 74 77 74 87 74 97 74 A7 74 B7 74 GtWtgtwt.t.t.t.t
00002A20 C7 74 D7 74 E7 74 F7 74 07 75 17 75 27 75 37 75 .t.t.t.t.u.u'u7u
00002A30 47 75 57 75 67 75 77 75 87 75 97 75 A7 75 B7 75 GuWuguwu.u.u.u.u
00002A40 C7 75 D7 75 E7 75 F7 75 07 76 17 76 27 76 37 76 .u.u.u.u.v.v'v7v
00002A50 47 76 57 76 67 76 77 76 87 76 97 76 A7 76 B7 76 GvWvgvwv.v.v.v.v
00002A60 C7 76 D7 76 E7 76 F7 76 07 77 17 77 27 77 37 77 .v.v.v.v.w.w'w7w
00002A70 47 77 57 77 67 77 77 77 87 77 97 77 A7 77 B7 77 GwWwgwww.w.w.w.w
00002A80 C7 77 D7 77 E7 77 F7 77 07 78 17 78 27 78 37 78 .w.w.w.w.x.x'x7x
00002A90 47 78 57 78 67 78 77 78 87 78 97 78 A7 78 B7 78 GxWxgxwx.x.x.x.x
00002AA0 C7 78 D7 78 E7 78 F7 78 07 79 17 79 27 79 37 79 .x.x.x.x.y.y'y7y
00002AB0 47 79 57 79 67 79 77 79 87 79 97 79 A7 79 B7 79 GyWygywy.y.y.y.y
00002AC0 C7 79 D7 79 E7 79 F7 79 07 7A 17 7A 27 7A 37 7A .y.y.y.y.z.z'z7z
00002AD0 47 7A 57 7A 67 7A 77 7A 87 7A 97 7A A7 7A B7 7A GzWzgzwz.z.z.z.z
00002AE0 C7 7A D7 7A E7 7A F7 7A 07 7B 17 7B 27 7B 37 7B .z.z.z.z.{.{'{7{
00002AF0 47 7B 57 7B 67 7B 77 7B 87 7B 97 7B A7 7B B7 7B G{W{g{w{.{.{.{.{
00002B00 C7 7B D7 7B E7 7B F7 7B 07 7C 17 7C 27 7C 37 7C .{.{.{.{.|.|'|7|
00002B10 47 7C 57 7C 67 7C 77 7C 87 7C 97 7C A7 7C B7 7C G|W|g|w|.|.|.|.|
00002B20 C7 7C D7 7C E7 7C F7 7C 07 7D 17 7D 27 7D 37 7D .|.|.|.|.}.}'}7}
00002B30 47 7D 57 7D 67 7D 77 7D 87 7D 97 7D A7 7D B7 7D G}W}g}w}.}.}.}.}
00002B40 C7 7D D7 7D E7 7D F7 7D 07 7E 17 7E 27 7E 37 7E .}.}.}.}.~.~'~7~
00002B50 47 7E 57 7E 67 7E 77 7E 87 7E 97 7E A7 7E B7 7E G~W~g~w~.~.~.~.~
00002B60 C7 7E D7 7E E7 7E F7 7E 07 7F 17 7F 27 7F 37 7F .~.~.~.~....'.7.
00002B70 47 7F 57 7F 67 7F 77 7F 87 7F 97 7F A7 7F B7 7F G.W.g.w.........
00002B80 C7 7F D7 7F E7 7F F7 7F 07 80 17 80 27 80 37 80 ............'.7.
00002B90 47 80 57 80 67 80 77 80 87 80 97 80 A7 80 B7 80 G.W.g.w.........
00002BA0 C7 80 D7 80 E7 80 F7 80 07 81 17 81 27 81 37 81 ............'.7.
00002BB0 47 81 57 81 67 81 77 81 87 81 97 81 A7 81 B7 81 G.W.g.w.........
00002BC0 C7 81 D7 81 E7 81 F7 81 07 82 17 82 27 82 37 82 ............'.7.
00002BD0 47 82 57 82 67 82 77 82 87 82 97 82 A7 82 B7 82 G.W.g.w.........
00002BE0 C7 82 D7 82 E7 82 F7 82 07 83 17 83 27 83 37 83 ............'.7.
00002BF0 47 83 57 83 67 83 77 83 87 83 97 83 A7 83 B7 83 G.W.g.w.........
00002C00 C7 83 D7 83 E7 83 F7 83 07 84 17 84 27 84 37 84 ............'.7.
00002C10 47 84 57 84 67 84 77 84 87 84 97 84 A7 84 B7 84 G.W.g.w.........
00002C20 C7 84 D7 84 E7 84 F7 84 07 85 17 85 27 85 37 85 ............'.7.
00002C30 47 85 57 85 67 85 77 85 87 85 97 85 A7 85 B7 85 G.W.g.w.........
00002C40 C7 85 D7 85 E7 85 F7 85 07 86 17 86 27 86 37 86 ............'.7.
00002C50 47 86 57 86 67 86 77 86 87 86 97 86 A7 86 B7 86 G.W.g.w.........
00002C60 C7 86 D7 86 E7 86 F7 86 07 87 17 87 27 87 37 87 ............'.7.
00002C70 47 87 57 87 67 87 77 87 87 87 97 87 A7 87 B7 87 G.W.g.w.........
00002C80 C7 87 D7 87 E7 87 F7 87 07 88 17 88 27 88 37 88 ............'.7.
00002C90 47 88 57 88 67 88 77 88 87 88 97 88 A7 88 B7 88 G.W.g.w.........
00002CA0 C7 88 D7 88 E7 88 F7 88 07 89 17 89 27 89 37 89 ............'.7.
00002CB0 47 89 57 89 67 89 77 89 87 89 97 89 A7 89 B7 89 G.W.g.w.........
00002CC0 C7 89 D7 89 E7 89 F7 89 07 8A 17 8A 27 8A 37 8A ............'.7.
00002CD0 47 8A 57 8A 67 8A 77 8A 87 8A 97 8A A7 8A B7 8A G.W.g.w.........
00002CE0 C7 8A D7 8A E7 8A F7 8A 07 8B 17 8B 27 8B 37 8B ............'.7.
00002CF0 47 8B 57 8B 67 8B 77 8B 87 8B 97 8B A7 8B B7 8B G.W.g.w.........
00002D00 C7 8B D7 8B E7 8B F7 8B 07 8C 17 8C 27 8C 37 8C ............'.7.
00002D10 47 8C 57 8C 67 8C 77 8C 87 8C 97 8C A7 8C B7 8C G.W.g.w.........
00002D20 C7 8C D7 8C E7 8C F7 8C 07 8D 17 8D 27 8D 37 8D ............'.7.
00002D30 47 8D 57 8D 67 8D 77 8D 87 8D 97 8D A7 8D B7 8D G.W.g.w.........
00002D40 C7 8D D7 8D E7 8D F7 8D 07 8E 17 8E 27 8E 37 8E ............'.7.
00002D50 47 8E 57 8E 67 8E 77 8E 87 8E 97 8E A7 8E B7 8E G.W.g.w.........
00002D60 C7 8E D7 8E E7 8E F7 8E 07 8F 17 8F 27 8F 37 8F ............'.7.
00002D70 47 8F 57 8F 67 8F 77 8F 87 8F 97 8F A7 8F B7 8F G.W.g.w.........
00002D80 C7 8F D7 8F E7 8F F7 8F 07 90 17 90 27 90 37 90 ............'.7.
00002D90 47 90 57 90 67 90 77 90 87 90 97 90 A7 90 B7 90 G.W.g.w.........
00002DA0 C7 90 D7 90 E7 90 F7 90 07 91 17 91 27 91 37 91 ............'.7.
00002DB0 47 91 57 91 67 91 77 91 87 91 97 91 A7 91 B7 91 G.W.g.w.........
00002DC0 C7 91 D7 91 E7 91 F7 91 07 92 17 92 27 92 37 92 ............'.7.
00002DD0 47 92 57 92 67 92 77 92 87 92 97 92 A7 92 B7 92 G.W.g.w.........
00002DE0 C7 92 D7 92 E7 92 F7 92 07 93 17 93 27 93 37 93 ............'.7.
00002DF0 47 93 57 93 67 93 77 93 87 93 97 93 A7 93 B7 93 G.W.g.w.........
00002E00 C7 93 D7 93 E7 93 F7 93 07 94 17 94 27 94 37 94 ............'.7.
00002E10 47 94 57 94 67 94 77 94 87 94 97 94 A7 94 B7 94 G.W.g.w.........
00002E20 C7 94 D7 94 E7 94 F7 94 07 95 17 95 27 95 37 95 ............'.7.
00002E30 47 95 57 95 67 95 77 95 87 95 97 95 A7 95 B7 95 G.W.g.w.........
00002E40 C7 95 D7 95 E7 95 F7 95 07 96 17 96 27 96 37 96 ............'.7.
00002E50 47 96 57 96 67 96 77 96 87 96 97 96 A7 96 B7 96 G.W.g.w.........
00002E60 C7 96 D7 96 E7 96 F7 96 07 97 17 97 27 97 37 97 ............'.7.
00002E70 47 97 57 97 67 97 77 97 87 97 97 97 A7 97 B7 97 G.W.g.w.........
00002E80 C7 97 D7 97 E7 97 F7 97 07 98 17 98 27 98 37 98 ............'.7.
00002E90 47 98 57 98 67 98 77 98 87 98 97 98 A7 98 B7 98 G.W.g.w.........
00002EA0 C7 98 D7 98 E7 98 F7 98 07 99 17 99 27 99 37 99 ............'.7.
00002EB0 47 99 57 99 67 99 77 99 87 99 97 99 A7 99 B7 99 G.W.g.w.........
00002EC0 C7 99 D7 99 E7 99 F7 99 07 9A 17 9A 27 9A 37 9A ............'.7.
00002ED0 47 9A 57 9A 67 9A 77 9A 87 9A 97 9A A7 9A B7 9A G.W.g.w.........
00002EE0 C7 9A D7 9A E7 9A F7 9A 07 9B 17 9B 27 9B 37 9B ............'.7.
00002EF0 47 9B 57 9B 67 9B 77 9B 87 9B 97 9B A7 9B B7 9B G.W.g.w.........
00002F00 C7 9B D7 9B E7 9B F7 9B 07 9C 17 9C 27 9C 37 9C ............'.7.
00002F10 47 9C 57 9C 67 9C 77 9C 87 9C 97 9C A7 9C B7 9C G.W.g.w.........
00002F20 C7 9C D7 9C E7 9C F7 9C 07 9D 17 9D 27 9D 37 9D ............'.7.
00002F30 47 9D 57 9D 67 9D 77 9D 87 9D 97 9D A7 9D B7 9D G.W.g.w.........
00002F40 C7 9D D7 9D E7 9D F7 9D 07 9E 17 9E 27 9E 37 9E ............'.7.
00002F50 47 9E 57 9E 67 9E 77 9E 87 9E 97 9E A7 9E B7 9E G.W.g.w.........
00002F60 C7 9E D7 9E E7 9E F7 9E 07 9F 17 9F 27 9F 37 9F ............'.7.
00002F70 47 9F 57 9F 67 9F 77 9F 87 9F 97 9F A7 9F B7 9F G.W.g.w.........
00002F80 C7 9F D7 9F E7 9F F7 9F 07 A0 17 A0 27 A0 37 A0 ............'.7.
00002F90 47 A0 57 A0 67 A0 77 A0 87 A0 97 A0 A7 A0 B7 A0 G.W.g.w.........
00002FA0 C7 A0 D7 A0 E7 A0 F7 A0 07 A1 17 A1 27 A1 37 A1 ............'.7.
00002FB0 47 A1 57 A1 67 A1 77 A1 87 A1 97 A1 A7 A1 B7 A1 G.W.g.w.........
00002FC0 C7 A1 D7 A1 E7 A1 F7 A1 07 A2 17 A2 27 A2 37 A2 ............'.7.
00002FD0 47 A2 57 A2 67 A2 77 A2 87 A2 97 A2 A7 A2 B7 A2 G.W.g.w.........
00002FE0 C7 A2 D7 A2 E7 A2 F7 A2 07 A3 17 A3 27 A3 37 A3 ............'.7.
00002FF0 47 A3 57 A3 67 A3 77 A3 87 A3 97 A3 A7 A3 B7 A3 G.W.g.w.........
00003000 C7 A3 D7 A3 E7 A3 F7 A3 07 A4 17 A4 27 A4 37 A4 ............'.7.
00003010 47 A4 57 A4 67 A4 77 A4 87 A4 97 A4 A7 A4 B7 A4 G.W.g.w.........
00003020 C7 A4 D7 A4 E7 A4 F7 A4 07 A5 17 A5 27 A5 37 A5 ............'.7.
00003030 47 A5 57 A5 67 A5 77 A5 87 A5 97 A5 A7 A5 B7 A5 G.W.g.w.........
00003040 C7 A5 D7 A5 E7 A5 F7 A5 07 A6 17 A6 27 A6 37 A6 ............'.7.
00003050 47 A6 57 A6 67 A6 77 A6 87 A6 97 A6 A7 A6 B7 A6 G.W.g.w.........
00003060 C7 A6 D7 A6 E7 A6 F7 A6 07 A7 17 A7 27 A7 37 A7 ............'.7.
00003070 47 A7 57 A7 67 A7 77 A7 87 A7 97 A7 A7 A7 B7 A7 G.W.g.w.........
00003080 C7 A7 D7 A7 E7 A7 F7 A7 07 A8 17 A8 27 A8 37 A8 ............'.7.
00003090 47 A8 57 A8 67 A8 77 A8 87 A8 97 A8 A7 A8 B7 A8 G.W.g.w.........
000030A0 C7 A8 D7 A8 E7 A8 F7 A8 07 A9 17 A9 27 A9 37 A9 ............'.7.
000030B0 47 A9 57 A9 67 A9 77 A9 87 A9 97 A9 A7 A9 B7 A9 G.W.g.w.........
000030C0 C7 A9 D7 A9 E7 A9 F7 A9 07 AA 17 AA 27 AA 37 AA ............'.7.
000030D0 47 AA 57 AA 67 AA 77 AA 87 AA 97 AA A7 AA B7 AA G.W.g.w.........
000030E0 C7 AA D7 AA E7 AA F7 AA 07 AB 17 AB 27 AB 37 AB ............'.7.
000030F0 47 AB 57 AB 67 AB 77 AB 87 AB 97 AB A7 AB B7 AB G.W.g.w.........
00003100 C7 AB D7 AB E7 AB F7 AB 07 AC 17 AC 27 AC 37 AC ............'.7.
00003110 47 AC 57 AC 67 AC 77 AC 87 AC 97 AC A7 AC B7 AC G.W.g.w.........
00003120 C7 AC D7 AC E7 AC F7 AC 07 AD 17 AD 27 AD 37 AD ............'.7.
00003130 47 AD 57 AD 67 AD 77 AD 87 AD 97 AD A7 AD B7 AD G.W.g.w.........
00003140 C7 AD D7 AD E7 AD F7 AD 07 AE 17 AE 27 AE 37 AE ............'.7.
00003150 47 AE 57 AE 67 AE 77 AE 87 AE 97 AE A7 AE B7 AE G.W.g.w.........
00003160 C7 AE D7 AE E7 AE F7 AE 07 AF 17 AF 27 AF 37 AF ............'.7.
00003170 47 AF 57 AF 67 AF 77 AF 87 AF 97 AF A7 AF B7 AF G.W.g.w.........
00003180 C7 AF D7 AF E7 AF F7 AF 07 B0 17 B0 27 B0 37 B0 ............'.7.
00003190 47 B0 57 B0 67 B0 77 B0 87 B0 97 B0 A7 B0 B7 B0 G.W.g.w.........
000031A0 C7 B0 D7 B0 E7 B0 F7 B0 07 B1 17 B1 27 B1 37 B1 ............'.7.
000031B0 47 B1 57 B1 67 B1 77 B1 87 B1 97 B1 A7 B1 B7 B1 G.W.g.w.........
000031C0 C7 B1 D7 B1 E7 B1 F7 B1 07 B2 17 B2 27 B2 37 B2 ............'.7.
000031D0 47 B2 57 B2 67 B2 77 B2 87 B2 97 B2 A7 B2 B7 B2 G.W.g.w.........
000031E0 C7 B2 D7 B2 E7 B2 F7 B2 07 B3 17 B3 27 B3 37 B3 ............'.7.
000031F0 47 B3 57 B3 67 B3 77 B3 87 B3 97 B3 A7 B3 B7 B3 G.W.g.w.........
00003200 C7 B3 D7 B3 E7 B3 F7 B3 07 B4 17 B4 27 B4 37 B4 ............'.7.
00003210 47 B4 57 B4 67 B4 77 B4 87 B4 97 B4 A7 B4 B7 B4 G.W.g.w.........
00003220 C7 B4 D7 B4 E7 B4 F7 B4 07 B5 17 B5 27 B5 37 B5 ............'.7.
00003230 47 B5 57 B5 67 B5 77 B5 87 B5 97 B5 A7 B5 B7 B5 G.W.g.w.........
00003240 C7 B5 D7 B5 E7 B5 F7 B5 07 B6 17 B6 27 B6 37 B6 ............'.7.
00003250 47 B6 57 B6 67 B6 77 B6 87 B6 97 B6 A7 B6 B7 B6 G.W.g.w.........
00003260 C7 B6 D7 B6 E7 B6 F7 B6 07 B7 17 B7 27 B7 37 B7 ............'.7.
00003270 47 B7 57 B7 67 B7 77 B7 87 B7 97 B7 A7 B7 B7 B7 G.W.g.w.........
00003280 C7 B7 D7 B7 E7 B7 F7 B7 07 B8 17 B8 27 B8 37 B8 ............'.7.
00003290 47 B8 57 B8 67 B8 77 B8 87 B8 97 B8 A7 B8 B7 B8 G.W.g.w.........
000032A0 C7 B8 D7 B8 E7 B8 F7 B8 07 B9 17 B9 27 B9 37 B9 ............'.7.
000032B0 47 B9 57 B9 67 B9 77 B9 87 B9 97 B9 A7 B9 B7 B9 G.W.g.w.........
000032C0 C7 B9 D7 B9 E7 B9 F7 B9 07 BA 17 BA 27 BA 37 BA ............'.7.
000032D0 47 BA 57 BA 67 BA 77 BA 87 BA 97 BA A7 BA B7 BA G.W.g.w.........
000032E0 C7 BA D7 BA E7 BA F7 BA 07 BB 17 BB 27 BB 37 BB ............'.7.
000032F0 47 BB 57 BB 67 BB 77 BB 87 BB 97 BB A7 BB B7 BB G.W.g.w.........
00003300 C7 BB D7 BB E7 BB F7 BB 07 BC 17 BC 27 BC 37 BC ............'.7.
00003310 47 BC 57 BC 67 BC 77 BC 87 BC 97 BC A7 BC B7 BC G.W.g.w.........
00003320 C7 BC D7 BC E7 BC F7 BC 07 BD 17 BD 27 BD 37 BD ............'.7.
00003330 47 BD 57 BD 67 BD 77 BD 87 BD 97 BD A7 BD B7 BD G.W.g.w.........
00003340 C7 BD D7 BD E7 BD F7 BD 07 BE 17 BE 27 BE 37 BE ............'.7.
00003350 47 BE 57 BE 67 BE 77 BE 87 BE 97 BE A7 BE B7 BE G.W.g.w.........
00003360 C7 BE D7 BE E7 BE F7 BE 07 BF 17 BF 27 BF 37 BF ............'.7.
00003370 47 BF 57 BF 67 BF 77 BF 87 BF 97 BF A7 BF B7 BF G.W.g.w.........
00003380 C7 BF D7 BF E7 BF F7 BF 07 C0 17 C0 27 C0 37 C0 ............'.7.
00003390 47 C0 57 C0 67 C0 77 C0 87 C0 97 C0 A7 C0 B7 C0 G.W.g.w.........
000033A0 C7 C0 D7 C0 E7 C0 F7 C0 07 C1 17 C1 27 C1 37 C1 ............'.7.
000033B0 47 C1 57 C1 67 C1 77 C1 87 C1 97 C1 A7 C1 B7 C1 G.W.g.w.........
000033C0 C7 C1 D7 C1 E7 C1 F7 C1 07 C2 17 C2 27 C2 37 C2 ............'.7.
000033D0 47 C2 57 C2 67 C2 77 C2 87 C2 97 C2 A7 C2 B7 C2 G.W.g.w.........
000033E0 C7 C2 D7 C2 E7 C2 F7 C2 07 C3 17 C3 27 C3 37 C3 ............'.7.
000033F0 47 C3 57 C3 67 C3 77 C3 87 C3 97 C3 A7 C3 B7 C3 G.W.g.w.........
00003400 C7 C3 D7 C3 E7 C3 F7 C3 07 C4 17 C4 27 C4 37 C4 ............'.7.
00003410 47 C4 57 C4 67 C4 77 C4 87 C4 97 C4 A7 C4 B7 C4 G.W.g.w.........
00003420 C7 C4 D7 C4 E7 C4 F7 C4 07 C5 17 C5 27 C5 37 C5 ............'.7.
00003430 47 C5 57 C5 67 C5 77 C5 87 C5 97 C5 A7 C5 B7 C5 G.W.g.w.........
00003440 C7 C5 D7 C5 E7 C5 F7 C5 07 C6 17 C6 27 C6 37 C6 ............'.7.
00003450 47 C6 57 C6 67 C6 77 C6 87 C6 97 C6 A7 C6 B7 C6 G.W.g.w.........
00003460 C7 C6 D7 C6 E7 C6 F7 C6 07 C7 17 C7 27 C7 37 C7 ............'.7.
00003470 47 C7 57 C7 67 C7 77 C7 87 C7 97 C7 A7 C7 B7 C7 G.W.g.w.........
00003480 C7 C7 D7 C7 E7 C7 F7 C7 07 C8 17 C8 27 C8 37 C8 ............'.7.
00003490 47 C8 57 C8 67 C8 77 C8 87 C8 97 C8 A7 C8 B7 C8 G.W.g.w.........
000034A0 C7 C8 D7 C8 E7 C8 F7 C8 07 C9 17 C9 27 C9 37 C9 ............'.7.
000034B0 47 C9 57 C9 67 C9 77 C9 87 C9 97 C9 A7 C9 B7 C9 G.W.g.w.........
000034C0 C7 C9 D7 C9 E7 C9 F7 C9 07 CA 17 CA 27 CA 37 CA ............'.7.
000034D0 47 CA 57 CA 67 CA 77 CA 87 CA 97 CA A7 CA B7 CA G.W.g.w.........
000034E0 C7 CA D7 CA E7 CA F7 CA 07 CB 17 CB 27 CB 37 CB ............'.7.
000034F0 47 CB 57 CB 67 CB 77 CB 87 CB 97 CB A7 CB B7 CB G.W.g.w.........
00003500 C7 CB D7 CB E7 CB F7 CB 07 CC 17 CC 27 CC 37 CC ............'.7.
00003510 47 CC 57 CC 67 CC 77 CC 87 CC 97 CC A7 CC B7 CC G.W.g.w.........
00003520 C7 CC D7 CC E7 CC F7 CC 07 CD 17 CD 27 CD 37 CD ............'.7.
00003530 47 CD 57 CD 67 CD 77 CD 87 CD 97 CD A7 CD B7 CD G.W.g.w.........
00003540 C7 CD D7 CD E7 CD F7 CD 07 CE 17 CE 27 CE 37 CE ............'.7.
00003550 47 CE 57 CE 67 CE 77 CE 87 CE 97 CE A7 CE B7 CE G.W.g.w.........
00003560 C7 CE D7 CE E7 CE F7 CE 07 CF 17 CF 27 CF 37 CF ............'.7.
00003570 47 CF 57 CF 67 CF 77 CF 87 CF 97 CF A7 CF B7 CF G.W.g.w.........
00003580 C7 CF D7 CF E7 CF F7 CF 07 D0 17 D0 27 D0 37 D0 ............'.7.
00003590 47 D0 57 D0 67 D0 77 D0 87 D0 97 D0 A7 D0 B7 D0 G.W.g.w.........
000035A0 C7 D0 D7 D0 E7 D0 F7 D0 07 D1 17 D1 27 D1 37 D1 ............'.7.
000035B0 47 D1 57 D1 67 D1 77 D1 87 D1 97 D1 A7 D1 B7 D1 G.W.g.w.........
000035C0 C7 D1 D7 D1 E7 D1 F7 D1 07 D2 17 D2 27 D2 37 D2 ............'.7.
000035D0 47 D2 57 D2 67 D2 77 D2 87 D2 97 D2 A7 D2 B7 D2 G.W.g.w.........
000035E0 C7 D2 D7 D2 E7 D2 F7 D2 07 D3 17 D3 27 D3 37 D3 ............'.7.
000035F0 47 D3 57 D3 67 D3 77 D3 87 D3 97 D3 A7 D3 B7 D3 G.W.g.w.........
00003600 C7 D3 D7 D3 E7 D3 F7 D3 07 D4 17 D4 27 D4 37 D4 ............'.7.
00003610 47 D4 57 D4 67 D4 77 D4 87 D4 97 D4 A7 D4 B7 D4 G.W.g.w.........
00003620 C7 D4 D7 D4 E7 D4 F7 D4 07 D5 17 D5 27 D5 37 D5 ............'.7.
00003630 47 D5 57 D5 67 D5 77 D5 87 D5 97 D5 A7 D5 B7 D5 G.W.g.w.........
00003640 C7 D5 D7 D5 E7 D5 F7 D5 07 D6 17 D6 27 D6 37 D6 ............'.7.
00003650 47 D6 57 D6 67 D6 77 D6 87 D6 97 D6 A7 D6 B7 D6 G.W.g.w.........
00003660 C7 D6 D7 D6 E7 D6 F7 D6 07 D7 17 D7 27 D7 37 D7 ............'.7.
00003670 47 D7 57 D7 67 D7 77 D7 87 D7 97 D7 A7 D7 B7 D7 G.W.g.w.........
00003680 C7 D7 D7 D7 E7 D7 F7 D7 07 D8 17 D8 27 D8 37 D8 ............'.7.
00003690 47 D8 57 D8 67 D8 77 D8 87 D8 97 D8 A7 D8 B7 D8 G.W.g.w.........
000036A0 C7 D8 D7 D8 E7 D8 F7 D8 07 D9 17 D9 27 D9 37 D9 ............'.7.
000036B0 47 D9 57 D9 67 D9 77 D9 87 D9 97 D9 A7 D9 B7 D9 G.W.g.w.........
000036C0 C7 D9 D7 D9 E7 D9 F7 D9 07 DA 17 DA 27 DA 37 DA ............'.7.
000036D0 47 DA 57 DA 67 DA 77 DA 87 DA 97 DA A7 DA B7 DA G.W.g.w.........
000036E0 C7 DA D7 DA E7 DA F7 DA 07 DB 17 DB 27 DB 37 DB ............'.7.
000036F0 47 DB 57 DB 67 DB 77 DB 87 DB 97 DB A7 DB B7 DB G.W.g.w.........
00003700 C7 DB D7 DB E7 DB F7 DB 07 DC 17 DC 27 DC 37 DC ............'.7.
00003710 47 DC 57 DC 67 DC 77 DC 87 DC 97 DC A7 DC B7 DC G.W.g.w.........
00003720 C7 DC D7 DC E7 DC F7 DC 07 DD 17 DD 27 DD 37 DD ............'.7.
00003730 47 DD 57 DD 67 DD 77 DD 87 DD 97 DD A7 DD B7 DD G.W.g.w.........
00003740 C7 DD D7 DD E7 DD F7 DD 07 DE 17 DE 27 DE 37 DE ............'.7.
00003750 47 DE 57 DE 67 DE 77 DE 87 DE 97 DE A7 DE B7 DE G.W.g.w.........
00003760 C7 DE D7 DE E7 DE F7 DE 07 DF 17 DF 27 DF 37 DF ............'.7.
00003770 47 DF 57 DF 67 DF 77 DF 87 DF 97 DF A7 DF B7 DF G.W.g.w.........
00003780 C7 DF D7 DF E7 DF F7 DF 07 E0 17 E0 27 E0 37 E0 ............'.7.
00003790 47 E0 57 E0 67 E0 77 E0 87 E0 97 E0 A7 E0 B7 E0 G.W.g.w.........
000037A0 C7 E0 D7 E0 E7 E0 F7 E0 07 E1 17 E1 27 E1 37 E1 ............'.7.
000037B0 47 E1 57 E1 67 E1 77 E1 87 E1 97 E1 A7 E1 B7 E1 G.W.g.w.........
000037C0 C7 E1 D7 E1 E7 E1 F7 E1 07 E2 17 E2 27 E2 37 E2 ............'.7.
000037D0 47 E2 57 E2 67 E2 77 E2 87 E2 97 E2 A7 E2 B7 E2 G.W.g.w.........
000037E0 C7 E2 D7 E2 E7 E2 F7 E2 07 E3 17 E3 27 E3 37 E3 ............'.7.
000037F0 47 E3 57 E3 67 E3 77 E3 87 E3 97 E3 A7 E3 B7 E3 G.W.g.w.........
00003800 C7 E3 D7 E3 E7 E3 F7 E3 07 E4 17 E4 27 E4 37 E4 ............'.7.
00003810 47 E4 57 E4 67 E4 77 E4 87 E4 97 E4 A7 E4 B7 E4 G.W.g.w.........
00003820 C7 E4 D7 E4 E7 E4 F7 E4 07 E5 17 E5 27 E5 37 E5 ............'.7.
00003830 47 E5 57 E5 67 E5 77 E5 87 E5 97 E5 A7 E5 B7 E5 G.W.g.w.........
00003840 C7 E5 D7 E5 E7 E5 F7 E5 07 E6 17 E6 27 E6 37 E6 ............'.7.
00003850 47 E6 57 E6 67 E6 77 E6 87 E6 97 E6 A7 E6 B7 E6 G.W.g.w.........
00003860 C7 E6 D7 E6 E7 E6 F7 E6 07 E7 17 E7 27 E7 37 E7 ............'.7.
00003870 47 E7 57 E7 67 E7 77 E7 87 E7 97 E7 A7 E7 B7 E7 G.W.g.w.........
00003880 C7 E7 D7 E7 E7 E7 F7 E7 07 E8 17 E8 27 E8 37 E8 ............'.7.
00003890 47 E8 57 E8 67 E8 77 E8 87 E8 97 E8 A7 E8 B7 E8 G.W.g.w.........
000038A0 C7 E8 D7 E8 E7 E8 F7 E8 07 E9 17 E9 27 E9 37 E9 ............'.7.
000038B0 47 E9 57 E9 67 E9 77 E9 87 E9 97 E9 A7 E9 B7 E9 G.W.g.w.........
000038C0 C7 E9 D7 E9 E7 E9 F7 E9 07 EA 17 EA 27 EA 37 EA ............'.7.
000038D0 47 EA 57 EA 67 EA 77 EA 87 EA 97 EA A7 EA B7 EA G.W.g.w.........
000038E0 C7 EA D7 EA E7 EA F7 EA 07 EB 17 EB 27 EB 37 EB ............'.7.
000038F0 47 EB 57 EB 67 EB 77 EB 87 EB 97 EB A7 EB B7 EB G.W.g.w.........
00003900 C7 EB D7 EB E7 EB F7 EB 07 EC 17 EC 27 EC 37 EC ............'.7.
00003910 47 EC 57 EC 67 EC 77 EC 87 EC 97 EC A7 EC B7 EC G.W.g.w.........
00003920 C7 EC D7 EC E7 EC F7 EC 07 ED 17 ED 27 ED 37 ED ............'.7.
00003930 47 ED 57 ED 67 ED 77 ED 87 ED 97 ED A7 ED B7 ED G.W.g.w.........
00003940 C7 ED D7 ED E7 ED F7 ED 07 EE 17 EE 27 EE 37 EE ............'.7.
00003950 47 EE 57 EE 67 EE 77 EE 87 EE 97 EE A7 EE B7 EE G.W.g.w.........
00003960 C7 EE D7 EE E7 EE F7 EE 07 EF 17 EF 27 EF 37 EF ............'.7.
00003970 47 EF 57 EF 67 EF 77 EF 87 EF 97 EF A7 EF B7 EF G.W.g.w.........
00003980 C7 EF D7 EF E7 EF F7 EF 07 F0 17 F0 27 F0 37 F0 ............'.7.
00003990 47 F0 57 F0 67 F0 77 F0 87 F0 97 F0 A7 F0 B7 F0 G.W.g.w.........
000039A0 C7 F0 D7 F0 E7 F0 F7 F0 07 F1 17 F1 27 F1 37 F1 ............'.7.
000039B0 47 F1 57 F1 67 F1 77 F1 87 F1 97 F1 A7 F1 B7 F1 G.W.g.w.........
000039C0 C7 F1 D7 F1 E7 F1 F7 F1 07 F2 17 F2 27 F2 37 F2 ............'.7.
000039D0 47 F2 57 F2 67 F2 77 F2 87 F2 97 F2 A7 F2 B7 F2 G.W.g.w.........
000039E0 C7 F2 D7 F2 E7 F2 F7 F2 07 F3 17 F3 27 F3 37 F3 ............'.7.
000039F0 47 F3 57 F3 67 F3 77 F3 87 F3 97 F3 A7 F3 B7 F3 G.W.g.w.........
00003A00 C7 F3 D7 F3 E7 F3 F7 F3 07 F4 17 F4 27 F4 37 F4 ............'.7.
00003A10 47 F4 57 F4 67 F4 77 F4 87 F4 97 F4 A7 F4 B7 F4 G.W.g.w.........
00003A20 C7 F4 D7 F4 E7 F4 F7 F4 07 F5 17 F5 27 F5 37 F5 ............'.7.
00003A30 47 F5 57 F5 67 F5 77 F5 87 F5 97 F5 A7 F5 B7 F5 G.W.g.w.........
00003A40 C7 F5 D7 F5 E7 F5 F7 F5 07 F6 17 F6 27 F6 37 F6 ............'.7.
00003A50 47 F6 57 F6 67 F6 77 F6 87 F6 97 F6 A7 F6 B7 F6 G.W.g.w.........
00003A60 C7 F6 D7 F6 E7 F6 F7 F6 07 F7 17 F7 27 F7 37 F7 ............'.7.
00003A70 47 F7 57 F7 67 F7 77 F7 87 F7 97 F7 A7 F7 B7 F7 G.W.g.w.........
00003A80 C7 F7 D7 F7 E7 F7 F7 F7 07 F8 17 F8 27 F8 37 F8 ............'.7.
00003A90 47 F8 57 F8 67 F8 77 F8 87 F8 97 F8 A7 F8 B7 F8 G.W.g.w.........
00003AA0 C7 F8 D7 F8 E7 F8 F7 F8 07 F9 17 F9 27 F9 37 F9 ............'.7.
00003AB0 47 F9 57 F9 67 F9 77 F9 87 F9 97 F9 A7 F9 B7 F9 G.W.g.w.........
00003AC0 C7 F9 D7 F9 E7 F9 F7 F9 07 FA 17 FA 27 FA 37 FA ............'.7.
00003AD0 47 FA 57 FA 67 FA 77 FA 87 FA 97 FA A7 FA B7 FA G.W.g.w.........
00003AE0 C7 FA D7 FA E7 FA F7 FA 07 FB 17 FB 27 FB 37 FB ............'.7.
00003AF0 47 FB 57 FB 67 FB 77 FB 87 FB 97 FB A7 FB B7 FB G.W.g.w.........
00003B00 C7 FB D7 FB E7 FB F7 FB 07 FC 17 FC 27 FC 37 FC ............'.7.
00003B10 47 FC 57 FC 67 FC 77 FC 87 FC 97 FC A7 FC B7 FC G.W.g.w.........
00003B20 C7 FC D7 FC E7 FC F7 FC 07 FD 17 FD 27 FD 37 FD ............'.7.
00003B30 47 FD 57 FD 67 FD 77 FD 87 FD 97 FD A7 FD B7 FD G.W.g.w.........
00003B40 C7 FD D7 FD E7 FD F7 FD 07 FE 17 FE 27 FE 37 FE ............'.7.
00003B50 47 FE 57 FE 67 FE 77 FE 87 FE 97 FE A7 FE B7 FE G.W.g.w.........
00003B60 C7 FE D7 FE E7 FE F7 FE 07 FF 17 FF 27 FF 37 FF ............'.7.
00003B70 47 FF 57 FF 67 FF 77 FF 87 FF 97 FF A7 FF B7 FF G.W.g.w.........
00003B80 C7 FF D7 FF E7 FF F7 FF 00 C0 00 7F 00 C0 00 7F ................
00003B90 00 C0 00 7F 00 C0 00 7F 00 C0 00 7F 00 C0 00 7F ................
00003BA0 00 C0 20 72 00 C0 20 71 40 C0 00 75 06 C0 00 5C .. r.. q@..u...\
00003BB0 60 C0 00 75 C0 C0 00 5C                         `..u...\        

;; hexagon_pre_main: 00003BB8
hexagon_pre_main proc
	{ r30 = 0x0 }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x8063 }
	{  }
	{ if (!p0) r0 = memw(r1) }
	{ r4.h = 0x0 }
	{ r4.l = 0x8063 }
	{ r4 = memw(r4) }
	{ r5.h = 0x0 }
	{ r5.l = 0x0 }
	{ p0 = cmp.eq(r5,0x0) }
	{ r0.h = 0x1000 }
	{ r0.l = 0x0 }
	{ if (p0) r5 = add(r0,0x0) }
	{ r5 = add(r4,r5) }
	{ r5 = add(r5,0xF) }
	{ r5 = and(r5,0xFFFFFFF0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x8073 }
	{ memw(r1) = r5 }
	{ r5 = memw(r1) }
	{ r7.h = 0x0 }
	{ r7.l = 0x0 }
	{ p0 = cmp.eq(r7,0x0) }
	{ r0.h = 0x40 }
	{ r0.l = 0x0 }
	{ if (p0) r7 = add(r0,0x0) }
	{ r6 = add(r5,r7) }
	{ r6 = and(r6,0xFFFFFFF0) }
	{ r0.l = 0x8083 }
	{ r0.h = 0x0 }
	{ r0 = memw(r0) }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) jump:nt 00003C78 }

l00003C4C:
	{ r1.h = 0x0 }
	{ r1.l = 0x8083 }
	{ memw(r1) = r6 }
	{ r6 = memw(r1) }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x8083 }
	{  }
	{ if (!p0) r0 = memw(r1) }

l00003C78:
	{ r6.h = 0x0 }
	{ r6.l = 0x8083 }
	{ r6 = memw(r6) }
	{ r7 = sub(r6,r7) }
	{ r7 = add(r7,0xF) }
	{ r7 = and(r7,0xFFFFFFF0) }
	{ r1.h = 0x0 }
	{ r1.l = 0x8093 }
	{ memw(r1) = r7 }
	{ r7 = memw(r1) }
	{ r1.h = 0x0 }
	{ r1.l = 0x0 }
	{ if (p0.new) jump:t 00003CBC; p0 = cmp.gtu(r1,0x1) }

l00003CAC:
	{ r0.h = 0x0 }
	{ r0.l = 0x8083 }
	{ r0 = memw(r0) }
	{ r29 = and(r0,0xFFFFFFF0) }

l00003CBC:
	{ r0.h = 0x4 }
	{ r0.l = 0x0 }
	{ gp = r0 }
	{ r28.h = 0x0 }
	{ r28.l = 0x4B01 }
	{ r0.h = 0x0 }
	{ r0.l = 0x80B3 }
	{ r1 = 0x400 }
	{ callr r28 }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ if (p0.new) jump:nt hexagon_start_main; p0 = cmp.gt(r0,0x1) }

l00003CEC:
	{ r0.h = 0x0 }
	{ r0.l = 0x9C03 }
	{ r2.h = 0x0 }
	{ r2.l = 0xC903 }
	{ r28.h = 0x0 }
	{ r28.l = 0x4E41 }
	{ r2 = sub(r2,r0); callr r28; r1 = 0x0 }
	{ r0.h = 0x4 }
	{ r0.l = 0x400 }
	{ r2.h = 0x4 }
	{ r2.l = 0x400 }
	{ r28.h = 0x0 }
	{ r28.l = 0x4E41 }
	{ r2 = sub(r2,r0); callr r28; r1 = 0x0 }

;; hexagon_start_main: 00003D34
;;   Called from:
;;     00003CE8 (in hexagon_pre_main)
;;     00003D28 (in hexagon_pre_main)
hexagon_start_main proc
	{ r2.h = 0x0 }
	{ r2.l = 0x0 }
	{ r3.h = 0x0 }
	{ r3.l = 0x90C3 }
	{ p0 = cmp.gt(r2,0x1) }
	{ if (!p0) r1:r0 = memd(r3); if (p0) r1 = 0x0; if (p0) r0 = 0x0 }
	{ r2.h = 0x0 }
	{ r2.l = 0xF700 }
	{ r3.h = 0x0 }
	{ r3.l = 0xCD82 }
	{ r4.h = 0xEAFA }
	{ r4.l = 0xFBBE }
	{ r5 = r4 }
	{ r13:r12 = combine(r5,r4); r11:r10 = combine(r5,r4); r9:r8 = combine(r5,r4); r7:r6 = combine(r5,r4) }
	{ r21:r20 = combine(r5,r4); r19:r18 = combine(r5,r4); r17:r16 = combine(r5,r4); r15:r14 = combine(r5,r4) }
	{ r27:r26 = combine(r5,r4); r25:r24 = combine(r5,r4); r23:r22 = combine(r5,r4) }
	{ r28.h = 0x0 }
	{ r28.l = 0x5301 }
	{ callr r28 }
	{ r0.h = 0x0 }
	{ r0.l = 0x0 }
	{ p0 = cmp.eq(r0,0x0) }
	{ if (!p0) callr r0 }

l00003DB8:
	{ r0 = 0x3F }
	{ stop(r0) }
