// test.h
// Generated by decompiling test
// using Reko decompiler version 0.11.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(400416 code t400416)
		(400426 code t400426)
		(400436 code t400436)
		(40053D Eq_21 t40053D)
		(400550 Eq_24 t400550)
		(4005C0 Eq_25 t4005C0)
		(600E10 (arr (ptr64 code)) a600E10)
		(600E20 word64 qw600E20)
		(600FF8 (ptr64 code) __gmon_start___GOT)
		(601018 (ptr64 code) putchar_GOT)
		(601020 (ptr64 code) __libc_start_main_GOT)
		(601028 (ptr64 code) __gmon_start___GOT)
		(601040 byte b601040))
	globals_t (in globals @ 00000000 : (ptr64 (struct "Globals")))
Eq_6: (fn void ())
	T_6 (in __gmon_start__ @ 004003F0 : ptr64)
Eq_9: (fn void ())
	T_9 (in rdx @ 004003F0 : (ptr64 Eq_9))
	T_26 (in rtld_fini @ 00400464 : (ptr64 (fn void ())))
Eq_13: (fn void (ptr64))
	T_13 (in __align_stack<word64> @ 00400449 : ptr32)
	T_14 (in signature of __align_stack @ 00000000 : void)
Eq_19: (fn int32 ((ptr64 Eq_21), int32, (ptr64 (ptr64 char)), (ptr64 Eq_24), (ptr64 Eq_25), (ptr64 Eq_9), (ptr64 void)))
	T_19 (in __libc_start_main @ 00400464 : ptr64)
	T_20 (in signature of __libc_start_main @ 00000000 : void)
Eq_21: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_21 (in main @ 00400464 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_28 (in 0x40053D<64> @ 00400464 : word64)
Eq_24: (fn void ())
	T_24 (in init @ 00400464 : (ptr64 (fn void ())))
	T_31 (in 0x400550<64> @ 00400464 : word64)
Eq_25: (fn void ())
	T_25 (in fini @ 00400464 : (ptr64 (fn void ())))
	T_32 (in 0x4005C0<64> @ 00400464 : word64)
Eq_34: (fn void ())
	T_34 (in __hlt @ 00400469 : ptr32)
	T_35 (in signature of __hlt @ 00000000 : void)
Eq_47: (fn void ())
	T_47 (in deregister_tm_clones @ 004004ED : ptr64)
	T_48 (in signature of deregister_tm_clones @ 00400470 : void)
Eq_58: (fn void (uint64))
	T_58 (in fn0000000000000000 @ 0040051D : ptr64)
Eq_62: (fn void ())
	T_62 (in register_tm_clones @ 00400520 : ptr64)
	T_63 (in signature of register_tm_clones @ 004004A0 : void)
	T_65 (in register_tm_clones @ 00400528 : ptr64)
Eq_68: (fn int32 (int32))
	T_68 (in putchar @ 0040053C : ptr64)
	T_69 (in signature of putchar @ 00000000 : void)
Eq_73: (fn word32 ())
	T_73 (in f @ 00400546 : ptr64)
	T_74 (in signature of f @ 0040052D : void)
Eq_81: (fn void ())
	T_81 (in _init @ 0040057E : ptr64)
	T_82 (in signature of _init @ 004003E0 : void)
Eq_85: (union "Eq_85" (int64 u0) (ptr64 u1))
	T_85 (in 0000000000600E18 @ 00400571 : ptr64)
Eq_86: (union "Eq_86" (int64 u0) (ptr64 u1))
	T_86 (in 0000000000600E10 @ 00400571 : ptr64)
Eq_88: (union "Eq_88" (int64 u0) (uint64 u1))
	T_88 (in rbx_33 @ 00400574 : Eq_88)
	T_89 (in 0<u64> @ 00400574 : uint64)
	T_99 (in rbx_33 + 1<64> @ 0040059D : word64)
	T_100 (in rbp_31 >> 3<64> @ 00000000 : word64)
// Type Variables ////////////
globals_t: (in globals @ 00000000 : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ @ 004003EE : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ @ 00000000 : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0<64> @ 004003EE : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0<64> @ 00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ @ 004003F0 : ptr64)
  Class: Eq_6
  DataType: (ptr64 Eq_6)
  OrigDataType: (ptr64 (fn T_8 ()))
T_7: (in signature of __gmon_start__ @ 00000000 : void)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: 
T_8: (in __gmon_start__() @ 004003F0 : void)
  Class: Eq_8
  DataType: void
  OrigDataType: void
T_9: (in rdx @ 004003F0 : (ptr64 Eq_9))
  Class: Eq_9
  DataType: (ptr64 Eq_9)
  OrigDataType: (ptr64 (fn void ()))
T_10: (in dwArg00 @ 004003F0 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in fp @ 00400440 : (ptr64 void))
  Class: Eq_11
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_12: (in qwArg00 @ 00400440 : word64)
  Class: Eq_12
  DataType: word64
  OrigDataType: word64
T_13: (in __align_stack<word64> @ 00400449 : ptr32)
  Class: Eq_13
  DataType: (ptr32 Eq_13)
  OrigDataType: (ptr32 (fn T_18 (T_17)))
T_14: (in signature of __align_stack @ 00000000 : void)
  Class: Eq_13
  DataType: (ptr32 Eq_13)
  OrigDataType: 
T_15: (in p1 @ 00400449 : word64)
  Class: Eq_15
  DataType: ptr64
  OrigDataType: 
T_16: (in 8<i64> @ 00400449 : int64)
  Class: Eq_16
  DataType: int64
  OrigDataType: int64
T_17: (in fp + 8<i64> @ 00400449 : word64)
  Class: Eq_15
  DataType: ptr64
  OrigDataType: ptr64
T_18: (in __align_stack<word64>((char *) fp + 8<i32>) @ 00400449 : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __libc_start_main @ 00400464 : ptr64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn T_33 (T_28, T_29, T_30, T_31, T_32, T_9, T_11)))
T_20: (in signature of __libc_start_main @ 00000000 : void)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_21: (in main @ 00400464 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in argc @ 00400464 : int32)
  Class: Eq_22
  DataType: int32
  OrigDataType: 
T_23: (in ubp_av @ 00400464 : (ptr64 (ptr64 char)))
  Class: Eq_23
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_24: (in init @ 00400464 : (ptr64 (fn void ())))
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: 
T_25: (in fini @ 00400464 : (ptr64 (fn void ())))
  Class: Eq_25
  DataType: (ptr64 Eq_25)
  OrigDataType: 
T_26: (in rtld_fini @ 00400464 : (ptr64 (fn void ())))
  Class: Eq_9
  DataType: (ptr64 Eq_9)
  OrigDataType: 
T_27: (in stack_end @ 00400464 : (ptr64 void))
  Class: Eq_11
  DataType: (ptr64 void)
  OrigDataType: 
T_28: (in 0x40053D<64> @ 00400464 : word64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_29: (in SLICE(qwArg00, int32, 0) @ 00400464 : int32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_30: (in fp + 8<i64> @ 00400464 : word64)
  Class: Eq_23
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_31: (in 0x400550<64> @ 00400464 : word64)
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: (ptr64 (fn void ()))
T_32: (in 0x4005C0<64> @ 00400464 : word64)
  Class: Eq_25
  DataType: (ptr64 Eq_25)
  OrigDataType: (ptr64 (fn void ()))
T_33: (in __libc_start_main(&g_t40053D, (int32) qwArg00, (char *) fp + 8<i32>, &g_t400550, &g_t4005C0, rdx, fp) @ 00400464 : int32)
  Class: Eq_33
  DataType: int32
  OrigDataType: int32
T_34: (in __hlt @ 00400469 : ptr32)
  Class: Eq_34
  DataType: (ptr32 Eq_34)
  OrigDataType: (ptr32 (fn T_36 ()))
T_35: (in signature of __hlt @ 00000000 : void)
  Class: Eq_34
  DataType: (ptr32 Eq_34)
  OrigDataType: 
T_36: (in __hlt() @ 00400469 : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in false @ 00400483 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in true @ 0040048F : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in 0<u64> @ 00400497 : uint64)
  Class: Eq_39
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_40: (in false @ 004004C0 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in true @ 004004CC : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0<u64> @ 004004D7 : uint64)
  Class: Eq_42
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_43: (in 0000000000601040 @ 004004E7 : ptr64)
  Class: Eq_43
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_44 t0000)))
T_44: (in Mem0[0x0000000000601040<p64>:byte] @ 004004E7 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0<8> @ 004004E7 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_46: (in g_b601040 != 0<8> @ 00000000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in deregister_tm_clones @ 004004ED : ptr64)
  Class: Eq_47
  DataType: (ptr64 Eq_47)
  OrigDataType: (ptr64 (fn T_49 ()))
T_48: (in signature of deregister_tm_clones @ 00400470 : void)
  Class: Eq_47
  DataType: (ptr64 Eq_47)
  OrigDataType: 
T_49: (in deregister_tm_clones() @ 004004ED : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in 1<8> @ 004004F3 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_51: (in 0000000000601040 @ 004004F3 : ptr64)
  Class: Eq_51
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_52 t0000)))
T_52: (in Mem19[0x0000000000601040<p64>:byte] @ 004004F3 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_53: (in 0000000000600E20 @ 00400508 : ptr64)
  Class: Eq_53
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_54 t0000)))
T_54: (in Mem0[0x0000000000600E20<p64>:word64] @ 00400508 : word64)
  Class: Eq_54
  DataType: word64
  OrigDataType: word64
T_55: (in 0<64> @ 00400508 : word64)
  Class: Eq_54
  DataType: word64
  OrigDataType: word64
T_56: (in g_qw600E20 == 0<64> @ 00000000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in true @ 00400512 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in fn0000000000000000 @ 0040051D : ptr64)
  Class: Eq_58
  DataType: (ptr64 Eq_58)
  OrigDataType: (ptr64 (fn T_61 (T_60)))
T_59: (in signature of fn0000000000000000 @ 00000000 : void)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: 
T_60: (in 0x600E20<u64> @ 0040051D : uint64)
  Class: Eq_60
  DataType: uint64
  OrigDataType: uint64
T_61: (in fn0000000000000000(0x600E20<u64>) @ 0040051D : void)
  Class: Eq_61
  DataType: void
  OrigDataType: void
T_62: (in register_tm_clones @ 00400520 : ptr64)
  Class: Eq_62
  DataType: (ptr64 Eq_62)
  OrigDataType: (ptr64 (fn T_64 ()))
T_63: (in signature of register_tm_clones @ 004004A0 : void)
  Class: Eq_62
  DataType: (ptr64 Eq_62)
  OrigDataType: 
T_64: (in register_tm_clones() @ 00400520 : void)
  Class: Eq_64
  DataType: void
  OrigDataType: void
T_65: (in register_tm_clones @ 00400528 : ptr64)
  Class: Eq_62
  DataType: (ptr64 Eq_62)
  OrigDataType: (ptr64 (fn T_66 ()))
T_66: (in register_tm_clones() @ 00400528 : void)
  Class: Eq_64
  DataType: void
  OrigDataType: void
T_67: (in eax @ 00400528 : int32)
  Class: Eq_67
  DataType: int32
  OrigDataType: word32
T_68: (in putchar @ 0040053C : ptr64)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: (ptr64 (fn T_72 (T_71)))
T_69: (in signature of putchar @ 00000000 : void)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: 
T_70: (in c @ 0040053C : int32)
  Class: Eq_70
  DataType: int32
  OrigDataType: 
T_71: (in 120<i32> @ 0040053C : int32)
  Class: Eq_70
  DataType: int32
  OrigDataType: int32
T_72: (in putchar(120<i32>) @ 0040053C : int32)
  Class: Eq_67
  DataType: int32
  OrigDataType: int32
T_73: (in f @ 00400546 : ptr64)
  Class: Eq_73
  DataType: (ptr64 Eq_73)
  OrigDataType: (ptr64 (fn T_75 ()))
T_74: (in signature of f @ 0040052D : void)
  Class: Eq_73
  DataType: (ptr64 Eq_73)
  OrigDataType: 
T_75: (in f() @ 00400546 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in rdx @ 0040054C : word64)
  Class: Eq_76
  DataType: word64
  OrigDataType: word64
T_77: (in rsi @ 0040054C : word64)
  Class: Eq_77
  DataType: word64
  OrigDataType: word64
T_78: (in edi @ 0040054C : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in rdi @ 00400550 : word64)
  Class: Eq_79
  DataType: word64
  OrigDataType: word64
T_80: (in SLICE(rdi, word32, 0) @ 00400550 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_81: (in _init @ 0040057E : ptr64)
  Class: Eq_81
  DataType: (ptr64 Eq_81)
  OrigDataType: (ptr64 (fn T_83 ()))
T_82: (in signature of _init @ 004003E0 : void)
  Class: Eq_81
  DataType: (ptr64 Eq_81)
  OrigDataType: 
T_83: (in _init() @ 0040057E : void)
  Class: Eq_83
  DataType: void
  OrigDataType: void
T_84: (in rbp_31 @ 00400571 : int64)
  Class: Eq_84
  DataType: int64
  OrigDataType: int64
T_85: (in 0000000000600E18 @ 00400571 : ptr64)
  Class: Eq_85
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_86: (in 0000000000600E10 @ 00400571 : ptr64)
  Class: Eq_86
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_87: (in 0x600E18<u64> - 0x600E10<u64> @ 00000000 : word64)
  Class: Eq_84
  DataType: int64
  OrigDataType: int64
T_88: (in rbx_33 @ 00400574 : Eq_88)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: word64
T_89: (in 0<u64> @ 00400574 : uint64)
  Class: Eq_88
  DataType: uint64
  OrigDataType: uint64
T_90: (in 3<64> @ 00400586 : word64)
  Class: Eq_90
  DataType: word64
  OrigDataType: word64
T_91: (in rbp_31 >> 3<64> @ 00000000 : word64)
  Class: Eq_91
  DataType: int64
  OrigDataType: int64
T_92: (in 0<64> @ 00400586 : word64)
  Class: Eq_91
  DataType: int64
  OrigDataType: word64
T_93: (in rbp_31 >> 3<64> == 0<64> @ 00000000 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0000000000600E10 @ 00400599 : ptr64)
  Class: Eq_94
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_102) a0000)))
T_95: (in 8<64> @ 00400599 : word64)
  Class: Eq_95
  DataType: ui64
  OrigDataType: ui64
T_96: (in rbx_33 * 8<64> @ 00000000 : word64)
  Class: Eq_96
  DataType: ui64
  OrigDataType: ui64
T_97: (in 0x0000000000600E10<p64>[rbx_33 * 8<64>] @ 00400599 : word64)
  Class: Eq_97
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_98: (in 1<64> @ 0040059D : word64)
  Class: Eq_98
  DataType: word64
  OrigDataType: word64
T_99: (in rbx_33 + 1<64> @ 0040059D : word64)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: uint64
T_100: (in rbp_31 >> 3<64> @ 00000000 : word64)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: int64
T_101: (in rbx_33 != rbp_31 >> 3<64> @ 00000000 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102:
  Class: Eq_102
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_97 t0000))
T_103:
  Class: Eq_103
  DataType: (arr (ptr64 code))
  OrigDataType: (arr T_102)
*/
typedef struct Globals {
	<anonymous> t400416;	// 400416
	<anonymous> t400426;	// 400426
	<anonymous> t400436;	// 400436
	Eq_21 t40053D;	// 40053D
	Eq_24 t400550;	// 400550
	Eq_25 t4005C0;	// 4005C0
	<anonymous> * a600E10[];	// 600E10
	word64 qw600E20;	// 600E20
	<anonymous> * __gmon_start___GOT;	// 600FF8
	<anonymous> * putchar_GOT;	// 601018
	<anonymous> * __libc_start_main_GOT;	// 601020
	<anonymous> * __gmon_start___GOT;	// 601028
	byte b601040;	// 601040
} Eq_1;

typedef void (Eq_6)();

typedef void (Eq_9)();

typedef void (Eq_13)(ptr64);

typedef int32 (Eq_19)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_21)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_24)();

typedef void (Eq_25)();

typedef void (Eq_34)();

typedef void (Eq_47)();

typedef void (Eq_58)(uint64);

typedef void (Eq_62)();

typedef int32 (Eq_68)(int32);

typedef word32 (Eq_73)();

typedef void (Eq_81)();

typedef union Eq_85 {
	int64 u0;
	ptr64 u1;
} Eq_85;

typedef union Eq_86 {
	int64 u0;
	ptr64 u1;
} Eq_86;

typedef union Eq_88 {
	int64 u0;
	uint64 u1;
} Eq_88;

