// STRLEN_code.c
// Generated by decompiling STRLEN
// using Reko decompiler version 0.11.5.0.

#include "STRLEN.h"

// 00001000: void fn00001000(Register int32 d0, Register (ptr32 byte) a0)
void fn00001000(int32 d0, byte * a0)
{
	struct Eq_n * fp;
	int32 dwLoc10;
	struct Eq_n * a6_n = *(struct Eq_n **) 0x04;
	int32 d2_n = d0;
	byte * a2_n = a0;
	if (a6_n->w0014 < 0x24)
	{
		word32 * a0_n = &g_ptr13C8;
		word32 d0_n;
		for (d0_n = 0x0C; d0_n != 0x00; --d0_n)
		{
			*a0_n = 0x00;
			++a0_n;
		}
	}
	g_ptr13C8 = fp;
	g_ptr13CC = a6_n;
	struct Eq_n * d0_n = FindTask(0x00);
	word32 d0_n = OpenLibrary(0x12BC, 0);
	if (d0_n != 0x00)
	{
		int32 d4_n;
		g_dw13D0 = d0_n;
		if (d0_n->dw00AC == 0x00)
		{
			d4_n = 2;
			d2_n = 8;
		}
		else
		{
			byte * a0_n = a0;
			d4_n = 3;
			do
			{
				if (*a0_n == 0x20)
					d4_n = SEQ(SLICE(d4_n, word16, 16), (word16) d4_n + 0x01);
				a0_n = a0_n + 1;
				a0_n = a0_n;
			} while (*a0_n != 0x00);
		}
		int32 d0_n = d4_n << 0x02;
		ui32 d0_n = d0_n + d2_n;
		int32 d1_n = 0x00010001;
		struct Eq_n * d0_n = AllocMem(d0_n + 0x11, 0x00010001);
		if (d0_n != null)
		{
			struct Eq_n * dwLoc0C_n;
			word32 a0_n;
			d0_n->dw0000 = d0_n + 0x11;
			d0_n->dw000C = d4_n - 0x01;
			d0_n->ptr0008 = (char *) &d0_n->ptr0010 + d0_n;
			null = null;
			ui32 d0_n = d0_n->dw00AC;
			if (d0_n == 0x00)
			{
				struct Eq_n * d0_n = fn00001214(d0_n);
				g_ptr13D4 = d0_n;
				g_ptr13D8 = d0_n;
				null = null;
				dwLoc0C_n = d0_n;
				if (d0_n->dw0024 != 0x00)
					Enable();
				ui32 d0_n = Supervisor(d0_n);
				d0_n->dw0004 = d0_n;
				if (d0_n == 0x00)
				{
					fn0000127C();
					return;
				}
				g_dw13DC = d0_n;
				*(ui32 *) 5088 = d0_n;
				*(ui32 *) 0x13E4 = d0_n;
				d0_n->dw009C = d0_n;
				d0_n->dw00A0 = d0_n;
				word32 d0_n = ((word32[]) 8)[d0_n];
				if (d0_n != 0x00)
					d0_n->dw00A4 = d0_n;
l000011F8:
				a0_n = d0_n->dw003A;
				goto l00001202;
			}
			ui32 d0_n = ((ui32[]) 16)[d0_n];
			byte * a1_n = d0_n->ptr0008;
			byte a0_n[] = (d0_n << 0x02) + 1;
			a0_n[(uint32) null[d0_n].b0000] = 0x00;
			d0_n->ptr0010 = a0_n;
			word32 * a6_n = (char *) &d0_n->ptr0010 + 4;
			int32 d3_n = 1;
			struct Eq_n * a0_n = a0 + d2_n;
			do
			{
				--a0_n;
				if (a0_n->b0000 > 0x20)
					break;
				word16 v30_n = (word16) d2_n;
				d2_n = SEQ(SLICE(d2_n, word16, 16), v30_n - 1);
			} while (v30_n != 0x00);
			a0_n[1] = (struct Eq_n) 0x00;
			do
			{
l000010E6:
				byte v32_n = *a2_n;
				++a2_n;
				d1_n = SEQ(SLICE(d1_n, word24, 8), v32_n);
				if (v32_n == 0x00)
					goto l00001148;
			} while (v32_n == 0x20 || v32_n == 0x09);
			if (d3_n != d0_n->dw000C)
			{
				*a6_n = a1_n;
				++a6_n;
				d3_n = SEQ(SLICE(d3_n, word16, 16), (word16) d3_n + 0x01);
				if (v32_n != 0x22)
				{
					*a1_n = v32_n;
					++a1_n;
					while (true)
					{
						byte v41_n = *a2_n;
						++a2_n;
						d1_n = SEQ(SLICE(d1_n, word24, 8), v41_n);
						if (v41_n == 0x00)
							break;
						if (v41_n == 0x20)
							goto l00001116;
						*a1_n = v41_n;
						++a1_n;
					}
				}
				else
				{
					while (true)
					{
						byte v51_n = *a2_n;
						word24 v52_n = SLICE(d1_n, word24, 8);
						++a2_n;
						d1_n = SEQ(v52_n, v51_n);
						if (v51_n == 0x00)
							break;
						if (v51_n == 0x22)
						{
l00001116:
							*a1_n = 0x00;
							++a1_n;
							goto l000010E6;
						}
						if (v51_n == 0x2A)
						{
							byte v55_n = *a2_n;
							++a2_n;
							d1_n = SEQ(v52_n, v55_n);
							if ((v55_n & 223) == 0x4E)
								d1_n = 0x0A;
							else if ((v55_n & 223) == 0x45)
								d1_n = 27;
						}
						*a1_n = (byte) d1_n;
						++a1_n;
					}
				}
			}
l00001148:
			*a1_n = 0x00;
			*a6_n = 0x00;
			g_dw13DC = execPrivate4();
			ui32 d0_n = execPrivate5();
			*(ui32 *) 5088 = d0_n;
			dwLoc0C_n = (struct Eq_n *) &d0_n->ptr0010;
			dwLoc10 = d3_n;
			if (g_ptr13CC->w0014 >= 0x24)
			{
				ui32 v65_n = d0_n->dw00E0;
				*(ui32 *) 0x13E4 = v65_n;
				if (v65_n != 0x00)
				{
l0000117E:
					if (d0_n->b0008 == 0x0D)
					{
						word32 * a0_n = d0_n->ptr00B0;
						a0_n = a0_n + 1 - *a0_n;
l00001202:
						*(word32 *) 0x13F0 = a0_n;
						*(ptr32 *) 0x13F4 = fp - 16;
						fn00001354(dwLoc10, dwLoc0C_n);
						fn0000127C();
						return;
					}
					goto l000011F8;
				}
			}
			*(ui32 *) 0x13E4 = d0_n;
			goto l0000117E;
		}
		CloseLibrary(g_dw13D0);
		Alert(0x00010000);
	}
	else
		Alert(0x00038007);
	if (d0_n->dw00AC == 0x00)
		fn0000126C(fn00001214(d0_n));
}

// 00001214: Register word32 fn00001214(Register (ptr32 Eq_n) a3)
// Called from:
//      fn00001000
word32 fn00001214(struct Eq_n * a3)
{
	WaitPort((char *) &a3->dw003A + 0x0022);
	return GetMsg((char *) &a3->dw003A + 0x0022);
}

// 0000126C: void fn0000126C(Register (ptr32 Eq_n) a2)
// Called from:
//      fn00001000
void fn0000126C(struct Eq_n * a2)
{
	Forbid();
	ReplyMsg(a2);
}

// 00001278: void fn00001278(Stack word32 dwArg04)
// Called from:
//      fn000012D0
void fn00001278(word32 dwArg04)
{
	fn0000127C();
}

// 0000127C: void fn0000127C()
// Called from:
//      fn00001000
//      fn00001278
void fn0000127C()
{
	struct Eq_n * a7_n = g_ptr13C8;
	struct Eq_n * v8_n = a7_n->ptrFFFFFFFC;
	struct Eq_n * v6_n = a7_n->ptrFFFFFFF8;
	if (v8_n->dw0004 != 0x00)
		execPrivate1();
	CloseLibrary(g_dw13D0);
	if (v6_n != null)
		fn0000126C(v6_n);
	FreeMem(v8_n, v8_n->dw0000);
}

// 000012D0: void fn000012D0(Stack word32 dwArg04)
// Called from:
//      fn0000131C
void fn000012D0(word32 dwArg04)
{
	if (true)
	{
		int32 d2_n = 1;
		if (*(word32 *) 0x1408 != 0x00)
		{
			do
				++d2_n;
			while (((<anonymous> *[]) 0x1404)[d2_n] != null);
		}
		int32 d2_n;
		for (d2_n = d2_n - 0x01; d2_n != 0x00; --d2_n)
			((<anonymous> *[]) 0x1404)[d2_n]();
	}
	fn00001278(dwArg04);
}

// 0000131C: void fn0000131C(Stack word32 dwArg04)
// Called from:
//      fn00001354
void fn0000131C(word32 dwArg04)
{
	if (*(int32 *) 5112 == 0x00)
	{
		struct Eq_n * a3_n;
		*(int32 *) 5112 = 1;
		for (a3_n = *(struct Eq_n **) 0x140C; a3_n != null; a3_n = a3_n->ptr0000)
			a3_n->ptr0004();
		fn000012D0(dwArg04);
	}
}

// 00001354: void fn00001354(Stack int32 dwArg04, Stack (ptr32 Eq_n) dwArg08)
// Called from:
//      fn00001000
void fn00001354(int32 dwArg04, struct Eq_n * dwArg08)
{
	<anonymous> ** a3_n = (<anonymous> **) 0x1400;
	if (true && *((<anonymous> **) 0x1400) != 0x00)
	{
		do
		{
			(*a3_n)();
			a3_n = (<anonymous> **) ((char *) a3_n + 4);
		} while (*a3_n != null);
	}
	fn0000131C(fn00001390());
}

// 00001390: Register word32 fn00001390()
// Called from:
//      fn00001354
word32 fn00001390()
{
	return fn000013AC(&g_b13A4);
}

byte g_b13A4 = 116; // 000013A4
// 000013AC: Register int32 fn000013AC(Stack (ptr32 byte) dwArg04)
// Called from:
//      fn00001390
int32 fn000013AC(byte * dwArg04)
{
	byte * a1_n = dwArg04;
	int32 d0_n = 0;
	while (true)
	{
		++a1_n;
		if (*a1_n == 0x00)
			break;
		++d0_n;
	}
	return d0_n;
}

struct Eq_n * g_ptr13C8 = null; // 000013C8
struct Eq_n * g_ptr13CC = null; // 000013CC
word32 g_dw13D0 = 0x00; // 000013D0
struct Eq_n * g_ptr13D4 = null; // 000013D4
struct Eq_n * g_ptr13D8 = null; // 000013D8
ui32 g_dw13DC = 0x00; // 000013DC
