// switch_init.c
// Generated by decompiling switch
// using Reko decompiler version 0.11.4.0.

#include "switch.h"

// 000082F0: Register word32 _init(Register out ptr32 r10Out)
// Called from:
//      __libc_csu_init
word32 _init(ptr32 & r10Out)
{
	ptr32 r10_n = call_gmon_start();
	frame_dummy();
	word32 r4_n = __do_global_ctors_aux();
	r10Out = r10_n;
	return r4_n;
}

