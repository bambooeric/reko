// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.11.5.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(4003F6 code t4003F6)
		(400406 code t400406)
		(4005C5 Eq_17 t4005C5)
		(400620 Eq_20 t400620)
		(4006B0 Eq_21 t4006B0)
		(4006C8 (str char) str4006C8)
		(4006F0 (str char) str4006F0)
		(400718 (str char) str400718)
		(600DF8 (arr (ptr64 code)) a600DF8)
		(600E08 word64 qw600E08)
		(600FE0 (ptr64 code) __gmon_start___GOT)
		(601000 (ptr64 code) puts_GOT)
		(601008 (ptr64 code) __libc_start_main_GOT)
		(601020 (arr byte) a601020)
		(601038 byte b601038))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start @ 00000000004003CC : ptr64)
	T_3 (in signature of call_gmon_start @ 000000000040043C : void)
Eq_5: (fn void ())
	T_5 (in rdx @ 00000000004003D5 : (ptr64 Eq_5))
	T_22 (in rtld_fini @ 0000000000400434 : (ptr64 (fn void ())))
Eq_10: (fn void ((ptr64 (ptr64 char))))
	T_10 (in __align_stack<word64> @ 0000000000400419 : ptr32)
	T_11 (in signature of __align_stack : void)
Eq_15: (fn int32 ((ptr64 Eq_17), int32, (ptr64 (ptr64 char)), (ptr64 Eq_20), (ptr64 Eq_21), (ptr64 Eq_5), (ptr64 void)))
	T_15 (in __libc_start_main @ 0000000000400434 : ptr64)
	T_16 (in signature of __libc_start_main : void)
Eq_17: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_17 (in main @ 0000000000400434 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_24 (in 0x4005C5<64> @ 0000000000400434 : word64)
Eq_20: (fn void ())
	T_20 (in init @ 0000000000400434 : (ptr64 (fn void ())))
	T_27 (in 0x400620<64> @ 0000000000400434 : word64)
Eq_21: (fn void ())
	T_21 (in fini @ 0000000000400434 : (ptr64 (fn void ())))
	T_28 (in 0x4006B0<64> @ 0000000000400434 : word64)
Eq_30: (fn void ())
	T_30 (in __halt @ 0000000000400439 : ptr32)
	T_31 (in signature of __halt : void)
Eq_37: (fn word64 ())
	T_37 (in __gmon_start__ @ 000000000040044C : ptr64)
Eq_49: (fn void ())
	T_49 (in deregister_tm_clones @ 00000000004004DD : ptr64)
	T_50 (in signature of deregister_tm_clones @ 0000000000400460 : void)
Eq_59: (fn void (uint64))
	T_59 (in fn0000000000000000 @ 000000000040050D : ptr64)
Eq_63: (fn void ())
	T_63 (in register_tm_clones @ 0000000000400510 : ptr64)
	T_64 (in signature of register_tm_clones @ 0000000000400490 : void)
	T_66 (in register_tm_clones @ 0000000000400518 : ptr64)
Eq_115: (struct "Eq_115" (8 (ptr64 (arr byte)) ptr0008))
	T_115 (in rsi @ 00000000004005C4 : (ptr64 Eq_115))
Eq_119: (fn word32 ((ptr64 (arr byte))))
	T_119 (in verify @ 0000000000400600 : ptr64)
	T_120 (in signature of verify @ 0000000000400520 : void)
Eq_127: (fn int32 ((ptr64 char)))
	T_127 (in puts @ 00000000004005DF : ptr64)
	T_128 (in signature of puts : void)
Eq_132: (fn int32 ((ptr64 char)))
	T_132 (in puts @ 0000000000400613 : ptr64)
	T_133 (in signature of puts : void)
Eq_137: (fn int32 ((ptr64 char)))
	T_137 (in puts @ 0000000000400607 : ptr64)
	T_138 (in signature of puts : void)
Eq_147: (fn void ())
	T_147 (in _init @ 0000000000400660 : ptr64)
	T_148 (in signature of _init @ 00000000004003C8 : void)
Eq_151: (union "Eq_151" (int64 u0) (ptr64 u1))
	T_151 (in 0000000000600E00 @ 0000000000400650 : ptr64)
Eq_158: (union "Eq_158" (int64 u0) (uint64 u1))
	T_158 (in rbx_41 @ 000000000040066A : Eq_158)
	T_159 (in 0<u64> @ 000000000040066A : uint64)
	T_164 (in rbx_41 + 1<64> @ 000000000040067D : word64)
	T_165 (in rbp_19 >> 3<64> @ 0000000000400684 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in call_gmon_start @ 00000000004003CC : ptr64)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: (ptr64 (fn T_4 ()))
T_3: (in signature of call_gmon_start @ 000000000040043C : void)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() @ 00000000004003CC : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rdx @ 00000000004003D5 : (ptr64 Eq_5))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: (ptr64 (fn void ()))
T_6: (in dwArg00 @ 00000000004003D5 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in ptrArg08 @ 00000000004003D5 : (ptr64 char))
  Class: Eq_7
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_8: (in fp @ 0000000000400410 : (ptr64 void))
  Class: Eq_8
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_9: (in qwArg00 @ 0000000000400410 : word64)
  Class: Eq_9
  DataType: word64
  OrigDataType: word64
T_10: (in __align_stack<word64> @ 0000000000400419 : ptr32)
  Class: Eq_10
  DataType: (ptr32 Eq_10)
  OrigDataType: (ptr32 (fn T_14 (T_13)))
T_11: (in signature of __align_stack : void)
  Class: Eq_10
  DataType: (ptr32 Eq_10)
  OrigDataType: 
T_12: (in p1 @ 0000000000400419 : word64)
  Class: Eq_12
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_13: (in &ptrArg08 @ 0000000000400419 : (ptr64 (ptr64 char)))
  Class: Eq_12
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_14: (in __align_stack<word64>(&ptrArg08) @ 0000000000400419 : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in __libc_start_main @ 0000000000400434 : ptr64)
  Class: Eq_15
  DataType: (ptr64 Eq_15)
  OrigDataType: (ptr64 (fn T_29 (T_24, T_25, T_26, T_27, T_28, T_5, T_8)))
T_16: (in signature of __libc_start_main : void)
  Class: Eq_15
  DataType: (ptr64 Eq_15)
  OrigDataType: 
T_17: (in main @ 0000000000400434 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_17
  DataType: (ptr64 Eq_17)
  OrigDataType: 
T_18: (in argc @ 0000000000400434 : int32)
  Class: Eq_18
  DataType: int32
  OrigDataType: 
T_19: (in ubp_av @ 0000000000400434 : (ptr64 (ptr64 char)))
  Class: Eq_19
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_20: (in init @ 0000000000400434 : (ptr64 (fn void ())))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in fini @ 0000000000400434 : (ptr64 (fn void ())))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in rtld_fini @ 0000000000400434 : (ptr64 (fn void ())))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: 
T_23: (in stack_end @ 0000000000400434 : (ptr64 void))
  Class: Eq_8
  DataType: (ptr64 void)
  OrigDataType: 
T_24: (in 0x4005C5<64> @ 0000000000400434 : word64)
  Class: Eq_17
  DataType: (ptr64 Eq_17)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_25: (in SLICE(qwArg00, int32, 0) @ 0000000000400434 : int32)
  Class: Eq_18
  DataType: int32
  OrigDataType: int32
T_26: (in &ptrArg08 @ 0000000000400434 : (ptr64 (ptr64 char)))
  Class: Eq_19
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_27: (in 0x400620<64> @ 0000000000400434 : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn void ()))
T_28: (in 0x4006B0<64> @ 0000000000400434 : word64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn void ()))
T_29: (in __libc_start_main(&g_t4005C5, (int32) qwArg00, &ptrArg08, &g_t400620, &g_t4006B0, rdx, fp) @ 0000000000400434 : int32)
  Class: Eq_29
  DataType: int32
  OrigDataType: int32
T_30: (in __halt @ 0000000000400439 : ptr32)
  Class: Eq_30
  DataType: (ptr32 Eq_30)
  OrigDataType: (ptr32 (fn T_32 ()))
T_31: (in signature of __halt : void)
  Class: Eq_30
  DataType: (ptr32 Eq_30)
  OrigDataType: 
T_32: (in __halt() @ 0000000000400439 : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in __gmon_start__ @ 000000000040044A : ptr64)
  Class: Eq_33
  DataType: word64
  OrigDataType: 
T_34: (in signature of __gmon_start__ : void)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: 
T_35: (in 0<64> @ 000000000040044A : word64)
  Class: Eq_33
  DataType: word64
  OrigDataType: word64
T_36: (in __gmon_start__ == 0<64> @ 000000000040044A : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in __gmon_start__ @ 000000000040044C : ptr64)
  Class: Eq_37
  DataType: (ptr64 Eq_37)
  OrigDataType: (ptr64 (fn T_38 ()))
T_38: (in __gmon_start__() @ 000000000040044C : word64)
  Class: Eq_38
  DataType: word64
  OrigDataType: word64
T_39: (in true @ 0000000000400473 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in true @ 000000000040047F : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in 0<u64> @ 0000000000400487 : uint64)
  Class: Eq_41
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_42: (in false @ 00000000004004B0 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in true @ 00000000004004BC : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0<u64> @ 00000000004004C7 : uint64)
  Class: Eq_44
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_45: (in 0000000000601038 @ 00000000004004D7 : ptr64)
  Class: Eq_45
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_46 t0000)))
T_46: (in Mem0[0x0000000000601038<p64>:byte] @ 00000000004004D7 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0<8> @ 00000000004004D7 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in g_b601038 != 0<8> @ 00000000004004D7 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in deregister_tm_clones @ 00000000004004DD : ptr64)
  Class: Eq_49
  DataType: (ptr64 Eq_49)
  OrigDataType: (ptr64 (fn T_51 ()))
T_50: (in signature of deregister_tm_clones @ 0000000000400460 : void)
  Class: Eq_49
  DataType: (ptr64 Eq_49)
  OrigDataType: 
T_51: (in deregister_tm_clones() @ 00000000004004DD : void)
  Class: Eq_51
  DataType: void
  OrigDataType: void
T_52: (in 1<8> @ 00000000004004E3 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_53: (in Mem20[0x0000000000601038<p64>:byte] @ 00000000004004E3 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_54: (in 0000000000600E08 @ 00000000004004F8 : ptr64)
  Class: Eq_54
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_55 t0000)))
T_55: (in Mem0[0x0000000000600E08<p64>:word64] @ 00000000004004F8 : word64)
  Class: Eq_55
  DataType: word64
  OrigDataType: word64
T_56: (in 0<64> @ 00000000004004F8 : word64)
  Class: Eq_55
  DataType: word64
  OrigDataType: word64
T_57: (in g_qw600E08 == 0<64> @ 00000000004004F8 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in true @ 0000000000400502 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in fn0000000000000000 @ 000000000040050D : ptr64)
  Class: Eq_59
  DataType: (ptr64 Eq_59)
  OrigDataType: (ptr64 (fn T_62 (T_61)))
T_60: (in signature of fn0000000000000000 : void)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: 
T_61: (in 0x600E08<u64> @ 000000000040050D : uint64)
  Class: Eq_61
  DataType: uint64
  OrigDataType: uint64
T_62: (in fn0000000000000000(0x600E08<u64>) @ 000000000040050D : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in register_tm_clones @ 0000000000400510 : ptr64)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: (ptr64 (fn T_65 ()))
T_64: (in signature of register_tm_clones @ 0000000000400490 : void)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: 
T_65: (in register_tm_clones() @ 0000000000400510 : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
T_66: (in register_tm_clones @ 0000000000400518 : ptr64)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: (ptr64 (fn T_67 ()))
T_67: (in register_tm_clones() @ 0000000000400518 : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
T_68: (in eax @ 0000000000400518 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in rdi @ 0000000000400518 : (arr byte))
  Class: Eq_69
  DataType: (ptr64 (arr byte))
  OrigDataType: (ptr64 (struct (0 (arr T_167) a0000)))
T_70: (in dwLoc0C_131 @ 0000000000400528 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in 0<32> @ 0000000000400528 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_72: (in rax_118 @ 00000000004005A1 : uint64)
  Class: Eq_72
  DataType: uint64
  OrigDataType: uint64
T_73: (in CONVERT(dwLoc0C_131, word32, int64) @ 00000000004005B3 : int64)
  Class: Eq_73
  DataType: int64
  OrigDataType: int64
T_74: (in rdi + CONVERT(dwLoc0C_131, word32, int64) @ 00000000004005B3 : word64)
  Class: Eq_74
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_75 t0000)))
T_75: (in Mem12[rdi + CONVERT(dwLoc0C_131, word32, int64):byte] @ 00000000004005B3 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0<8> @ 00000000004005B3 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_77: (in rdi[(int64) dwLoc0C_131] != 0<8> @ 00000000004005B3 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in al_43 @ 0000000000400546 : ui8)
  Class: Eq_78
  DataType: ui8
  OrigDataType: ui8
T_79: (in SLICE(dwLoc0C_131, byte, 0) @ 0000000000400546 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in CONVERT(dwLoc0C_131, word32, int64) @ 0000000000400546 : int64)
  Class: Eq_80
  DataType: int64
  OrigDataType: int64
T_81: (in rdi + CONVERT(dwLoc0C_131, word32, int64) @ 0000000000400546 : word64)
  Class: Eq_81
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_82 t0000)))
T_82: (in Mem12[rdi + CONVERT(dwLoc0C_131, word32, int64):byte] @ 0000000000400546 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_83: (in (byte) dwLoc0C_131 ^ rdi[(int64) dwLoc0C_131] @ 0000000000400546 : byte)
  Class: Eq_78
  DataType: ui8
  OrigDataType: ui8
T_84: (in CONVERT(dwLoc0C_131, word32, int64) @ 0000000000400594 : int64)
  Class: Eq_84
  DataType: int64
  OrigDataType: int64
T_85: (in 6295584<i64> @ 0000000000400594 : int64)
  Class: Eq_85
  DataType: (ptr64 (arr byte))
  OrigDataType: (ptr64 (struct (0 (arr T_171) a0000)))
T_86: (in CONVERT(dwLoc0C_131, word32, int64) + 6295584<i64> @ 0000000000400594 : word64)
  Class: Eq_86
  DataType: int64
  OrigDataType: int64
T_87: (in Mem104[CONVERT(dwLoc0C_131, word32, int64) + 6295584<i64>:byte] @ 0000000000400594 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in CONVERT(al_43, byte, word32) @ 0000000000400594 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in 8<8> @ 0000000000400594 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in SLICE(dwLoc0C_131, byte, 0) @ 0000000000400594 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in 9<8> @ 0000000000400594 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in (byte) dwLoc0C_131 ^ 9<8> @ 0000000000400594 : byte)
  Class: Eq_92
  DataType: ui8
  OrigDataType: ui8
T_93: (in 3<8> @ 0000000000400594 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in ((byte) dwLoc0C_131 ^ 9<8>) & 3<8> @ 0000000000400594 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in 8<8> - (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>) @ 0000000000400594 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in (word32) al_43 >> 8<8> - (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>) @ 0000000000400594 : word32)
  Class: Eq_96
  DataType: int32
  OrigDataType: int32
T_97: (in SLICE(CONVERT(al_43, byte, word32) >> 8<8> - ((SLICE(dwLoc0C_131, byte, 0) ^ 9<8>) & 3<8>), byte, 0) @ 0000000000400594 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in SLICE(dwLoc0C_131, byte, 0) @ 0000000000400594 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 9<8> @ 0000000000400594 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in (byte) dwLoc0C_131 ^ 9<8> @ 0000000000400594 : byte)
  Class: Eq_100
  DataType: ui8
  OrigDataType: ui8
T_101: (in 3<8> @ 0000000000400594 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in ((byte) dwLoc0C_131 ^ 9<8>) & 3<8> @ 0000000000400594 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in al_43 << (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>) @ 0000000000400594 : byte)
  Class: Eq_103
  DataType: ui8
  OrigDataType: ui8
T_104: (in (byte) ((word32) al_43 >> 8<8> - (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>)) | al_43 << (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>) @ 0000000000400594 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in 8<8> @ 0000000000400594 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in ((byte) ((word32) al_43 >> 8<8> - (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>)) | al_43 << (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>)) + 8<8> @ 0000000000400594 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_107: (in g_a601020[(int64) dwLoc0C_131] == ((byte) ((word32) al_43 >> 8<8> - (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>)) | al_43 << (((byte) dwLoc0C_131 ^ 9<8>) & 3<8>)) + 8<8> @ 0000000000400594 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in 0x17<32> @ 00000000004005C0 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_109: (in dwLoc0C_131 == 0x17<32> @ 00000000004005C0 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in CONVERT(dwLoc0C_131 == 0x17<32>, bool, uint64) @ 00000000004005C0 : uint64)
  Class: Eq_72
  DataType: uint64
  OrigDataType: uint64
T_111: (in 1<32> @ 000000000040059D : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in dwLoc0C_131 + 1<32> @ 000000000040059D : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_113: (in 0<u64> @ 0000000000400596 : uint64)
  Class: Eq_72
  DataType: uint64
  OrigDataType: uint64
T_114: (in SLICE(rax_118, word32, 0) @ 00000000004005C4 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_115: (in rsi @ 00000000004005C4 : (ptr64 Eq_115))
  Class: Eq_115
  DataType: (ptr64 Eq_115)
  OrigDataType: (ptr64 (struct (8 T_123 t0008)))
T_116: (in edi @ 00000000004005C4 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in 2<32> @ 00000000004005D8 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_118: (in edi == 2<32> @ 00000000004005D8 : bool)
  Class: Eq_118
  DataType: bool
  OrigDataType: bool
T_119: (in verify @ 0000000000400600 : ptr64)
  Class: Eq_119
  DataType: (ptr64 Eq_119)
  OrigDataType: (ptr64 (fn T_124 (T_123)))
T_120: (in signature of verify @ 0000000000400520 : void)
  Class: Eq_119
  DataType: (ptr64 Eq_119)
  OrigDataType: 
T_121: (in 8<64> @ 0000000000400600 : word64)
  Class: Eq_121
  DataType: word64
  OrigDataType: word64
T_122: (in rsi + 8<64> @ 0000000000400600 : word64)
  Class: Eq_122
  DataType: word64
  OrigDataType: word64
T_123: (in Mem12[rsi + 8<64>:word64] @ 0000000000400600 : word64)
  Class: Eq_69
  DataType: (ptr64 (arr byte))
  OrigDataType: word64
T_124: (in verify(rsi->ptr0008) @ 0000000000400600 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in 0<32> @ 0000000000400600 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_126: (in verify(rsi->ptr0008) == 0<32> @ 0000000000400600 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in puts @ 00000000004005DF : ptr64)
  Class: Eq_127
  DataType: (ptr64 Eq_127)
  OrigDataType: (ptr64 (fn T_131 (T_130)))
T_128: (in signature of puts : void)
  Class: Eq_127
  DataType: (ptr64 Eq_127)
  OrigDataType: 
T_129: (in s @ 00000000004005DF : (ptr64 char))
  Class: Eq_129
  DataType: (ptr64 char)
  OrigDataType: 
T_130: (in 0x4006C8<u64> @ 00000000004005DF : uint64)
  Class: Eq_129
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_131: (in puts("You need to enter the secret key!") @ 00000000004005DF : int32)
  Class: Eq_131
  DataType: int32
  OrigDataType: int32
T_132: (in puts @ 0000000000400613 : ptr64)
  Class: Eq_132
  DataType: (ptr64 Eq_132)
  OrigDataType: (ptr64 (fn T_136 (T_135)))
T_133: (in signature of puts : void)
  Class: Eq_132
  DataType: (ptr64 Eq_132)
  OrigDataType: 
T_134: (in s @ 0000000000400613 : (ptr64 char))
  Class: Eq_134
  DataType: (ptr64 char)
  OrigDataType: 
T_135: (in 0x400718<u64> @ 0000000000400613 : uint64)
  Class: Eq_134
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_136: (in puts("I'm sorry, that's the wrong secret key!") @ 0000000000400613 : int32)
  Class: Eq_136
  DataType: int32
  OrigDataType: int32
T_137: (in puts @ 0000000000400607 : ptr64)
  Class: Eq_137
  DataType: (ptr64 Eq_137)
  OrigDataType: (ptr64 (fn T_141 (T_140)))
T_138: (in signature of puts : void)
  Class: Eq_137
  DataType: (ptr64 Eq_137)
  OrigDataType: 
T_139: (in s @ 0000000000400607 : (ptr64 char))
  Class: Eq_139
  DataType: (ptr64 char)
  OrigDataType: 
T_140: (in 0x4006F0<u64> @ 0000000000400607 : uint64)
  Class: Eq_139
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_141: (in puts("Correct! that is the secret key!") @ 0000000000400607 : int32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in rdx @ 0000000000400607 : word64)
  Class: Eq_142
  DataType: word64
  OrigDataType: word64
T_143: (in rsi @ 0000000000400607 : word64)
  Class: Eq_143
  DataType: word64
  OrigDataType: word64
T_144: (in edi @ 0000000000400607 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in rdi @ 0000000000400620 : word64)
  Class: Eq_145
  DataType: word64
  OrigDataType: word64
T_146: (in SLICE(rdi, word32, 0) @ 0000000000400620 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_147: (in _init @ 0000000000400660 : ptr64)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: (ptr64 (fn T_149 ()))
T_148: (in signature of _init @ 00000000004003C8 : void)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: 
T_149: (in _init() @ 0000000000400660 : void)
  Class: Eq_149
  DataType: void
  OrigDataType: void
T_150: (in rbp_19 @ 0000000000400650 : int64)
  Class: Eq_150
  DataType: int64
  OrigDataType: int64
T_151: (in 0000000000600E00 @ 0000000000400650 : ptr64)
  Class: Eq_151
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_152: (in 0000000000600DF8 @ 0000000000400650 : ptr64)
  Class: Eq_152
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (union ((ptr64 (arr Eq_173)) u1) ((ptr64 (arr Eq_173)) u0))
T_153: (in 0x600E00<u64> - g_a600DF8 @ 0000000000400650 : word64)
  Class: Eq_150
  DataType: int64
  OrigDataType: int64
T_154: (in 3<64> @ 0000000000400668 : word64)
  Class: Eq_154
  DataType: word64
  OrigDataType: word64
T_155: (in rbp_19 >> 3<64> @ 0000000000400668 : word64)
  Class: Eq_155
  DataType: int64
  OrigDataType: int64
T_156: (in 0<64> @ 0000000000400668 : word64)
  Class: Eq_155
  DataType: int64
  OrigDataType: word64
T_157: (in rbp_19 >> 3<64> == 0<64> @ 0000000000400668 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in rbx_41 @ 000000000040066A : Eq_158)
  Class: Eq_158
  DataType: Eq_158
  OrigDataType: word64
T_159: (in 0<u64> @ 000000000040066A : uint64)
  Class: Eq_158
  DataType: uint64
  OrigDataType: uint64
T_160: (in 8<64> @ 0000000000400679 : word64)
  Class: Eq_160
  DataType: ui64
  OrigDataType: ui64
T_161: (in rbx_41 * 8<64> @ 0000000000400679 : word64)
  Class: Eq_161
  DataType: ui64
  OrigDataType: ui64
T_162: (in 0x0000000000600DF8<p64>[rbx_41 * 8<64>] @ 0000000000400679 : word64)
  Class: Eq_162
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_163: (in 1<64> @ 000000000040067D : word64)
  Class: Eq_163
  DataType: word64
  OrigDataType: word64
T_164: (in rbx_41 + 1<64> @ 000000000040067D : word64)
  Class: Eq_158
  DataType: Eq_158
  OrigDataType: uint64
T_165: (in rbp_19 >> 3<64> @ 0000000000400684 : word64)
  Class: Eq_158
  DataType: Eq_158
  OrigDataType: int64
T_166: (in rbx_41 != rbp_19 >> 3<64> @ 0000000000400684 : bool)
  Class: Eq_166
  DataType: bool
  OrigDataType: bool
T_167:
  Class: Eq_167
  DataType: byte
  OrigDataType: (struct 0001 (0 T_75 t0000))
T_168:
  Class: Eq_168
  DataType: (arr byte)
  OrigDataType: (arr T_167)
T_169:
  Class: Eq_167
  DataType: byte
  OrigDataType: (struct 0001 (0 T_82 t0000))
T_170:
  Class: Eq_170
  DataType: (arr byte)
  OrigDataType: (arr T_169)
T_171:
  Class: Eq_171
  DataType: byte
  OrigDataType: (struct 0001 (0 T_87 t0000))
T_172:
  Class: Eq_172
  DataType: (arr byte)
  OrigDataType: (arr T_171)
T_173:
  Class: Eq_173
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_162 t0000))
T_174:
  Class: Eq_174
  DataType: (arr (ptr64 code))
  OrigDataType: (arr T_173)
*/
typedef struct Globals {
	<anonymous> t4003F6;	// 4003F6
	<anonymous> t400406;	// 400406
	Eq_17 t4005C5;	// 4005C5
	Eq_20 t400620;	// 400620
	Eq_21 t4006B0;	// 4006B0
	char str4006C8[];	// 4006C8
	char str4006F0[];	// 4006F0
	char str400718[];	// 400718
	<anonymous> * a600DF8[];	// 600DF8
	word64 qw600E08;	// 600E08
	<anonymous> * __gmon_start___GOT;	// 600FE0
	<anonymous> * puts_GOT;	// 601000
	<anonymous> * __libc_start_main_GOT;	// 601008
	byte a601020[];	// 601020
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_10)(char * *);

typedef int32 (Eq_15)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_17)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_20)();

typedef void (Eq_21)();

typedef void (Eq_30)();

typedef word64 (Eq_37)();

typedef void (Eq_49)();

typedef void (Eq_59)(uint64);

typedef void (Eq_63)();

typedef struct Eq_115 {
	byte (* ptr0008)[];	// 8
} Eq_115;

typedef word32 (Eq_119)(byte *[]);

typedef int32 (Eq_127)(char *);

typedef int32 (Eq_132)(char *);

typedef int32 (Eq_137)(char *);

typedef void (Eq_147)();

typedef union Eq_151 {
	int64 u0;
	ptr64 u1;
} Eq_151;

typedef union Eq_158 {
	int64 u0;
	uint64 u1;
} Eq_158;

