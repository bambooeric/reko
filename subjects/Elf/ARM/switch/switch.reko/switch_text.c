// switch_text.c
// Generated by decompiling switch
// using Reko decompiler version 0.11.4.0.

#include "switch.h"

// 00008334: void _start(Stack int32 dwArg00, Stack (ptr32 char) ptrArg04, Stack (ptr32 Eq_n) ptrArg08, Stack (ptr32 Eq_n) ptrArg0C, Stack (ptr32 void) ptrArg10)
void _start(int32 dwArg00, char * ptrArg04, void (* ptrArg08)(), void (* ptrArg0C)(), void * ptrArg10)
{
	__libc_start_main(g_ptr8364, dwArg00, &ptrArg04, g_ptr8368, ptrArg08, ptrArg0C, ptrArg10);
	abort();
}

int32 (* g_ptr8364)(int32 r0, char ** r1, char ** r2) = main; // 00008364
void (* g_ptr8368)() = __libc_csu_init; // 00008368
// 0000836C: Register word32 call_gmon_start()
// Called from:
//      _init
word32 call_gmon_start()
{
	word32 r10;
	ptr32 r10_n = 0x8380 + g_dw8394;
	<anonymous> * r3_n = *((word32) r10_n + g_dw8398);
	if (r3_n == null)
		return r10;
	word32 r10_n;
	word32 pc_n;
	r3_n();
	return r10_n;
}

int32 g_dw8394 = 0x000084C8; // 00008394
int32 g_dw8398 = 20; // 00008398
// 0000839C: void __do_global_dtors_aux()
// Called from:
//      _fini
void __do_global_dtors_aux()
{
	byte * r5_n = g_ptr83F4;
	if ((word32) *r5_n != 0x00)
		return;
	<anonymous> *** r4_n = g_ptr83F8;
	<anonymous> * r2_n = **r4_n;
	if (r2_n == null)
		*r5_n = 0x01;
	else
	{
		<anonymous> ** r3_n = *r4_n;
		*r4_n = (<anonymous> ***) ((char *) r3_n + 4);
		word32 pc_n;
		word32 r2_n;
		r2_n();
	}
}

byte * g_ptr83F4 = &g_b10870; // 000083F4
<anonymous> *** g_ptr83F8 = &g_ptr10764; // 000083F8
// 000083FC: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
}

// 00008404: void frame_dummy()
// Called from:
//      _init
void frame_dummy()
{
	if (*g_ptr8424 == 0x00)
		return;
	if (g_dw8428 == 0x00)
		return;
	fn00000000();
}

word32 * g_ptr8424 = &g_dw10844; // 00008424
word32 g_dw8428 = 0x00; // 00008428
// 0000842C: void call_frame_dummy()
void call_frame_dummy()
{
}

// 00008434: Register Eq_n frobulate(Register Eq_n r0, Stack Eq_n dwArg00)
// Called from:
//      bazulate
//      switcheroo
Eq_n frobulate(Eq_n r0, Eq_n dwArg00)
{
	__divsi3(r0 * r0, 1337);
	return dwArg00;
}

// 00008470: Register word32 bazulate(Register Eq_n r0, Register Eq_n r1)
// Called from:
//      switcheroo
word32 bazulate(Eq_n r0, Eq_n r1)
{
	struct Eq_n * fp_n = frobulate(r0, r1);
	word32 r0_n = __divsi3(r0 + r1, r0);
	union Eq_n * sp_n = (union Eq_n *) <invalid>;
	Eq_n r0_n = fp_n->tFFFFFFE8.u0;
	struct Eq_n * fp_n = frobulate(r0_n, sp_n->u0);
	__divsi3(r0_n, r0_n);
	return fp_n->dw0000;
}

// 000084D4: Register word32 switcheroo(Register Eq_n r0)
// Called from:
//      main
word32 switcheroo(Eq_n r0)
{
	struct Eq_n * fp_n;
	if (r0 <= 0x06)
	{
		switch (r0)
		{
		case 0x00:
		case 0x01:
		case 0x02:
			fp_n = frobulate(r0, r0);
			break;
		case 0x03:
		case 0x05:
			goto l00008540;
		case 0x04:
			fp_n = frobulate(r0 - 0x03, r0);
			break;
		case 0x06:
			bazulate(r0, r0);
			goto l00008540;
		}
	}
	else
	{
l00008540:
		fp_n = bazulate(0x00, 0x00);
	}
	return fp_n->dw0004;
}

// 0000855C: void main(Register Eq_n r0)
void main(Eq_n r0)
{
	switcheroo(r0);
}

// 00008588: Register Eq_n __divsi3(Register Eq_n r0, Register Eq_n r1)
// Called from:
//      frobulate
//      bazulate
Eq_n __divsi3(Eq_n r0, Eq_n r1)
{
	Eq_n r1_n;
	int32 ip_n = r0 ^ r1;
	Eq_n r3_n = 0x01;
	Eq_n r2_n = 0x00;
	r1_n = r1;
	if (r1 < 0x00)
		r1_n = 0x00 - r1;
	if (r1 == 0x00)
	{
		__div0(r0);
		return 0x00;
	}
	else
	{
		if (r0 < 0x00)
			r0 = 0x00 - r0;
		if (r0 >= r1_n)
		{
			do
			{
				bool v21_n = r1_n < 0x10000000;
				bool v18_n = r1_n >= 0x10000000;
				if (r1_n < 0x10000000)
				{
					v21_n = r1_n < r0;
					v18_n = r1_n >= r0;
				}
				if (!v18_n)
				{
					r1_n <<= 4;
					r3_n <<= 4;
				}
			} while (v21_n);
			do
			{
				bool v27_n = r1_n < 0x80000000;
				bool v24_n = r1_n >= 0x80000000;
				if (r1_n < 0x80000000)
				{
					v27_n = r1_n < r0;
					v24_n = r1_n >= r0;
				}
				if (!v24_n)
				{
					r1_n <<= 1;
					r3_n <<= 1;
				}
			} while (v27_n);
			do
			{
				if (r0 >= r1_n)
				{
					r0 -= r1_n;
					r2_n |= r3_n;
				}
				if (r0 >= r1_n >> 1)
				{
					r0 -= r1_n >> 1;
					r2_n |= r3_n >> 1;
				}
				if (r0 >= r1_n >> 2)
				{
					r0 -= r1_n >> 2;
					r2_n |= r3_n >> 2;
				}
				if (r0 >= r1_n >> 3)
				{
					r0 -= r1_n >> 3;
					r2_n |= r3_n >> 3;
				}
				bool v33_n = r0 != 0x00;
				bool v30_n = r0 == 0x00;
				if (r0 != 0x00)
				{
					r3_n >>= 4;
					v33_n = r3_n != 0x00;
					v30_n = r3_n == 0x00;
				}
				if (!v30_n)
					r1_n >>= 4;
			} while (v33_n);
		}
		Eq_n r0_n = r2_n;
		if (ip_n < 0x00)
			r0_n = 0x00 - r2_n;
		return r0_n;
	}
}

// 00008638: void __div0(Register Eq_n r0)
// Called from:
//      __divsi3
void __div0(Eq_n r0)
{
	__syscall<word32>(0x00900014);
	if (r0 >= 1000)
		return;
	__syscall<word32>(0x00900025);
}

// 00008654: void __libc_csu_init()
void __libc_csu_init()
{
	ptr32 r10_n;
	Eq_n r4_n = _init(out r10_n);
	<anonymous> * r1_n[] = *((word32) r10_n + g_dw86A8);
	int32 r3_n = *((word32) r10_n + g_dw86AC) - r1_n;
	if (r4_n >= r3_n >> 2)
		return;
	r1_n[r4_n]();
}

int32 g_dw86A8 = 24; // 000086A8
int32 g_dw86AC = 28; // 000086AC
// 000086B0: void __libc_csu_fini()
void __libc_csu_fini()
{
	ptr32 r10_n = 0x86C8 + g_dw8700;
	<anonymous> * r1_n[] = *((word32) r10_n + g_dw8704);
	int32 r3_n = *((word32) r10_n + g_dw8708) - r1_n;
	int32 r4_n = (r3_n >> 2) - 0x01;
	if (r3_n >> 2 == 0x00)
		_fini();
	else
		r1_n[r4_n]();
}

int32 g_dw8700 = 0x00008180; // 00008700
int32 g_dw8704 = 32; // 00008704
int32 g_dw8708 = 36; // 00008708
// 0000870C: Register word32 __do_global_ctors_aux()
// Called from:
//      _init
word32 __do_global_ctors_aux()
{
	word32 r4;
	struct Eq_n * r3_n = g_ptr8740;
	<anonymous> * r2_n = r3_n->ptrFFFFFFFC;
	if (r2_n == (<anonymous> *) 0x01)
		return r4;
	word32 r4_n;
	word32 r3_n;
	word32 pc_n;
	r2_n();
	return r4_n;
}

struct Eq_n * g_ptr8740 = &g_t10838; // 00008740
// 00008744: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
}

