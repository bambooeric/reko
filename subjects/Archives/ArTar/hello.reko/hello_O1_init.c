// hello_O1_init.c
// Generated by decompiling hello_O1
// using Reko decompiler version 0.10.2.0.

#include "hello_O1.h"

// 0000000000001000: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (__gmon_start__ != 0x00)
		__gmon_start__();
}

