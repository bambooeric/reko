// test_text.c
// Generated by decompiling test
// using Reko decompiler version 0.11.1.0.

#include "test.h"

// 00000610: void __start(Register word32 r2, Stack word32 dwArg00)
void __start(word32 r2, word32 dwArg00)
{
	Eq_n fp;
	word32 r4_n = *(word32 *) 133736;
	struct Eq_n * sp_n = (fp & -8) + -32;
	word32 r7_n = *(word32 *) 133732;
	word32 r8_n = *(word32 *) 0x00020A60;
	sp_n->dw0010 = r8_n;
	sp_n->dw0014 = r2;
	sp_n->ptr0018 = sp_n;
	(*(<anonymous> **) 0x00020A24)();
	while (true)
		;
}

// 00000670: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (g_dw10AA4 == 68228)
		return;
	<anonymous> * r25_n = g_ptr10AE4;
	if (r25_n == null)
		return;
	r25_n();
}

// 000006A8: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	Eq_n r5_n = g_dw10AA4 - 68228 >> 0x02;
	if ((r5_n >>u 0x1F) + r5_n >> 0x01 == 0x00)
		return;
	<anonymous> * r25_n = g_ptr10AD4;
	if (r25_n == null)
		return;
	r25_n();
}

// 000006F4: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b10AF0 == 0x00)
	{
		if (__cxa_finalize != 0x00)
		{
			word32 * r2_n = g_ptr10AAC;
			__cxa_finalize(*r2_n);
		}
		Eq_n r2_n = dtor_idx.6258;
		Eq_n r16_n = (g_dw10AB0 - 68200 >> 0x02) + -1;
		while ((word32) (r2_n < r16_n) != 0x00)
		{
			Eq_n r2_n = (word32) r2_n + 1;
			dtor_idx.6258 = r2_n;
			<anonymous> ** r2_n = (r2_n << 0x02) + 68200;
			word32 r4_n;
			(*r2_n)();
			r2_n = dtor_idx.6258;
		}
		deregister_tm_clones();
		g_b10AF0 = 0x01;
	}
}

// 000007D4: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 000007F0: void main()
void main()
{
	ptr32 fp;
	word32 dwLoc14;
	byte bLoc10;
	memset(&dwLoc14, 0x00, (size_t) 5);
	struct Eq_n * r2_n = calloc((size_t) 1, (size_t) 5);
	r2_n->t0000.u1 = dwLoc14;
	r2_n->b0004 = bLoc10;
	r2_n->t0000.u0 = 0x0C;
	r2_n->dw0001 = 0x00;
	dwLoc14 = (word32) 66;
	dwLoc14.ptr0001 = r2_n;
	r30_n = fp + -48;
	r2_n = r2_n;
	r2_n = r2_n;
	r2_n = r2_n;
}

// 000008C0: void __libc_csu_init(Register word32 r4, Register word32 r5, Register word32 r6)
void __libc_csu_init(word32 r4, word32 r5, word32 r6)
{
	_init();
	<anonymous> ** r16_n = g_ptr10ABC;
	int32 r18_n = g_ptr10ABC - r16_n;
	if (r18_n >> 0x02 != 0x00)
	{
		int32 r17_n = 0x00;
		while (true)
		{
			(*r16_n)();
			++r17_n;
			if (r18_n >> 0x02 == r17_n)
				break;
			r16_n = (<anonymous> **) ((char *) r16_n + 4);
		}
	}
}

// 00000964: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 00000970: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * r25_n = g_ptr10A60;
	if (r25_n != (<anonymous> *) -1)
	{
		word32 * r16_n = &g_ptr10A60;
		do
		{
			r25_n();
			r16_n += -1;
			r25_n = *r16_n;
		} while (r25_n != (<anonymous> *) -1);
	}
}

