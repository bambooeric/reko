// adctest_pfs173_CODE_n.c
// Generated by decompiling adctest_pfs173.ihx
// using Reko decompiler version 0.11.5.0.

#include "adctest_pfs173.h"

// 0000: void fn0000(Register byte f)
void fn0000(byte f)
{
	g_b0001 = 0x00;
	__out(0x02, 188);
	fn004F();
	fn0012(f);
}

byte g_b0001 = 0x01; // 0001
Eq_n g_t0002 = // 0002
	{
		22451
	};
byte g_b0003 = 0x0A; // 0003
Eq_n g_t0004 = // 0004
	{
		0x54FE
	};
Eq_n g_t0005 = // 0005
	{
		0x0102
	};
byte g_b0006 = 0x4F; // 0006
Eq_n g_t0007 = // 0007
	{
		0x6012
	};
