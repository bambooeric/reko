// example_text.c
// Generated by decompiling example
// using Reko decompiler version 0.11.6.0.

#include "example.h"

// 0000000000000600: void _start()
void _start()
{
	Eq_n fp;
	struct Eq_n * r15_n = fp - 0x00A0 & ~0x0F;
	r15_n->bFFFFFF50 = 0x00;
	ptr64 %continuation;
	r15_n->ptrFFFFFFF0 = %continuation;
	r15_n->ptrFFFFFFF8 = r15_n - 0x00B0;
	__libc_start_main();
}

// 0000000000000648: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (8303 - &g_b2068 <= g_qw08C8)
		return;
	<anonymous> * r1_n = g_ptr2030;
	if (r1_n == null)
		return;
	r1_n();
}

// 0000000000000680: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	byte * r3_n = &g_b2068 - &g_b2068;
	if ((r3_n >> 3) + ((r3_n >> 3) >> 63) >> 1 == 0x00)
		return;
	<anonymous> * r1_n = g_ptr2050;
	if (r1_n == null)
		return;
	r1_n();
}

// 00000000000006C8: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b2068 == 0x00)
	{
		if (g_b08D0 != g_b2028)
			__cxa_finalize();
		deregister_tm_clones();
		g_b2068 = 0x01;
	}
}

// 0000000000000720: void frame_dummy()
void frame_dummy()
{
	ptr64 fp;
	ci8 * r13_n = &g_b08D8;
	ptr64 r15_n = fp - 320;
	Eq_n v12_n = g_b08D8 > g_b1E18;
	if (g_b08D8 == g_b1E18)
	{
l0000000000000740:
		Mem18 = Mem11;
		struct Eq_n * v9_n = r15_n + 264;
		r13_n = v9_n->ptr0000;
		r15_n = v9_n->ptr0010;
		if (v12_n)
		{
			register_tm_clones();
			return;
		}
	}
	<anonymous> * r1_n = g_ptr2048;
	v12_n = r1_n > null;
	if (r1_n != null)
	{
		r1_n();
		Eq_n CC_n;
		v12_n = CC_n;
	}
	goto l0000000000000740;
}

// 0000000000000768: Register Eq_n fib(Register Eq_n r2, Register out ptr64 r10Out, Register out ptr64 r11Out)
// Called from:
//      fib
//      main
Eq_n fib(Eq_n r2, ptr64 & r10Out, ptr64 & r11Out)
{
	word64 r10_n;
	ptr64 fp;
	struct Eq_n * r11_n = fp - 328;
	word32 dwLocA4_n = (word32) r2;
	Eq_n r1_n;
	if (r2 <= 0x01)
		r1_n = r2;
	else
	{
		word64 r10_n;
		struct Eq_n * r11_n;
		fib((int64) (dwLocA4_n - 1), out r10_n, out r11_n);
		word64 r2_n = fib((int64) (r11_n->dw00A4 - 2), out r10_n, out r11_n);
		r1_n = SEQ(SLICE(r2_n, word32, 32), (int32) (r2_n + r10_n));
	}
	ptr64 v29_n = (char *) r11_n + 0x00F8;
	int64 r1_n = (int64) (word32) r1_n;
	r11_n->ptr0118();
	ptr64 r10_n;
	r10Out = r10_n;
	ptr64 r11_n;
	r11Out = r11_n;
	Eq_n r2_n;
	return r2_n;
}

// 00000000000007E0: void main(Register word64 r3)
void main(word64 r3)
{
	struct Eq_n * r11_n;
	word64 r10_n;
	int64 r1_n = (int64) (word32) fib(0x0A, out r10_n, out r11_n);
	r11_n->ptr0120();
}

// 0000000000000820: void __libc_csu_init(Register word64 r2, Register word64 r3, Register word64 r4, Register word64 r6, Register word64 r7, Register word64 r11, Register word64 r13)
void __libc_csu_init(word64 r2, word64 r3, word64 r4, word64 r6, word64 r7, word64 r11, word64 r13)
{
	word64 r13_n;
	word64 r12_n;
	word64 r10_n;
	word64 r9_n;
	word64 r8_n;
	ptr64 fp;
	int64 r11_n = 0x1E10 - &g_ptr1E08;
	struct Eq_n * r15_n = fp - 320;
	word64 r6_n = _init(r6, r7, r4, r3, r2, r11, r13, out r8_n, out r9_n, out r10_n, out r12_n, out r13_n);
	int64 r11_n = r11_n >> 3;
	if (r11_n >> 3 != 0x00)
	{
		<anonymous> ** r7_n = &g_ptr1E08;
		word64 r11_n;
		do
		{
			(*r7_n)();
			r11_n = r11_n - 1;
		} while (r11_n != 0x01);
	}
	ptr64 v18_n = (char *) r15_n + 0x00D8;
	<anonymous> * r4_n = r15_n->ptr0110;
	r4_n();
}

// 0000000000000888: void __libc_csu_fini()
void __libc_csu_fini()
{
}

