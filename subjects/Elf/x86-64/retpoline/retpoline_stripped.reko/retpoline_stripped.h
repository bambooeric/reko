// retpoline_stripped.h
// Generated by decompiling retpoline_stripped.elf
// using Reko decompiler version 0.11.6.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(400456 code t400456)
		(400466 code t400466)
		(400476 code t400476)
		(400660 Eq_18 t400660)
		(400710 Eq_21 t400710)
		(400780 Eq_22 t400780)
		(600FF0 (ptr64 code) __libc_start_main_GOT)
		(600FF8 (ptr64 code) __gmon_start___GOT)
		(601018 (ptr64 code) free_GOT)
		(601020 (ptr64 code) puts_GOT)
		(601028 (ptr64 code) calloc_GOT))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_6: (fn word64 ())
	T_6 (in __gmon_start__ @ 0000000000400438 : ptr64)
Eq_8: (fn void ())
	T_8 (in rdx @ 0000000000400438 : (ptr64 Eq_8))
	T_23 (in rtld_fini @ 00000000004004A4 : (ptr64 (fn void ())))
Eq_11: (fn void ((ptr64 (ptr64 char))))
	T_11 (in __align_stack<word64> @ 0000000000400489 : ptr32)
	T_12 (in signature of __align_stack : void)
Eq_16: (fn int32 ((ptr64 Eq_18), int32, (ptr64 (ptr64 char)), (ptr64 Eq_21), (ptr64 Eq_22), (ptr64 Eq_8), (ptr64 void)))
	T_16 (in __libc_start_main @ 00000000004004A4 : ptr64)
	T_17 (in signature of __libc_start_main : void)
Eq_18: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_18 (in main @ 00000000004004A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_25 (in 0x400660<64> @ 00000000004004A4 : word64)
Eq_21: (fn void ())
	T_21 (in init @ 00000000004004A4 : (ptr64 (fn void ())))
	T_29 (in 0x400710<64> @ 00000000004004A4 : word64)
Eq_22: (fn void ())
	T_22 (in fini @ 00000000004004A4 : (ptr64 (fn void ())))
	T_30 (in 0x400780<64> @ 00000000004004A4 : word64)
Eq_33: (fn void ())
	T_33 (in __halt @ 00000000004004AA : ptr32)
	T_34 (in signature of __halt : void)
Eq_48: (fn void ())
	T_48 (in fn0000000000400700 @ 00000000004006F0 : ptr64)
	T_49 (in signature of fn0000000000400700 @ 0000000000400700 : void)
Eq_51: (fn void ())
	T_51 (in __pause @ 00000000004006F5 : ptr32)
	T_52 (in signature of __pause : void)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ @ 0000000000400436 : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0<64> @ 0000000000400436 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0<64> @ 0000000000400436 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ @ 0000000000400438 : ptr64)
  Class: Eq_6
  DataType: (ptr64 Eq_6)
  OrigDataType: (ptr64 (fn T_7 ()))
T_7: (in __gmon_start__() @ 0000000000400438 : word64)
  Class: Eq_7
  DataType: word64
  OrigDataType: word64
T_8: (in rdx @ 0000000000400438 : (ptr64 Eq_8))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: (ptr64 (fn void ()))
T_9: (in dwArg00 @ 0000000000400438 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in ptrArg08 @ 0000000000400438 : (ptr64 char))
  Class: Eq_10
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_11: (in __align_stack<word64> @ 0000000000400489 : ptr32)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: (ptr32 (fn T_15 (T_14)))
T_12: (in signature of __align_stack : void)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: 
T_13: (in p1 @ 0000000000400489 : word64)
  Class: Eq_13
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_14: (in &ptrArg08 @ 0000000000400489 : (ptr64 (ptr64 char)))
  Class: Eq_13
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_15: (in __align_stack<word64>(&ptrArg08) @ 0000000000400489 : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __libc_start_main @ 00000000004004A4 : ptr64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn T_32 (T_25, T_27, T_28, T_29, T_30, T_8, T_31)))
T_17: (in signature of __libc_start_main : void)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_18: (in main @ 00000000004004A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: 
T_19: (in argc @ 00000000004004A4 : int32)
  Class: Eq_19
  DataType: int32
  OrigDataType: 
T_20: (in ubp_av @ 00000000004004A4 : (ptr64 (ptr64 char)))
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_21: (in init @ 00000000004004A4 : (ptr64 (fn void ())))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in fini @ 00000000004004A4 : (ptr64 (fn void ())))
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: 
T_23: (in rtld_fini @ 00000000004004A4 : (ptr64 (fn void ())))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: 
T_24: (in stack_end @ 00000000004004A4 : (ptr64 void))
  Class: Eq_24
  DataType: (ptr64 void)
  OrigDataType: 
T_25: (in 0x400660<64> @ 00000000004004A4 : word64)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_26: (in qwArg00 @ 00000000004004A4 : word64)
  Class: Eq_26
  DataType: word64
  OrigDataType: word64
T_27: (in SLICE(qwArg00, int32, 0) @ 00000000004004A4 : int32)
  Class: Eq_19
  DataType: int32
  OrigDataType: int32
T_28: (in &ptrArg08 @ 00000000004004A4 : (ptr64 (ptr64 char)))
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_29: (in 0x400710<64> @ 00000000004004A4 : word64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn void ()))
T_30: (in 0x400780<64> @ 00000000004004A4 : word64)
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: (ptr64 (fn void ()))
T_31: (in fp @ 00000000004004A4 : (ptr64 void))
  Class: Eq_24
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_32: (in __libc_start_main(&g_t400660, (int32) qwArg00, &ptrArg08, &g_t400710, &g_t400780, rdx, fp) @ 00000000004004A4 : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in __halt @ 00000000004004AA : ptr32)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: (ptr32 (fn T_35 ()))
T_34: (in signature of __halt : void)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: 
T_35: (in __halt() @ 00000000004004AA : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in true @ 00000000004004BF : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in true @ 00000000004004C9 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in 0<u64> @ 00000000004004D1 : uint64)
  Class: Eq_38
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_39: (in edi @ 00000000004004D1 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in esi @ 00000000004004D1 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in calloc @ 0000000000400576 : ptr64)
  Class: Eq_41
  DataType: ptr64
  OrigDataType: ptr64
T_42: (in signature of calloc : void)
  Class: Eq_41
  DataType: ptr64
  OrigDataType: 
T_43: (in num @ 0000000000400576 : size_t)
  Class: Eq_43
  DataType: int64
  OrigDataType: 
T_44: (in size @ 0000000000400576 : size_t)
  Class: Eq_43
  DataType: int64
  OrigDataType: 
T_45: (in CONVERT(edi, word32, int64) @ 0000000000400576 : int64)
  Class: Eq_43
  DataType: int64
  OrigDataType: int64
T_46: (in CONVERT(esi, word32, int64) @ 0000000000400576 : int64)
  Class: Eq_43
  DataType: int64
  OrigDataType: int64
T_47: (in calloc((int64) edi, (int64) esi) @ 0000000000400576 : (ptr64 void))
  Class: Eq_47
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_48: (in fn0000000000400700 @ 00000000004006F0 : ptr64)
  Class: Eq_48
  DataType: (ptr64 Eq_48)
  OrigDataType: (ptr64 (fn T_50 ()))
T_49: (in signature of fn0000000000400700 @ 0000000000400700 : void)
  Class: Eq_48
  DataType: (ptr64 Eq_48)
  OrigDataType: 
T_50: (in fn0000000000400700() @ 00000000004006F0 : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in __pause @ 00000000004006F5 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_53 ()))
T_52: (in signature of __pause : void)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: 
T_53: (in __pause() @ 00000000004006F5 : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	<anonymous> t400456;	// 400456
	<anonymous> t400466;	// 400466
	<anonymous> t400476;	// 400476
	Eq_18 t400660;	// 400660
	Eq_21 t400710;	// 400710
	Eq_22 t400780;	// 400780
	<anonymous> * __libc_start_main_GOT;	// 600FF0
	<anonymous> * __gmon_start___GOT;	// 600FF8
	<anonymous> * free_GOT;	// 601018
	<anonymous> * puts_GOT;	// 601020
	<anonymous> * calloc_GOT;	// 601028
} Eq_1;

typedef word64 (Eq_6)();

typedef void (Eq_8)();

typedef void (Eq_11)(char * *);

typedef int32 (Eq_16)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_18)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_21)();

typedef void (Eq_22)();

typedef void (Eq_33)();

typedef void (Eq_48)();

typedef void (Eq_51)();

