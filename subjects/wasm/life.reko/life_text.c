// life_text.c
// Generated by decompiling life.wasm
// using Reko decompiler version 0.11.4.0.

#include "life.h"

// 000C0000: Stack word32 count_neighbors(Stack word32 arg0, Stack word32 arg1, Stack word32 arg2)
word32 count_neighbors(word32 arg0, word32 arg1, word32 arg2)
{
	return <invalid>;
}

// 000C0060: void update_gen(Stack ui32 arg0)
void update_gen(ui32 arg0)
{
	ui32 arg0_n = arg0;
	do
	{
		do
		{
			byte * v16_n = (0x01 - arg0_n) * 10000 + 0x10;
			Eq_n loc7_n = false;
			word32 loc13_n = 0x00;
			arg0_n = 0x00;
			Eq_n v16_n = (word80000) ((Eq_n[]) ~0x52)[arg0_n] + (((Eq_n[]) ~0x54))[arg0_n].b0000 + (word32) ((Eq_n[]) 115)[arg0_n] + (word32) ((Eq_n[]) 117)[arg0_n];
			switch (v16_n)
			{
			case 0x03:
				loc13_n = 0x01;
				break;
			case 0x02:
				loc13_n = (word32) ((Eq_n[]) 0x10)[arg0_n];
				break;
			}
			*v16_n = (byte) loc13_n;
		} while (true);
		arg0_n = 0x01;
	} while (loc7_n == 0x00);
}

// 000C0153: Stack word32 main()
word32 main()
{
	return <invalid>;
}

