// test_init.c
// Generated by decompiling test
// using Reko decompiler version 0.11.2.0.

#include "test.h"

// 00000000004003E0: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (__gmon_start__ != 0x00)
		__gmon_start__();
}

