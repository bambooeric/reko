// RussianText.h
// Generated by decompiling RussianText.exe
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40208B uint32 dw40208B) (4020A4 char b4020A4) (4020F8 word32 dw4020F8))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (struct "Eq_2" (0 word32 dw0000) (4 ptr32 ptr0004))
	T_2 (in dwArg04 : (ptr32 Eq_2))
	T_5 (in dwArg04 : (ptr32 Eq_2))
	T_62 (in fp - 0xC<32> : word32)
Eq_3: (fn void ((ptr32 Eq_2)))
	T_3 (in fn004011FC : ptr32)
	T_4 (in signature of fn004011FC : void)
	T_59 (in fn004011FC : ptr32)
Eq_16: HANDLE
	T_16 (in eax_22 : Eq_16)
	T_19 (in GetProcessHeap() : HANDLE)
Eq_17: (fn Eq_16 ())
	T_17 (in GetProcessHeap : ptr32)
	T_18 (in signature of GetProcessHeap : void)
Eq_23: (segment "Eq_23" (2C (ptr32 (arr word32)) ptr002C))
	T_23 (in fs : selector)
Eq_34: (fn int32 ((ptr32 char)))
	T_34 (in printf : ptr32)
	T_35 (in signature of printf : void)
Eq_44: (fn (ptr32 void) ((ptr32 void), (ptr32 void), Eq_48))
	T_44 (in memcpy : ptr32)
	T_45 (in signature of memcpy : void)
Eq_48: size_t
	T_48 (in _Size : size_t)
	T_52 (in 0x9C<32> : word32)
Eq_49: (fn (ptr32 void) ())
	T_49 (in fn00401158 : ptr32)
	T_50 (in signature of fn00401158 : void)
	T_65 (in fn00401158 : ptr32)
Eq_54: (fn void ())
	T_54 (in _InitTermAndUnexPtrs : ptr32)
	T_55 (in signature of _InitTermAndUnexPtrs : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in dwArg04 : (ptr32 Eq_2))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: word32
T_3: (in fn004011FC : ptr32)
  Class: Eq_3
  DataType: (ptr32 Eq_3)
  OrigDataType: (ptr32 (fn T_6 (T_2)))
T_4: (in signature of fn004011FC : void)
  Class: Eq_3
  DataType: (ptr32 Eq_3)
  OrigDataType: 
T_5: (in dwArg04 : (ptr32 Eq_2))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (struct (0 T_74 t0000) (4 T_78 t0004)))
T_6: (in fn004011FC(dwArg04) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in 0040208B : ptr32)
  Class: Eq_7
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_8 t0000)))
T_8: (in Mem0[0x0040208B<p32>:word32] : word32)
  Class: Eq_8
  DataType: uint32
  OrigDataType: up32
T_9: (in 0<32> : word32)
  Class: Eq_8
  DataType: uint32
  OrigDataType: up32
T_10: (in g_dw40208B < 0<32> : bool)
  Class: Eq_10
  DataType: bool
  OrigDataType: bool
T_11: (in eax_11 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in __CRTL_TLS_GetValue : ptr32)
  Class: Eq_12
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_13: (in signature of __CRTL_TLS_GetValue : void)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: 
T_14: (in 0<32> : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_15: (in eax_11 == 0<32> : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in eax_22 : Eq_16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: HANDLE
T_17: (in GetProcessHeap : ptr32)
  Class: Eq_17
  DataType: (ptr32 Eq_17)
  OrigDataType: (ptr32 (fn T_19 ()))
T_18: (in signature of GetProcessHeap : void)
  Class: Eq_17
  DataType: (ptr32 Eq_17)
  OrigDataType: 
T_19: (in GetProcessHeap() : HANDLE)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: HANDLE
T_20: (in __CRTL_TLS_ExitThread : ptr32)
  Class: Eq_20
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_21: (in signature of __CRTL_TLS_ExitThread : void)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: 
T_22: (in eax : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in fs : selector)
  Class: Eq_23
  DataType: (ptr16 Eq_23)
  OrigDataType: (ptr16 (segment (2C T_25 t002C)))
T_24: (in 0x2C<16> : word16)
  Class: Eq_24
  DataType: (memptr (ptr16 Eq_23) (ptr32 (arr word32)))
  OrigDataType: (memptr T_23 (struct (0 T_25 t0000)))
T_25: (in Mem0[fs:0x2C<16>:word32] : word32)
  Class: Eq_25
  DataType: (ptr32 (arr word32))
  OrigDataType: (ptr32 (struct (0 (arr T_79) a0000)))
T_26: (in 0040208B : ptr32)
  Class: Eq_26
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_27 t0000)))
T_27: (in Mem0[0x0040208B<p32>:word32] : word32)
  Class: Eq_8
  DataType: uint32
  OrigDataType: ui32
T_28: (in 4<32> : word32)
  Class: Eq_28
  DataType: ui32
  OrigDataType: ui32
T_29: (in g_dw40208B * 4<32> : word32)
  Class: Eq_29
  DataType: ui32
  OrigDataType: ui32
T_30: (in Mem0[fs:0x2C<16>:word32][Mem0[0x0040208B<p32>:word32] * 4<32>] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_31: (in eax : int32)
  Class: Eq_31
  DataType: int32
  OrigDataType: int32
T_32: (in argc : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in argv : (ptr32 (ptr32 char)))
  Class: Eq_33
  DataType: (ptr32 (ptr32 char))
  OrigDataType: (ptr32 (ptr32 char))
T_34: (in printf : ptr32)
  Class: Eq_34
  DataType: (ptr32 Eq_34)
  OrigDataType: (ptr32 (fn T_38 (T_37)))
T_35: (in signature of printf : void)
  Class: Eq_34
  DataType: (ptr32 Eq_34)
  OrigDataType: 
T_36: (in ptrArg04 : (ptr32 char))
  Class: Eq_36
  DataType: (ptr32 char)
  OrigDataType: 
T_37: (in 0x4020A4<32> : word32)
  Class: Eq_36
  DataType: (ptr32 char)
  OrigDataType: (ptr32 char)
T_38: (in printf(&g_b4020A4) : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in 0<32> : word32)
  Class: Eq_31
  DataType: int32
  OrigDataType: word32
T_40: (in dwArg04 : (ptr32 void))
  Class: Eq_40
  DataType: (ptr32 void)
  OrigDataType: word32
T_41: (in ebx_12 : (ptr32 void))
  Class: Eq_40
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_42: (in 0<32> : word32)
  Class: Eq_40
  DataType: (ptr32 void)
  OrigDataType: word32
T_43: (in dwArg04 != null : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in memcpy : ptr32)
  Class: Eq_44
  DataType: (ptr32 Eq_44)
  OrigDataType: (ptr32 (fn T_53 (T_51, T_41, T_52)))
T_45: (in signature of memcpy : void)
  Class: Eq_44
  DataType: (ptr32 Eq_44)
  OrigDataType: 
T_46: (in _Dst : (ptr32 void))
  Class: Eq_46
  DataType: (ptr32 void)
  OrigDataType: 
T_47: (in _Src : (ptr32 void))
  Class: Eq_40
  DataType: (ptr32 void)
  OrigDataType: 
T_48: (in _Size : size_t)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: 
T_49: (in fn00401158 : ptr32)
  Class: Eq_49
  DataType: (ptr32 Eq_49)
  OrigDataType: (ptr32 (fn T_51 ()))
T_50: (in signature of fn00401158 : void)
  Class: Eq_49
  DataType: (ptr32 Eq_49)
  OrigDataType: 
T_51: (in fn00401158() : word32)
  Class: Eq_46
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_52: (in 0x9C<32> : word32)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: size_t
T_53: (in memcpy(fn00401158(), ebx_12, 0x9C<32>) : (ptr32 void))
  Class: Eq_53
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_54: (in _InitTermAndUnexPtrs : ptr32)
  Class: Eq_54
  DataType: (ptr32 Eq_54)
  OrigDataType: (ptr32 (fn T_56 ()))
T_55: (in signature of _InitTermAndUnexPtrs : void)
  Class: Eq_54
  DataType: (ptr32 Eq_54)
  OrigDataType: 
T_56: (in _InitTermAndUnexPtrs() : void)
  Class: Eq_56
  DataType: void
  OrigDataType: void
T_57: (in 0<32> : word32)
  Class: Eq_40
  DataType: (ptr32 void)
  OrigDataType: word32
T_58: (in dwArg04 != null : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in fn004011FC : ptr32)
  Class: Eq_3
  DataType: (ptr32 Eq_3)
  OrigDataType: (ptr32 (fn T_63 (T_62)))
T_60: (in fp : ptr32)
  Class: Eq_60
  DataType: ptr32
  OrigDataType: ptr32
T_61: (in 0xC<32> : word32)
  Class: Eq_61
  DataType: ui32
  OrigDataType: ui32
T_62: (in fp - 0xC<32> : word32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: ptr32
T_63: (in fn004011FC(fp - 0xC<32>) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_64: (in dwLoc08 : word32)
  Class: Eq_40
  DataType: (ptr32 void)
  OrigDataType: word32
T_65: (in fn00401158 : ptr32)
  Class: Eq_49
  DataType: (ptr32 Eq_49)
  OrigDataType: (ptr32 (fn T_66 ()))
T_66: (in fn00401158() : word32)
  Class: Eq_46
  DataType: (ptr32 void)
  OrigDataType: word32
T_67: (in 0x1C<32> : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in fn00401158() + 0x1C<32> : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in 004020F8 : ptr32)
  Class: Eq_69
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_70 t0000)))
T_70: (in Mem17[0x004020F8<p32>:word32] : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_71: (in 0x82727349<32> : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in 0<32> : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in dwArg04 + 0<32> : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in Mem18[dwArg04 + 0<32>:word32] : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_75: (in 0x004020E4<p32> : ptr32)
  Class: Eq_75
  DataType: ptr32
  OrigDataType: ptr32
T_76: (in 4<32> : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in dwArg04 + 4<32> : word32)
  Class: Eq_77
  DataType: ptr32
  OrigDataType: ptr32
T_78: (in Mem19[dwArg04 + 4<32>:word32] : word32)
  Class: Eq_75
  DataType: ptr32
  OrigDataType: word32
T_79:
  Class: Eq_79
  DataType: word32
  OrigDataType: (struct 0004 (0 T_30 t0000))
*/
typedef struct Globals {
	uint32 dw40208B;	// 40208B
	char b4020A4;	// 4020A4
	word32 dw4020F8;	// 4020F8
} Eq_1;

typedef struct Eq_2 {
	word32 dw0000;	// 0
	ptr32 ptr0004;	// 4
} Eq_2;

typedef void (Eq_3)(Eq_2 *);

typedef HANDLE Eq_16;

typedef HANDLE (Eq_17)();

typedef struct Eq_23 {
	word32 (* ptr002C)[];	// 2C
} Eq_23;

typedef int32 (Eq_34)(char *);

typedef void (Eq_44)(void, void, size_t);

typedef size_t Eq_48;

typedef void (Eq_49)();

typedef void (Eq_54)();

