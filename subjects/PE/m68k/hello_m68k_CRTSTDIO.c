// hello_m68k_CRTSTDIO.c
// Generated by decompiling hello_m68k.exe
// using Reko decompiler version 0.11.4.0.

#include "hello_m68k.h"

// 000015E8: void fn000015E8(Register word32 d3, Register word32 a2, Register ptr32 a5, Register word32 a6, Stack word32 dwArg04)
void fn000015E8(word32 d3, word32 a2, ptr32 a5, word32 a6, word32 dwArg04)
{
	ptr32 fp;
	ptr32 * a7_n;
	word32 a6_n;
	word32 d0_n;
	struct Eq_n * a5_n;
	struct Eq_n * a2_n;
	(*((word32) a5 + 0x0082))();
	if (d0_n == 0x00)
		return;
	int32 d3_n;
	if (a2_n == a5_n->aFFFFF578 + 0x0A)
		d3_n = 0;
	else
	{
		if (a2_n != a5_n->aFFFFF578 + 18)
			return;
		d3_n = 1;
	}
	++a5_n->dwFFFFFAA8;
	if ((a2_n->w000C & 0x010C) != 0x00)
		return;
	if (a5_n->aFFFFF578[d3_n] == 0x00)
	{
		*a7_n = 0x0200;
		word32 d0_n;
		(*((char *) &a5_n->dwFFFFFAA8 + 0x05CA))();
		a5_n->aFFFFF578[d3_n] = d0_n;
		if (d0_n == 0x00)
			return;
	}
	word32 d0_n = a5_n->aFFFFF578[d3_n];
	a2_n->dw0008 = d0_n;
	a2_n->dw0000 = d0_n;
	a2_n->dw0018 = 0x0200;
	a2_n->dw0004 = 0x0200;
	a2_n->w000E |= 0x1102;
}

// 00001680: void fn00001680(Register (ptr32 Eq_n) a5, Stack word32 dwArg04, Stack (ptr32 Eq_n) dwArg08)
void fn00001680(struct Eq_n * a5, word32 dwArg04, struct Eq_n * dwArg08)
{
	if (dwArg04 == 0x00)
	{
		if (!__btst<byte>(dwArg08->b000E, 0x04))
		{
			word32 d3_n;
			word32 d4_n;
			word32 a2_n;
			word32 a5_n;
			word32 a6_n;
			fn00001D80(a5, dwArg08, out d3_n, out d4_n, out a2_n, out a5_n, out a6_n);
		}
	}
	else
	{
		if (__btst<byte>(dwArg08->b000E, 0x04))
			return;
		struct Eq_n * a2_n;
		word32 d3_n;
		word32 d4_n;
		word32 a5_n;
		word32 a6_n;
		fn00001D80(a5, dwArg08, out d3_n, out d4_n, out a2_n, out a5_n, out a6_n);
		a2_n->w000E &= ~0x1100;
		a2_n->dw0018 = 0;
		a2_n->dw0000 = 0;
		a2_n->dw0008 = 0;
	}
}

// 000016D0: void fn000016D0(Register word32 d6, Register (ptr32 Eq_n) a5, Stack (ptr32 byte) dwArg08)
void fn000016D0(word32 d6, struct Eq_n * a5, byte * dwArg08)
{
	ptr32 fp;
	word32 dwLoc10;
	word32 dwLoc14;
	word32 dwLoc18;
	word32 dwLoc1C;
	word32 dwLoc20;
	byte v18_n = *dwArg08;
	Eq_n dwLoc0C_n = 0;
	uip32 d6_n = SEQ(SLICE(d6, word24, 8), v18_n);
	byte * dwArg08_n = dwArg08 + 1;
	if (v18_n != 0x00)
	{
		while (true)
		{
			int32 d0_n;
			if ((byte) d6_n >= 0x20 && (byte) d6_n <= 0x78)
				d0_n = (int32) (a5->aFFFFF7E8[(int32) (byte) d6_n] & 0x0F);
			else
				d0_n = 0;
			word32 d0_n = CONVERT((a5 + -2040 + dwLoc0C_n)[d0_n * 0x08] >> 0x04, byte, int32);
			dwLoc0C_n = d0_n;
			if (d0_n <= 7)
			{
				word16 v41_n = g_a1758[(int32) (int16) d0_n * 2];
				word32 d2_n;
				g_a1758[(int32) v41_n]();
				return;
			}
			byte v43_n = *dwArg08_n;
			d6_n = SEQ(SLICE(d6_n, word24, 8), v43_n);
			++dwArg08_n;
			if (v43_n == 0x00)
				return;
		}
	}
}

word16 g_a1758[] = // 00001758
	{
	};
// 00001C40: Register (ptr32 Eq_n) fn00001C40(Register (ptr32 Eq_n) a5, Stack byte bArg04, Stack (ptr32 Eq_n) dwArg08, Register out Eq_n d4Out, Register out Eq_n d5Out, Register out Eq_n a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00001C84
//      fn00001CC4
struct Eq_n * fn00001C40(struct Eq_n * a5, byte bArg04, struct Eq_n * dwArg08, union Eq_n & d4Out, union Eq_n & d5Out, union Eq_n & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	word32 dwArg04;
	byte bArg07_n = (byte) dwArg04;
	int32 d0_n;
	int32 v6_n = dwArg08->dw0004 - 0x01;
	dwArg08->dw0004 = v6_n;
	struct Eq_n * a6_n = fp - 0x04;
	if (v6_n >= 0x00)
	{
		*dwArg08->ptr0000 = bArg07_n;
		byte * a0_n = dwArg08->ptr0000;
		d0_n = (int32) (int16) *a0_n;
		dwArg08->ptr0000 = a0_n + 1;
	}
	else
	{
		word32 a5_n;
		word32 d3_n;
		word32 d4_n;
		word32 d5_n;
		d0_n = fn00001E94(a5, dwArg08, out d3_n, out d4_n, out d5_n, out a5_n, out a6_n);
	}
	int32 * a0_n = a6_n->ptr0010;
	if (d0_n != -1)
	{
		++*a0_n;
		ptr32 a6_n = a6_n->ptr0000;
		d4Out.u1 = <invalid>;
		d5Out.u1 = <invalid>;
		a5Out.u1 = <invalid>;
		a6Out = a6_n;
		return (struct Eq_n *) <invalid>;
	}
	else
	{
		*a0_n = d0_n;
		ptr32 a6_n = a6_n->ptr0000;
		d4Out.u1 = <invalid>;
		d5Out.u1 = <invalid>;
		a5Out.u1 = <invalid>;
		a6Out = a6_n;
		return (struct Eq_n *) <invalid>;
	}
}

// 00001C84: void fn00001C84(Register (ptr32 Eq_n) a5, Stack (ptr32 byte) dwArg04, Stack int32 dwArg08, Stack (ptr32 Eq_n) dwArg0C, Stack word32 dwArg10)
void fn00001C84(struct Eq_n * a5, byte * dwArg04, int32 dwArg08, struct Eq_n * dwArg0C, word32 dwArg10)
{
	ptr32 fp;
	ptr32 a7_n = fp - 0x14;
	if (dwArg08 > 0x00)
	{
		byte * d3_n = dwArg04;
		struct Eq_n * d4_n = dwArg0C;
		do
		{
			struct Eq_n * a7_n = a7_n - 4;
			a7_n->dw0000 = dwArg10;
			a7_n->ptrFFFFFFFC = d4_n;
			a7_n->ptrFFFFFFF8 = d3_n;
			struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
			int32 d5_n;
			word32 a6_n;
			d3_n = fn00001C40(a5, a7_n->b0008, a7_n->ptrFFFFFFFC, out d4_n, out d5_n, out a5, out a6_n);
			a7_n = &a7_n->t000C.u0;
		} while (d5_n > 0x00);
	}
}

// 00001CC4: void fn00001CC4(Register (ptr32 Eq_n) a5, Stack (ptr32 byte) dwArg04, Stack int32 dwArg08, Stack (ptr32 Eq_n) dwArg0C, Stack word32 dwArg10)
void fn00001CC4(struct Eq_n * a5, byte * dwArg04, int32 dwArg08, struct Eq_n * dwArg0C, word32 dwArg10)
{
	ptr32 fp;
	ptr32 a7_n = fp - 0x14;
	if (dwArg08 > 0x00)
	{
		byte * d3_n = dwArg04;
		struct Eq_n * d4_n = dwArg0C;
		do
		{
			struct Eq_n * a7_n = a7_n - 4;
			a7_n->dw0000 = dwArg10;
			a7_n->ptrFFFFFFFC = d4_n;
			a7_n->dwFFFFFFF8 = (int32) *d3_n;
			struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
			int32 d5_n;
			word32 a6_n;
			d3_n = fn00001C40(a5, a7_n->b0008, a7_n->ptrFFFFFFFC, out d4_n, out d5_n, out a5, out a6_n);
			a7_n = &a7_n->t000C.u0;
		} while (d5_n > 0x00);
	}
}

// 00001D0C: void fn00001D0C(Stack (ptr32 word32) dwArg04)
void fn00001D0C(word32 * dwArg04)
{
	*dwArg04 += 4;
}

// 00001D24: Register int32 fn00001D24(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Register out ptr32 d3Out, Register out Eq_n d4Out, Register out Eq_n d5Out, Register out Eq_n d6Out, Register out Eq_n d7Out, Register out Eq_n a2Out, Register out (ptr32 Eq_n) a5Out, Register out (ptr32 ptr32) a6Out)
// Called from:
//      fn00001E04
int32 fn00001D24(struct Eq_n * a5, struct Eq_n * dwArg04, ptr32 & d3Out, union Eq_n & d4Out, union Eq_n & d5Out, union Eq_n & d6Out, union Eq_n & d7Out, union Eq_n & a2Out, struct Eq_n & a5Out, ptr32 & a6Out)
{
	Eq_n a2;
	if (dwArg04 != null)
	{
		struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
		struct Eq_n * a2_n;
		Eq_n d4_n;
		struct Eq_n * a5_n;
		ptr32 ** a6_n;
		ptr32 d3_n;
		if (fn00001D80(a5, dwArg04, out d3_n, out d4_n, out a2_n, out a5_n, out a6_n) == 0x00)
		{
			if (__btst<byte>(a2_n->b000E, 0x06))
			{
				Eq_n a2_n = a7_n->t0004.u0;
				ptr32 * a6_n = *a6_n;
				d3Out = d3_n;
				d4Out = d4_n;
				d5Out.u1 = <invalid>;
				d6Out.u1 = <invalid>;
				d7Out.u1 = <invalid>;
				a2Out = a2_n;
				a5Out = a5_n;
				a6Out = a6_n;
				return 0;
			}
			else
			{
				a7_n->t0000.u0 = a2_n->t0010.u0;
				struct Eq_n * a7_n;
				ptr32 ** a6_n;
				word32 d0_n;
				struct Eq_n * a5_n;
				Eq_n d4_n;
				ptr32 d3_n;
				(*((char *) &a5_n->ptrFFFFF800 + 0x088A))();
				Eq_n a2_n = a7_n->t0004.u0;
				ptr32 * a6_n = *a6_n;
				d3Out = d3_n;
				d4Out = d4_n;
				d5Out.u1 = <invalid>;
				d6Out.u1 = <invalid>;
				d7Out.u1 = <invalid>;
				a2Out = a2_n;
				a5Out = a5_n;
				a6Out = a6_n;
				return (int32) (d0_n != 0x00 ? ~0x00 : 0x00);
			}
		}
		else
		{
			Eq_n a2_n = a7_n->t0004.u0;
			ptr32 * a6_n = *a6_n;
			d3Out = d3_n;
			d4Out = d4_n;
			d5Out.u1 = <invalid>;
			d6Out.u1 = <invalid>;
			d7Out.u1 = <invalid>;
			a2Out = a2_n;
			a5Out = a5_n;
			a6Out = a6_n;
			return -1;
		}
	}
	else
	{
		ptr32 ** a6_n;
		struct Eq_n * a5_n;
		Eq_n d4_n;
		ptr32 d3_n;
		int32 d0_n = fn00001E04(a5, 0, out d3_n, out d4_n, out a5_n, out a6_n);
		ptr32 * a6_n = *a6_n;
		d3Out = d3_n;
		d4Out = d4_n;
		d5Out.u1 = <invalid>;
		d6Out.u1 = <invalid>;
		d7Out.u1 = <invalid>;
		a2Out = a2;
		a5Out = a5_n;
		a6Out = a6_n;
		return d0_n;
	}
}

// 00001D80: Register int32 fn00001D80(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Register out ptr32 d3Out, Register out ptr32 d4Out, Register out ptr32 a2Out, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00001680
//      fn00001D24
//      fn00002068
int32 fn00001D80(struct Eq_n * a5, struct Eq_n * dwArg04, ptr32 & d3Out, ptr32 & d4Out, ptr32 & a2Out, struct Eq_n & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	Eq_n d1_n = dwArg04->t000C.u2;
	ptr32 * a6_n = fp - 0x04;
	ptr32 * a7_n = fp - 0x10;
	int32 d3_n = 0;
	struct Eq_n * a2_n = dwArg04;
	if ((d1_n & 3) == 2 && ((word16) d1_n & 0x0108) != 0x00)
	{
		Eq_n d0_n = dwArg04->t0008.u0;
		int32 d4_n = dwArg04->t0000.u0 - d0_n;
		if (d4_n > 0x00)
		{
			word32 a7_n;
			word32 d4_n;
			word32 d0_n;
			a5[0x0092]();
			a7_n = a7_n + 0x0C;
			if (d0_n == d4_n)
			{
				Eq_n d0_n = a2_n->t000C.u2;
				if (!__btst<byte>((byte) d0_n, 0x07))
				{
					Eq_n d0_n;
					__bclr<word32>(d0_n, 0x01, out d0_n);
					a2_n->t000C.u2 = (struct Eq_n *) d0_n;
				}
			}
			else
			{
				__bset<word16>(a2_n->t000F.u0, 0x05, out a2_n->t000F.u0);
				d3_n = -1;
			}
		}
	}
	a2_n->t0000.u0 = a2_n->t0008.u0;
	a2_n->t0004.u0 = 0;
	struct Eq_n * a7_n = a7_n + 1;
	ptr32 d4_n = a7_n->ptr0000;
	ptr32 a2_n = a7_n->ptr0004;
	ptr32 a6_n = *a6_n;
	d3Out = *a7_n;
	d4Out = d4_n;
	a2Out = a2_n;
	a5Out = a5;
	a6Out = a6_n;
	return d3_n;
}

// 00001DF4: void fn00001DF4(Register (ptr32 Eq_n) a5)
void fn00001DF4(struct Eq_n * a5)
{
	word32 d3_n;
	word32 d4_n;
	word32 a5_n;
	word32 a6_n;
	fn00001E04(a5, 1, out d3_n, out d4_n, out a5_n, out a6_n);
}

// 00001E04: Register int32 fn00001E04(Register (ptr32 Eq_n) a5, Stack int32 dwArg04, Register out ptr32 d3Out, Register out ptr32 d4Out, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00001D24
//      fn00001DF4
int32 fn00001E04(struct Eq_n * a5, int32 dwArg04, ptr32 & d3Out, ptr32 & d4Out, struct Eq_n & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	int32 d3_n;
	ptr32 * a6_n = fp - 0x04;
	struct Eq_n * a7_n = fp - 0x1C;
	int32 d6_n = 1;
	struct Eq_n * a2_n = (char *) a5 - 2688;
	int32 d4_n = 0;
	int32 d5_n = 0;
	if ((char *) a5 - 2688 <= a5->dwFFFFF800)
	{
		d3_n = dwArg04;
		do
		{
			if (d3_n == d6_n && (a2_n->w000C & 131) != 0x00)
			{
				a7_n->ptrFFFFFFFC = a2_n;
				// Failed to bind call argument.
				// Please report this issue at https://github.com/uxmal/reko
				struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
				struct Eq_n * stackArg4 = (struct Eq_n *) <invalid>;
				a7_n = (struct Eq_n *) &a7_n->t0004.u0;
				int32 d7_n;
				if (fn00001D24(a5, stackArg4, out d3_n, out d4_n, out d5_n, out d6_n, out d7_n, out a2_n, out a5, out a6_n) != d7_n)
					d4_n += d6_n;
			}
			else if (d3_n == 0x00 && !__btst<word32>(a2_n->dw000F, d6_n))
			{
				a7_n->ptrFFFFFFFC = a2_n;
				// Failed to bind call argument.
				// Please report this issue at https://github.com/uxmal/reko
				struct Eq_n * stackArg4 = (struct Eq_n *) <invalid>;
				struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
				int32 d7_n;
				int32 d0_n = fn00001D24(a5, stackArg4, out d3_n, out d4_n, out d5_n, out d6_n, out d7_n, out a2_n, out a5, out a6_n);
				a7_n = (struct Eq_n *) &a7_n->t0004.u0;
				if (d0_n == d7_n)
					d5_n = d0_n;
			}
			++a2_n;
		} while (a2_n <= a5->dwFFFFF800);
	}
	else
		d3_n = dwArg04;
	if (d3_n != 1)
		d4_n = d5_n;
	ptr32 d4_n = a7_n->ptr0004;
	ptr32 a6_n = *a6_n;
	d3Out = a7_n->ptr0000;
	d4Out = d4_n;
	a5Out = a5;
	a6Out = a6_n;
	return d4_n;
}

// 00001E94: Register int32 fn00001E94(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg08, Register out ptr32 d3Out, Register out ptr32 d4Out, Register out ptr32 d5Out, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00001C40
int32 fn00001E94(struct Eq_n * a5, struct Eq_n * dwArg08, ptr32 & d3Out, ptr32 & d4Out, ptr32 & d5Out, struct Eq_n & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	ptr32 a6;
	ptr32 d5;
	ptr32 d4;
	ptr32 d3;
	Eq_n d0_n = dwArg08->t000C.u2;
	struct Eq_n * a6_n = fp - 0x04;
	ptr32 * a7_n = fp - 0x1C;
	struct Eq_n * a3_n = dwArg08;
	int32 d3_n = dwArg08->dw0010;
	struct Eq_n * a2_n = &dwArg08->t000C.u0;
	if (((word16) d0_n & 0x82) != 0x00 && !__btst<byte>((byte) d0_n, 0x06))
	{
		if (__btst<byte>((byte) d0_n, 0x00))
		{
l00001EDA:
			Eq_n d0_n;
			__bset<word16>(dwArg08->t000C.u2, 0x01, out d0_n);
			dwArg08->t000C.u2 = (struct Eq_n *) d0_n;
			Eq_n d0_n;
			__bclr<word32>(d0_n, 0x04, out d0_n);
			dwArg08->t000C.u2 = (struct Eq_n *) d0_n;
			dwArg08->dw0004 = 0;
			int32 d4_n = 0;
			if ((dwArg08->t000C.u1 & 0x010C) == 0x00)
			{
				if (dwArg08 == (char *) a5 - 2656 || dwArg08 == (char *) a5 - 2624)
				{
					word32 a7_n;
					word32 d0_n;
					word32 a0_n;
					word32 d2_n;
					(*((char *) &a5->dwFFFFFAA8 + 0x05DA))();
					a7_n = a7_n + 4;
					if (d0_n != 0x00)
						goto l00001F1C;
				}
				struct Eq_n ** a7_n = a7_n - 4;
				*a7_n = (struct Eq_n **) a3_n;
				struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
				a2_n = fn00002014(a2_n, a5, a6_n, *a7_n, out a5, out a6_n);
				a7_n = &a7_n->t0004.u0;
			}
l00001F1C:
			int32 d5_n;
			if ((a2_n->dw0000 & 0x0108) != 0x00)
			{
				byte * d0_n = a3_n->ptr0008;
				d5_n = a3_n->ptr0000 - d0_n;
				a3_n->ptr0000 = d0_n + 1;
				a3_n->dw0004 = a3_n->dw0018 - 0x01;
				if (d5_n > 0x00)
				{
					struct Eq_n * a7_n = a7_n - 4;
					a7_n->dw0000 = d5_n;
					a7_n->ptrFFFFFFFC = a3_n->ptr0008;
					a7_n->dwFFFFFFF8 = d3_n;
					word32 a7_n;
					struct Eq_n * a3_n;
					int32 d0_n;
					word32 d2_n;
					(*((char *) &a5->dwFFFFFAA8 + 1514))();
					byte * a0_n = a3_n->ptr0008;
					*a0_n = a6_n->b000B;
					a7_n = a7_n + 0x0C;
					d4_n = d0_n;
				}
				else
				{
					if (!__btst<byte>(((char *) a5 - 0x06A8)[d3_n], 0x05))
					{
						struct Eq_n * a7_n = a7_n - 4;
						a7_n->dw0000 = 2;
						a7_n->dwFFFFFFFC = 0;
						a7_n->dwFFFFFFF8 = d3_n;
						word32 a7_n;
						word32 a0_n;
						(*((char *) &a5->dwFFFFFAA8 + 1522))();
						a7_n = a7_n + 0x0C;
					}
					*a3_n->ptr0008 = a6_n->b000B;
				}
			}
			else
			{
				a6_n->bFFFFFFFF = a6_n->b000B;
				struct Eq_n * a7_n = a7_n - 4;
				a7_n->dw0000 = 1;
				a7_n->ptrFFFFFFFC = &a6_n->bFFFFFFFF;
				a7_n->dwFFFFFFF8 = d3_n;
				word32 a7_n;
				int32 d0_n;
				word32 a0_n;
				word32 d2_n;
				(*((char *) &a5->dwFFFFFAA8 + 1514))();
				a7_n = a7_n + 0x0C;
				d4_n = d0_n;
			}
			if (d4_n == d5_n)
			{
				struct Eq_n * a7_n = a7_n + 1;
				int32 d0_n = a6_n->dw0008 & 0xFF;
				ptr32 d4_n = a7_n->ptr0000;
				ptr32 d5_n = a7_n->ptr0004;
				ptr32 a6_n = a6_n->ptr0000;
				d3Out = *a7_n;
				d4Out = d4_n;
				d5Out = d5_n;
				a5Out = a5;
				a6Out = a6_n;
				return d0_n;
			}
			else
			{
				__bset<word16>(a2_n->t0003.u0, 0x05, out a2_n->t0003.u0);
				struct Eq_n * a7_n = a7_n + 1;
				ptr32 d4_n = a7_n->ptr0000;
				ptr32 d5_n = a7_n->ptr0004;
				ptr32 a6_n = a6_n->ptr0000;
				d3Out = *a7_n;
				d4Out = d4_n;
				d5Out = d5_n;
				a5Out = a5;
				a6Out = a6_n;
				return -1;
			}
		}
		dwArg08->dw0004 = 0;
		&d0_n.u2->ptr0000 = dwArg08->t000C.u2;
		if (!__btst<byte>((byte) d0_n, 0x04))
		{
			dwArg08->ptr0000 = dwArg08->ptr0008;
			__bclr<byte>(dwArg08->b000F, 0x00, out dwArg08->b000F);
			goto l00001EDA;
		}
	}
	Eq_n d0_n;
	__bset<word16>(d0_n, 0x05, out d0_n);
	dwArg08->t000C.u2 = (struct Eq_n *) d0_n;
	d3Out = d3;
	d4Out = d4;
	d5Out = d5;
	a5Out = a5;
	a6Out = a6;
	return -1;
}

// 00001FD8: void fn00001FD8(Register (ptr32 Eq_n) a5)
void fn00001FD8(struct Eq_n * a5)
{
	ptr32 fp;
	ptr32 a7_n = fp - 0x14;
	Eq_n d3_n = 0;
	struct Eq_n * d4_n = (char *) a5 - 2592;
	if ((char *) a5 - 2592 <= a5->dwFFFFF800)
	{
		do
		{
			struct Eq_n ** a7_n = a7_n - 4;
			*a7_n = (struct Eq_n **) d4_n;
			struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
			a7_n = &a7_n->t0004.u0;
			up32 d4_n;
			word32 a6_n;
			if (fn00002068(d3_n, a5, *a7_n, out d3_n, out d4_n, out a5, out a6_n) != -1)
				d3_n = (word32) d3_n.u0 + 1;
			d4_n = d4_n + 32;
		} while (d4_n + 32 <= a5->dwFFFFF800);
	}
}

// 00002014: Register (ptr32 Eq_n) fn00002014(Register (ptr32 Eq_n) a2, Register (ptr32 Eq_n) a5, Register (ptr32 Eq_n) a6, Stack (ptr32 Eq_n) dwArg04, Register out ptr32 a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00001E94
struct Eq_n * fn00002014(struct Eq_n * a2, struct Eq_n * a5, struct Eq_n * a6, struct Eq_n * dwArg04, ptr32 & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	++a5->dwFFFFFAA8;
	struct Eq_n * a7_n;
	ptr32 * a6_n;
	struct Eq_n * a2_n;
	ptr32 a5_n;
	ptr32 d0_n;
	(*((char *) &a5->dwFFFFFAA8 + 0x05CA))();
	a2_n->ptr0008 = d0_n;
	if (d0_n != 0x00)
	{
		__bset<word16>(a2_n->t000F.u0, 0x03, out a2_n->t000F.u0);
		a2_n->dw0018 = 0x0200;
	}
	else
	{
		__bset<word16>(a2_n->t000F.u0, 0x02, out a2_n->t000F.u0);
		a2_n->ptr0008 = (char *) &a2_n->t000F + 5;
		a2_n->dw0018 = 1;
	}
	a2_n->ptr0000 = a2_n->ptr0008;
	a2_n->dw0004 = 0;
	struct Eq_n * a2_n = a7_n->ptr0004;
	ptr32 a6_n = *a6_n;
	a5Out = a5_n;
	a6Out = a6_n;
	return a2_n;
}

// 00002068: Register int32 fn00002068(Register Eq_n d3, Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Register out Eq_n d3Out, Register out ptr32 d4Out, Register out (ptr32 Eq_n) a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00001FD8
int32 fn00002068(Eq_n d3, struct Eq_n * a5, struct Eq_n * dwArg04, union Eq_n & d3Out, ptr32 & d4Out, struct Eq_n & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	ptr32 a6;
	ptr32 d4;
	Eq_n d0_n = dwArg04->t000C.u2;
	ptr32 * a6_n = fp - 0x04;
	struct Eq_n * a7_n = fp - 0x0C;
	int32 d3_n = -1;
	struct Eq_n * a2_n = dwArg04;
	if (__btst<byte>((byte) d0_n, 0x06))
	{
		if (((word16) d0_n & 131) != 0x00)
		{
			Eq_n a2_n;
			ptr32 a5_n;
			word32 d3_n;
			word32 d4_n;
			word32 a6_n;
			word32 d0_n = fn00001D80(a5, dwArg04, out d3_n, out d4_n, out a2_n, out a5_n, out a6_n);
			struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
			a7_n->t0000.u0 = (word32 *) a2_n;
			ptr32 a5_n;
			word32 a6_n;
			struct Eq_n * a2_n = fn000020F0(a5_n, a7_n->t0000.u0, out a5_n, out a6_n);
			struct Eq_n * a7_n = (struct Eq_n *) <invalid>;
			a7_n->t0000.u0 = a2_n->t0010.u0;
			int32 * a7_n;
			int32 d0_n;
			word32 d2_n;
			word32 d1_n;
			(*((word32) a5_n + 0x00A2))();
			a7_n = (struct Eq_n *) (a7_n + 1);
			if (d0_n < 0x00)
				d3_n = -1;
			else
			{
				int32 d0_n = a2_n->dw001C;
				if (d0_n != 0x00)
				{
					*a7_n = d0_n;
					word32 * a7_n;
					word32 a6_n;
					struct Eq_n * a2_n;
					word32 d0_n;
					ptr32 a5_n;
					word32 d2_n;
					word32 d1_n;
					word32 d4_n;
					int32 d3_n;
					a5[0x00B2]();
					if (d0_n != 0x00)
						d3_n = -1;
					*a7_n = a2_n->dw001C;
					word32 a7_n;
					word32 d1_n;
					(*((word32) a5_n + 122))();
					a2_n->dw001C = 0;
					a7_n = a7_n + 4;
				}
			}
		}
		a2_n->t000C.u2 = (struct Eq_n *) 0;
		ptr32 a6_n = *a6_n;
		d3Out.u0 = a7_n->t0004.u0;
		d4Out = d4;
		a5Out = a5;
		a6Out = a6_n;
		return d3_n;
	}
	else
	{
		dwArg04->t000C.u2 = (struct Eq_n *) 0;
		d3Out = d3;
		d4Out = d4;
		a5Out = a5;
		a6Out = a6;
		return -1;
	}
}

// 000020F0: Register word32 fn000020F0(Register ptr32 a5, Stack Eq_n dwArg04, Register out ptr32 a5Out, Register out ptr32 a6Out)
// Called from:
//      fn00002068
word32 fn000020F0(ptr32 a5, Eq_n dwArg04, ptr32 & a5Out, ptr32 & a6Out)
{
	ptr32 fp;
	word32 d0_n = *((word32) dwArg04 + 0x0C);
	ptr32 * a6_n = fp - 0x04;
	word32 * a7_n = fp - 0x08;
	if (((word16) d0_n & 131) != 0x00 && !__btst<byte>((byte) d0_n, 0x03))
	{
		word32 a7_n;
		struct Eq_n * a2_n;
		(*((word32) a5 + 122))();
		__bclr<byte>(a2_n->b000F, 0x03, out a2_n->b000F);
		a2_n->dw0000 = 0;
		a2_n->dw0008 = 0;
		a2_n->dw0004 = 0;
		a7_n = a7_n + 4;
	}
	word32 a2_n = *a7_n;
	ptr32 a6_n = *a6_n;
	a5Out = a5;
	a6Out = a6_n;
	return a2_n;
}

