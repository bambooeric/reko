// hello_O1.h
// Generated by decompiling hello_O1
// using Reko decompiler version 0.11.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(1036 code t1036)
		(1046 code t1046)
		(1056 code t1056)
		(1066 code t1066)
		(11E0 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))) t11E0)
		(1280 (fn void ()) t1280)
		(12E0 (fn void ()) t12E0)
		(2074 real32 r2074)
		(2078 real32 r2078)
		(207C real32 r207C)
		(3DD8 (arr (ptr64 code)) a3DD8)
		(3FD8 (ptr64 code) _ITM_deregisterTMCloneTable_GOT)
		(3FE0 (ptr64 code) __libc_start_main_GOT)
		(3FE8 (ptr64 code) __gmon_start___GOT)
		(3FF0 (ptr64 code) _ITM_registerTMCloneTable_GOT)
		(3FF8 (ptr64 code) __cxa_finalize_GOT)
		(4018 (ptr64 code) puts_GOT)
		(4020 (ptr64 code) printf_GOT)
		(4028 (ptr64 code) strtof_GOT)
		(4030 (ptr64 code) sqrtf_GOT)
		(4040 word64 qw4040)
		(4048 byte b4048))
	globals_t (in globals @ 00000000 : (ptr64 (struct "Globals")))
Eq_6: (fn void ())
	T_6 (in __gmon_start__ @ 00001010 : ptr64)
Eq_8: (fn void ())
	T_8 (in rdx @ 00001010 : (ptr64 Eq_8))
	T_25 (in rtld_fini @ 000010A4 : (ptr64 (fn void ())))
Eq_12: (fn void (ptr64))
	T_12 (in __align_stack<word64> @ 00001089 : ptr32)
	T_13 (in signature of __align_stack @ 00000000 : void)
Eq_18: (fn int32 ((ptr64 Eq_20), int32, (ptr64 (ptr64 char)), (ptr64 Eq_23), (ptr64 Eq_24), (ptr64 Eq_8), (ptr64 void)))
	T_18 (in __libc_start_main @ 000010A4 : ptr64)
	T_19 (in signature of __libc_start_main @ 00000000 : void)
Eq_20: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_20 (in main @ 000010A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_27 (in 00000000000011E0 @ 000010A4 : ptr64)
Eq_23: (fn void ())
	T_23 (in init @ 000010A4 : (ptr64 (fn void ())))
	T_30 (in 0000000000001280 @ 000010A4 : ptr64)
Eq_24: (fn void ())
	T_24 (in fini @ 000010A4 : (ptr64 (fn void ())))
	T_31 (in 00000000000012E0 @ 000010A4 : ptr64)
Eq_33: (fn void ())
	T_33 (in __hlt @ 000010AA : ptr32)
	T_34 (in signature of __hlt @ 00000000 : void)
Eq_39: (fn void ())
	T_39 (in _ITM_deregisterTMCloneTable @ 000010CD : ptr64)
	T_41 (in 0<64> @ 000010CD : word64)
Eq_44: (union "Eq_44" (int64 u0) (uint64 u1))
	T_44 (in rsi_6 @ 000010EE : Eq_44)
	T_47 (in 0x4048<u64> - 0x4048<u64> @ 00000000 : word64)
Eq_45: (union "Eq_45" (int64 u0) (ptr64 u1))
	T_45 (in 0000000000004048 @ 000010EE : ptr64)
Eq_46: (union "Eq_46" (int64 u0) (ptr64 u1))
	T_46 (in 0000000000004048 @ 000010EE : ptr64)
Eq_49: (union "Eq_49" (int64 u0) (uint64 u1))
	T_49 (in rsi_6 >> 0x3F<64> @ 00000000 : word64)
Eq_51: (union "Eq_51" (int64 u0) (uint64 u1))
	T_51 (in rsi_6 >> 3<64> @ 00000000 : word64)
Eq_52: (union "Eq_52" (int64 u0) (uint64 u1))
	T_52 (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) @ 00001102 : word64)
Eq_57: (fn void ())
	T_57 (in _ITM_registerTMCloneTable @ 0000110E : ptr64)
	T_59 (in 0<64> @ 0000110E : word64)
Eq_70: (fn void ())
	T_70 (in deregister_tm_clones @ 00001147 : ptr64)
	T_71 (in signature of deregister_tm_clones @ 000010B0 : void)
Eq_76: (fn void (word64))
	T_76 (in __cxa_finalize @ 00001142 : ptr64)
Eq_81: (fn void ())
	T_81 (in register_tm_clones @ 00001160 : ptr64)
	T_82 (in signature of register_tm_clones @ 000010E0 : void)
Eq_88: (union "Eq_88" (uint32 u0) (real32 u1))
	T_88 (in SLICE(xmm0, real32, 0) @ 0000117E : real32)
Eq_111: (union "Eq_111" (real32 u0) (up32 u1))
	T_111 (in SLICE(xmm0, real32, 0) @ 000011AD : real32)
	T_112 (in 0.0F @ 000011AD : real32)
Eq_114: (fn real32 (real32))
	T_114 (in sqrtf @ 000011C7 : ptr64)
	T_115 (in signature of sqrtf @ 00000000 : void)
Eq_129: (fn real64 (Eq_131))
	T_129 (in fsqrt @ 000011C2 : ptr32)
	T_130 (in signature of fsqrt @ 00000000 : void)
Eq_131: (union "Eq_131" (real32 u0) (real64 u1))
	T_131 (in p1 @ 000011C2 : real64)
	T_132 (in SLICE(xmm0, real32, 0) @ 000011C2 : real32)
Eq_136: (struct "Eq_136" (8 (ptr64 char) ptr0008) (10 (ptr64 char) ptr0010))
	T_136 (in rsi @ 000011C2 : (ptr64 Eq_136))
Eq_138: (fn int32 ((ptr64 char), (ptr64 char)))
	T_138 (in printf @ 000011F8 : ptr64)
	T_139 (in signature of printf @ 00000000 : void)
Eq_147: (fn int32 ((ptr64 char)))
	T_147 (in puts @ 00001204 : ptr64)
	T_148 (in signature of puts @ 00000000 : void)
Eq_158: (fn real32 ((ptr64 char), (ptr64 (ptr64 char))))
	T_158 (in strtof @ 00001212 : ptr64)
	T_159 (in signature of strtof @ 00000000 : void)
Eq_168: (fn word128 (word128, int32))
	T_168 (in Q_rsqrt @ 00001222 : ptr64)
	T_169 (in signature of Q_rsqrt @ 00001169 : void)
Eq_173: (fn word128 (word128))
	T_173 (in lib_rsqrt @ 00001233 : ptr64)
	T_174 (in signature of lib_rsqrt @ 000011A6 : void)
Eq_179: (fn int32 ((ptr64 char), real64))
	T_179 (in printf @ 0000124F : ptr64)
	T_180 (in signature of printf @ 00000000 : void)
Eq_185: (fn int32 ((ptr64 char), real64))
	T_185 (in printf @ 0000126A : ptr64)
	T_186 (in signature of printf @ 00000000 : void)
Eq_196: (fn void ())
	T_196 (in _init @ 000012A8 : ptr64)
	T_197 (in signature of _init @ 00001000 : void)
Eq_200: (union "Eq_200" (int64 u0) (ptr64 u1))
	T_200 (in 0000000000003DE0 @ 000012A1 : ptr64)
Eq_201: (union "Eq_201" (int64 u0) (ptr64 u1))
	T_201 (in 0000000000003DD8 @ 000012A1 : ptr64)
Eq_207: (union "Eq_207" (int64 u0) (uint64 u1))
	T_207 (in rbx_43 @ 000012B3 : Eq_207)
	T_208 (in 0<u64> @ 000012B3 : uint64)
	T_214 (in rbx_43 + 1<64> @ 000012C5 : word64)
	T_215 (in rbp_31 >> 3<64> @ 00000000 : word64)
// Type Variables ////////////
globals_t: (in globals @ 00000000 : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ @ 0000100E : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ @ 00000000 : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0<64> @ 0000100E : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0<64> @ 00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ @ 00001010 : ptr64)
  Class: Eq_6
  DataType: (ptr64 Eq_6)
  OrigDataType: (ptr64 (fn T_7 ()))
T_7: (in __gmon_start__() @ 00001010 : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in rdx @ 00001010 : (ptr64 Eq_8))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: (ptr64 (fn void ()))
T_9: (in dwArg00 @ 00001010 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in fp @ 00001080 : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_11: (in qwArg00 @ 00001080 : word64)
  Class: Eq_11
  DataType: word64
  OrigDataType: word64
T_12: (in __align_stack<word64> @ 00001089 : ptr32)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: (ptr32 (fn T_17 (T_16)))
T_13: (in signature of __align_stack @ 00000000 : void)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: 
T_14: (in p1 @ 00001089 : word64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: 
T_15: (in 8<i64> @ 00001089 : int64)
  Class: Eq_15
  DataType: int64
  OrigDataType: int64
T_16: (in fp + 8<i64> @ 00001089 : word64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: ptr64
T_17: (in __align_stack<word64>((char *) fp + 8<i32>) @ 00001089 : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __libc_start_main @ 000010A4 : ptr64)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: (ptr64 (fn T_32 (T_27, T_28, T_29, T_30, T_31, T_8, T_10)))
T_19: (in signature of __libc_start_main @ 00000000 : void)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: 
T_20: (in main @ 000010A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in argc @ 000010A4 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: 
T_22: (in ubp_av @ 000010A4 : (ptr64 (ptr64 char)))
  Class: Eq_22
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_23: (in init @ 000010A4 : (ptr64 (fn void ())))
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: 
T_24: (in fini @ 000010A4 : (ptr64 (fn void ())))
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: 
T_25: (in rtld_fini @ 000010A4 : (ptr64 (fn void ())))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: 
T_26: (in stack_end @ 000010A4 : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: 
T_27: (in 00000000000011E0 @ 000010A4 : ptr64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_28: (in SLICE(qwArg00, int32, 0) @ 000010A4 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_29: (in fp + 8<i64> @ 000010A4 : word64)
  Class: Eq_22
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_30: (in 0000000000001280 @ 000010A4 : ptr64)
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: (ptr64 (fn void ()))
T_31: (in 00000000000012E0 @ 000010A4 : ptr64)
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: (ptr64 (fn void ()))
T_32: (in __libc_start_main(&g_t11E0, (int32) qwArg00, (char *) fp + 8<i32>, &g_t1280, &g_t12E0, rdx, fp) @ 000010A4 : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in __hlt @ 000010AA : ptr32)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: (ptr32 (fn T_35 ()))
T_34: (in signature of __hlt @ 00000000 : void)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: 
T_35: (in __hlt() @ 000010AA : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in 0000000000004048 @ 000010C1 : ptr64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: ptr64
T_37: (in 0000000000004048 @ 000010C1 : ptr64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: ptr64
T_38: (in 0x4048<u64> == 0x4048<u64> @ 00000000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in _ITM_deregisterTMCloneTable @ 000010CD : ptr64)
  Class: Eq_39
  DataType: (ptr64 Eq_39)
  OrigDataType: (ptr64 (fn T_43 ()))
T_40: (in signature of _ITM_deregisterTMCloneTable @ 00000000 : void)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: 
T_41: (in 0<64> @ 000010CD : word64)
  Class: Eq_39
  DataType: (ptr64 Eq_39)
  OrigDataType: word64
T_42: (in _ITM_deregisterTMCloneTable == null @ 00000000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in _ITM_deregisterTMCloneTable() @ 000010CF : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in rsi_6 @ 000010EE : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (int64 u0) (uint64 u1))
T_45: (in 0000000000004048 @ 000010EE : ptr64)
  Class: Eq_45
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_46: (in 0000000000004048 @ 000010EE : ptr64)
  Class: Eq_46
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_47: (in 0x4048<u64> - 0x4048<u64> @ 00000000 : word64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: int64
T_48: (in 0x3F<64> @ 00001102 : word64)
  Class: Eq_48
  DataType: word64
  OrigDataType: word64
T_49: (in rsi_6 >> 0x3F<64> @ 00000000 : word64)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (int64 u1) (uint64 u0))
T_50: (in 3<64> @ 00001102 : word64)
  Class: Eq_50
  DataType: word64
  OrigDataType: word64
T_51: (in rsi_6 >> 3<64> @ 00000000 : word64)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: (union (int64 u1) (uint64 u0))
T_52: (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) @ 00001102 : word64)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: (union (int64 u1) (uint64 u0))
T_53: (in 1<64> @ 00001102 : word64)
  Class: Eq_53
  DataType: word64
  OrigDataType: word64
T_54: (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) >> 1<64> @ 00001102 : word64)
  Class: Eq_54
  DataType: int64
  OrigDataType: int64
T_55: (in 0<64> @ 00001102 : word64)
  Class: Eq_54
  DataType: int64
  OrigDataType: word64
T_56: (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) >> 1<64> == 0<64> @ 00001102 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in _ITM_registerTMCloneTable @ 0000110E : ptr64)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: (ptr64 (fn T_61 ()))
T_58: (in signature of _ITM_registerTMCloneTable @ 00000000 : void)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: 
T_59: (in 0<64> @ 0000110E : word64)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: word64
T_60: (in _ITM_registerTMCloneTable == null @ 00000000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in _ITM_registerTMCloneTable() @ 00001110 : void)
  Class: Eq_61
  DataType: void
  OrigDataType: void
T_62: (in 0000000000004048 @ 0000112B : ptr64)
  Class: Eq_62
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_63 t0000)))
T_63: (in Mem0[0x0000000000004048<p64>:byte] @ 0000112B : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0<8> @ 0000112B : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in g_b4048 != 0<8> @ 00000000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in __cxa_finalize @ 00001139 : ptr64)
  Class: Eq_66
  DataType: word64
  OrigDataType: 
T_67: (in signature of __cxa_finalize @ 00000000 : void)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: 
T_68: (in 0<64> @ 00001139 : word64)
  Class: Eq_66
  DataType: word64
  OrigDataType: word64
T_69: (in __cxa_finalize == 0<64> @ 00000000 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in deregister_tm_clones @ 00001147 : ptr64)
  Class: Eq_70
  DataType: (ptr64 Eq_70)
  OrigDataType: (ptr64 (fn T_72 ()))
T_71: (in signature of deregister_tm_clones @ 000010B0 : void)
  Class: Eq_70
  DataType: (ptr64 Eq_70)
  OrigDataType: 
T_72: (in deregister_tm_clones() @ 00001147 : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_73: (in 1<8> @ 0000114C : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_74: (in 0000000000004048 @ 0000114C : ptr64)
  Class: Eq_74
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_75 t0000)))
T_75: (in Mem22[0x0000000000004048<p64>:byte] @ 0000114C : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_76: (in __cxa_finalize @ 00001142 : ptr64)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: (ptr64 (fn T_80 (T_79)))
T_77: (in signature of __cxa_finalize @ 00000000 : void)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: 
T_78: (in 0000000000004040 @ 00001142 : ptr64)
  Class: Eq_78
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_79 t0000)))
T_79: (in Mem9[0x0000000000004040<p64>:word64] @ 00001142 : word64)
  Class: Eq_79
  DataType: word64
  OrigDataType: word64
T_80: (in __cxa_finalize(g_qw4040) @ 00001142 : void)
  Class: Eq_80
  DataType: void
  OrigDataType: void
T_81: (in register_tm_clones @ 00001160 : ptr64)
  Class: Eq_81
  DataType: (ptr64 Eq_81)
  OrigDataType: (ptr64 (fn T_83 ()))
T_82: (in signature of register_tm_clones @ 000010E0 : void)
  Class: Eq_81
  DataType: (ptr64 Eq_81)
  OrigDataType: 
T_83: (in register_tm_clones() @ 00001160 : void)
  Class: Eq_83
  DataType: void
  OrigDataType: void
T_84: (in xmm0 @ 00001160 : word128)
  Class: Eq_84
  DataType: word128
  OrigDataType: word128
T_85: (in dwArg00 @ 00001160 : int32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_86: (in xmm2_16 @ 0000117E : word128)
  Class: Eq_86
  DataType: word128
  OrigDataType: word128
T_87: (in 0x5F3759DF<32> @ 0000117E : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in SLICE(xmm0, real32, 0) @ 0000117E : real32)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: (union (uint32 u1) (real32 u0))
T_89: (in SEQ(dwArg00, SLICE(xmm0, real32, 0)) @ 0000117E : word64)
  Class: Eq_89
  DataType: int64
  OrigDataType: int64
T_90: (in 1<64> @ 0000117E : word64)
  Class: Eq_90
  DataType: word64
  OrigDataType: word64
T_91: (in SEQ(dwArg00, (real32) xmm0) >> 1<64> @ 00000000 : word64)
  Class: Eq_91
  DataType: int64
  OrigDataType: int64
T_92: (in SLICE(SEQ(dwArg00, SLICE(xmm0, real32, 0)) >> 1<64>, word32, 0) @ 0000117E : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in 0x5F3759DF<32> - (word32) (SEQ(dwArg00, (real32) xmm0) >> 1<64>) @ 00000000 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in CONVERT(0x5F3759DF<32> - SLICE(SEQ(dwArg00, SLICE(xmm0, real32, 0)) >> 1<64>, word32, 0), word32, word128) @ 0000117E : word128)
  Class: Eq_86
  DataType: word128
  OrigDataType: word128
T_95: (in 0<96> @ 000011A5 : word96)
  Class: Eq_95
  DataType: word96
  OrigDataType: word96
T_96: (in 0000000000002078 @ 000011A5 : ptr64)
  Class: Eq_96
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_97 t0000)))
T_97: (in Mem5[0x0000000000002078<p64>:real32] @ 000011A5 : real32)
  Class: Eq_97
  DataType: real32
  OrigDataType: real32
T_98: (in SLICE(xmm0, real32, 0) @ 000011A5 : real32)
  Class: Eq_98
  DataType: real32
  OrigDataType: real32
T_99: (in 0000000000002074 @ 000011A5 : ptr64)
  Class: Eq_99
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_100 t0000)))
T_100: (in Mem5[0x0000000000002074<p64>:real32] @ 000011A5 : real32)
  Class: Eq_100
  DataType: real32
  OrigDataType: real32
T_101: (in (real32) xmm0 * 0.5F @ 00000000 : real32)
  Class: Eq_101
  DataType: real32
  OrigDataType: real32
T_102: (in SLICE(xmm2_16, real32, 0) @ 000011A5 : real32)
  Class: Eq_102
  DataType: real32
  OrigDataType: real32
T_103: (in (real32) xmm0 * 0.5F * (real32) xmm2_16 @ 00000000 : real32)
  Class: Eq_103
  DataType: real32
  OrigDataType: real32
T_104: (in SLICE(xmm2_16, real32, 0) @ 000011A5 : real32)
  Class: Eq_104
  DataType: real32
  OrigDataType: real32
T_105: (in (real32) xmm0 * 0.5F * (real32) xmm2_16 * (real32) xmm2_16 @ 00000000 : real32)
  Class: Eq_105
  DataType: real32
  OrigDataType: real32
T_106: (in 1.5F - (((real32) xmm0 * 0.5F) * (real32) xmm2_16) * (real32) xmm2_16 @ 00000000 : real32)
  Class: Eq_106
  DataType: real32
  OrigDataType: real32
T_107: (in SLICE(xmm2_16, real32, 0) @ 000011A5 : real32)
  Class: Eq_107
  DataType: real32
  OrigDataType: real32
T_108: (in (1.5F - (((real32) xmm0 * 0.5F) * (real32) xmm2_16) * (real32) xmm2_16) * (real32) xmm2_16 @ 00000000 : real32)
  Class: Eq_108
  DataType: real32
  OrigDataType: real32
T_109: (in SEQ(0<96>, (Mem5[0x0000000000002078<p64>:real32] - ((SLICE(xmm0, real32, 0) * Mem5[0x0000000000002074<p64>:real32]) * SLICE(xmm2_16, real32, 0)) * SLICE(xmm2_16, real32, 0)) * SLICE(xmm2_16, real32, 0)) @ 000011A5 : word128)
  Class: Eq_84
  DataType: word128
  OrigDataType: word128
T_110: (in xmm0 @ 000011A5 : word128)
  Class: Eq_110
  DataType: word128
  OrigDataType: word128
T_111: (in SLICE(xmm0, real32, 0) @ 000011AD : real32)
  Class: Eq_111
  DataType: Eq_111
  OrigDataType: (union (real32 u0) (up32 u1))
T_112: (in 0.0F @ 000011AD : real32)
  Class: Eq_111
  DataType: real32
  OrigDataType: (union (real32 u0) (up32 u1))
T_113: (in (real32) xmm0 < 0.0F @ 00000000 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in sqrtf @ 000011C7 : ptr64)
  Class: Eq_114
  DataType: (ptr64 Eq_114)
  OrigDataType: (ptr64 (fn T_118 (T_116)))
T_115: (in signature of sqrtf @ 00000000 : void)
  Class: Eq_114
  DataType: (ptr64 Eq_114)
  OrigDataType: 
T_116: (in xmm0 @ 000011C7 : real32)
  Class: Eq_116
  DataType: real32
  OrigDataType: 
T_117: (in SLICE(xmm0, real32, 0) @ 000011C7 : real32)
  Class: Eq_116
  DataType: real32
  OrigDataType: real32
T_118: (in sqrtf((real32) xmm0) @ 000011C7 : real32)
  Class: Eq_118
  DataType: real32
  OrigDataType: real32
T_119: (in 0<96> @ 000011DF : word96)
  Class: Eq_119
  DataType: word96
  OrigDataType: word96
T_120: (in 000000000000207C @ 000011DF : ptr64)
  Class: Eq_120
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_121 t0000)))
T_121: (in Mem0[0x000000000000207C<p64>:real32] @ 000011DF : real32)
  Class: Eq_121
  DataType: real32
  OrigDataType: real32
T_122: (in SLICE(xmm0, real32, 0) @ 000011DF : real32)
  Class: Eq_116
  DataType: real32
  OrigDataType: real32
T_123: (in sqrtf((real32) xmm0) @ 000011DF : real32)
  Class: Eq_118
  DataType: real32
  OrigDataType: real32
T_124: (in 1.0F / sqrtf((real32) xmm0) @ 00000000 : real32)
  Class: Eq_124
  DataType: real32
  OrigDataType: real32
T_125: (in SEQ(0<96>, Mem0[0x000000000000207C<p64>:real32] / sqrtf((real32) xmm0)) @ 000011DF : word128)
  Class: Eq_110
  DataType: word128
  OrigDataType: word128
T_126: (in 0<96> @ 000011C2 : word96)
  Class: Eq_126
  DataType: word96
  OrigDataType: word96
T_127: (in 000000000000207C @ 000011C2 : ptr64)
  Class: Eq_127
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_128 t0000)))
T_128: (in Mem0[0x000000000000207C<p64>:real32] @ 000011C2 : real32)
  Class: Eq_121
  DataType: real32
  OrigDataType: real32
T_129: (in fsqrt @ 000011C2 : ptr32)
  Class: Eq_129
  DataType: (ptr32 Eq_129)
  OrigDataType: (ptr32 (fn T_133 (T_132)))
T_130: (in signature of fsqrt @ 00000000 : void)
  Class: Eq_129
  DataType: (ptr32 Eq_129)
  OrigDataType: 
T_131: (in p1 @ 000011C2 : real64)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: 
T_132: (in SLICE(xmm0, real32, 0) @ 000011C2 : real32)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: (union (real32 u0) (real64 u1))
T_133: (in fsqrt((real32) xmm0) @ 000011C2 : real64)
  Class: Eq_133
  DataType: real64
  OrigDataType: real64
T_134: (in 1.0F /32 fsqrt((real32) xmm0) @ 00000000 : real32)
  Class: Eq_134
  DataType: real32
  OrigDataType: real32
T_135: (in SEQ(0<96>, Mem0[0x000000000000207C<p64>:real32] /32 fsqrt((real32) xmm0)) @ 000011C2 : word128)
  Class: Eq_110
  DataType: word128
  OrigDataType: word128
T_136: (in rsi @ 000011C2 : (ptr64 Eq_136))
  Class: Eq_136
  DataType: (ptr64 Eq_136)
  OrigDataType: (ptr64 (struct (8 T_145 t0008) (10 T_155 t0010)))
T_137: (in dwLoc20 @ 000011E0 : int32)
  Class: Eq_85
  DataType: int32
  OrigDataType: word32
T_138: (in printf @ 000011F8 : ptr64)
  Class: Eq_138
  DataType: (ptr64 Eq_138)
  OrigDataType: (ptr64 (fn T_146 (T_142, T_145)))
T_139: (in signature of printf @ 00000000 : void)
  Class: Eq_138
  DataType: (ptr64 Eq_138)
  OrigDataType: 
T_140: (in format @ 000011F8 : (ptr64 char))
  Class: Eq_140
  DataType: (ptr64 char)
  OrigDataType: 
T_141: (in  @ 000011F8 : (ptr64 char))
  Class: Eq_141
  DataType: (ptr64 char)
  OrigDataType: 
T_142: (in 0000000000002008 @ 000011F8 : ptr64)
  Class: Eq_140
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_143: (in 8<i64> @ 000011F8 : int64)
  Class: Eq_143
  DataType: int64
  OrigDataType: int64
T_144: (in rsi + 8<i64> @ 000011F8 : word64)
  Class: Eq_144
  DataType: word64
  OrigDataType: word64
T_145: (in Mem6[rsi + 8<i64>:word64] @ 000011F8 : word64)
  Class: Eq_141
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_146: (in printf("Hello %s, I'm inside an archive.\n", rsi->ptr0008) @ 000011F8 : int32)
  Class: Eq_146
  DataType: int32
  OrigDataType: int32
T_147: (in puts @ 00001204 : ptr64)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: (ptr64 (fn T_151 (T_150)))
T_148: (in signature of puts @ 00000000 : void)
  Class: Eq_147
  DataType: (ptr64 Eq_147)
  OrigDataType: 
T_149: (in s @ 00001204 : (ptr64 char))
  Class: Eq_149
  DataType: (ptr64 char)
  OrigDataType: 
T_150: (in 0000000000002030 @ 00001204 : ptr64)
  Class: Eq_149
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_151: (in puts("Inverse square root computation.") @ 00001204 : int32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_152: (in rdi_18 @ 00001209 : (ptr64 char))
  Class: Eq_152
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_153: (in 16<i64> @ 00001209 : int64)
  Class: Eq_153
  DataType: int64
  OrigDataType: int64
T_154: (in rsi + 16<i64> @ 00001209 : word64)
  Class: Eq_154
  DataType: ptr64
  OrigDataType: ptr64
T_155: (in Mem6[rsi + 16<i64>:word64] @ 00001209 : word64)
  Class: Eq_152
  DataType: (ptr64 char)
  OrigDataType: word64
T_156: (in xmm0_21 @ 00001212 : word128)
  Class: Eq_84
  DataType: word128
  OrigDataType: word128
T_157: (in 0<96> @ 00001212 : word96)
  Class: Eq_157
  DataType: word96
  OrigDataType: word96
T_158: (in strtof @ 00001212 : ptr64)
  Class: Eq_158
  DataType: (ptr64 Eq_158)
  OrigDataType: (ptr64 (fn T_163 (T_152, T_162)))
T_159: (in signature of strtof @ 00000000 : void)
  Class: Eq_158
  DataType: (ptr64 Eq_158)
  OrigDataType: 
T_160: (in str @ 00001212 : (ptr64 char))
  Class: Eq_152
  DataType: (ptr64 char)
  OrigDataType: 
T_161: (in endptr @ 00001212 : (ptr64 (ptr64 char)))
  Class: Eq_161
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_162: (in 0<u64> @ 00001212 : uint64)
  Class: Eq_161
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_163: (in strtof(rdi_18, null) @ 00001212 : real32)
  Class: Eq_163
  DataType: real32
  OrigDataType: real32
T_164: (in SEQ(0<96>, strtof(rdi_18, null)) @ 00001212 : word128)
  Class: Eq_84
  DataType: word128
  OrigDataType: word128
T_165: (in rLoc10_61 @ 00001217 : real32)
  Class: Eq_163
  DataType: real32
  OrigDataType: real32
T_166: (in strtof(rdi_18, null) @ 00001217 : real32)
  Class: Eq_163
  DataType: real32
  OrigDataType: real32
T_167: (in rLoc0C_63 @ 00001222 : real32)
  Class: Eq_167
  DataType: real32
  OrigDataType: real32
T_168: (in Q_rsqrt @ 00001222 : ptr64)
  Class: Eq_168
  DataType: (ptr64 Eq_168)
  OrigDataType: (ptr64 (fn T_170 (T_156, T_137)))
T_169: (in signature of Q_rsqrt @ 00001169 : void)
  Class: Eq_168
  DataType: (ptr64 Eq_168)
  OrigDataType: 
T_170: (in Q_rsqrt(xmm0_21, dwLoc20) @ 00001222 : word128)
  Class: Eq_170
  DataType: word128
  OrigDataType: word128
T_171: (in SLICE(Q_rsqrt(xmm0_21, dwLoc20), real32, 0) @ 00001222 : real32)
  Class: Eq_167
  DataType: real32
  OrigDataType: real32
T_172: (in rLoc10_64 @ 00001233 : real32)
  Class: Eq_172
  DataType: real32
  OrigDataType: real32
T_173: (in lib_rsqrt @ 00001233 : ptr64)
  Class: Eq_173
  DataType: (ptr64 Eq_173)
  OrigDataType: (ptr64 (fn T_177 (T_176)))
T_174: (in signature of lib_rsqrt @ 000011A6 : void)
  Class: Eq_173
  DataType: (ptr64 Eq_173)
  OrigDataType: 
T_175: (in 0<96> @ 00001233 : word96)
  Class: Eq_175
  DataType: word96
  OrigDataType: word96
T_176: (in SEQ(0<96>, rLoc10_61) @ 00001233 : word128)
  Class: Eq_110
  DataType: word128
  OrigDataType: word128
T_177: (in lib_rsqrt(SEQ(0<96>, rLoc10_61)) @ 00001233 : word128)
  Class: Eq_177
  DataType: word128
  OrigDataType: word128
T_178: (in SLICE(lib_rsqrt(SEQ(0<96>, rLoc10_61)), real32, 0) @ 00001233 : real32)
  Class: Eq_172
  DataType: real32
  OrigDataType: real32
T_179: (in printf @ 0000124F : ptr64)
  Class: Eq_179
  DataType: (ptr64 Eq_179)
  OrigDataType: (ptr64 (fn T_184 (T_182, T_183)))
T_180: (in signature of printf @ 00000000 : void)
  Class: Eq_179
  DataType: (ptr64 Eq_179)
  OrigDataType: 
T_181: (in  @ 0000124F : real64)
  Class: Eq_181
  DataType: real64
  OrigDataType: 
T_182: (in 0000000000002051 @ 0000124F : ptr64)
  Class: Eq_140
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_183: (in CONVERT(rLoc0C_63, real32, real64) @ 0000124F : real64)
  Class: Eq_181
  DataType: real64
  OrigDataType: real64
T_184: (in printf("    Quick:   %g\n", (real64) rLoc0C_63) @ 0000124F : int32)
  Class: Eq_184
  DataType: int32
  OrigDataType: int32
T_185: (in printf @ 0000126A : ptr64)
  Class: Eq_185
  DataType: (ptr64 Eq_185)
  OrigDataType: (ptr64 (fn T_190 (T_188, T_189)))
T_186: (in signature of printf @ 00000000 : void)
  Class: Eq_185
  DataType: (ptr64 Eq_185)
  OrigDataType: 
T_187: (in  @ 0000126A : real64)
  Class: Eq_187
  DataType: real64
  OrigDataType: 
T_188: (in 0000000000002062 @ 0000126A : ptr64)
  Class: Eq_140
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_189: (in CONVERT(rLoc10_64, real32, real64) @ 0000126A : real64)
  Class: Eq_187
  DataType: real64
  OrigDataType: real64
T_190: (in printf("    Library: %g\n", (real64) rLoc10_64) @ 0000126A : int32)
  Class: Eq_190
  DataType: int32
  OrigDataType: int32
T_191: (in rdx @ 00001274 : word64)
  Class: Eq_191
  DataType: word64
  OrigDataType: word64
T_192: (in rsi @ 00001274 : word64)
  Class: Eq_192
  DataType: word64
  OrigDataType: word64
T_193: (in edi @ 00001274 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in rdi @ 00001280 : word64)
  Class: Eq_194
  DataType: word64
  OrigDataType: word64
T_195: (in SLICE(rdi, word32, 0) @ 00001280 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_196: (in _init @ 000012A8 : ptr64)
  Class: Eq_196
  DataType: (ptr64 Eq_196)
  OrigDataType: (ptr64 (fn T_198 ()))
T_197: (in signature of _init @ 00001000 : void)
  Class: Eq_196
  DataType: (ptr64 Eq_196)
  OrigDataType: 
T_198: (in _init() @ 000012A8 : void)
  Class: Eq_198
  DataType: void
  OrigDataType: void
T_199: (in rbp_31 @ 000012A1 : int64)
  Class: Eq_199
  DataType: int64
  OrigDataType: int64
T_200: (in 0000000000003DE0 @ 000012A1 : ptr64)
  Class: Eq_200
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_201: (in 0000000000003DD8 @ 000012A1 : ptr64)
  Class: Eq_201
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_202: (in 0x3DE0<u64> - 0x3DD8<u64> @ 00000000 : word64)
  Class: Eq_199
  DataType: int64
  OrigDataType: int64
T_203: (in 3<64> @ 000012B1 : word64)
  Class: Eq_203
  DataType: word64
  OrigDataType: word64
T_204: (in rbp_31 >> 3<64> @ 00000000 : word64)
  Class: Eq_204
  DataType: int64
  OrigDataType: int64
T_205: (in 0<64> @ 000012B1 : word64)
  Class: Eq_204
  DataType: int64
  OrigDataType: word64
T_206: (in rbp_31 >> 3<64> == 0<64> @ 00000000 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in rbx_43 @ 000012B3 : Eq_207)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: word64
T_208: (in 0<u64> @ 000012B3 : uint64)
  Class: Eq_207
  DataType: uint64
  OrigDataType: uint64
T_209: (in 0000000000003DD8 @ 000012C1 : ptr64)
  Class: Eq_209
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_217) a0000)))
T_210: (in 8<64> @ 000012C1 : word64)
  Class: Eq_210
  DataType: ui64
  OrigDataType: ui64
T_211: (in rbx_43 * 8<64> @ 00000000 : word64)
  Class: Eq_211
  DataType: ui64
  OrigDataType: ui64
T_212: (in 0x0000000000003DD8<p64>[rbx_43 * 8<64>] @ 000012C1 : word64)
  Class: Eq_212
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_213: (in 1<64> @ 000012C5 : word64)
  Class: Eq_213
  DataType: word64
  OrigDataType: word64
T_214: (in rbx_43 + 1<64> @ 000012C5 : word64)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: uint64
T_215: (in rbp_31 >> 3<64> @ 00000000 : word64)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: int64
T_216: (in rbp_31 >> 3<64> != rbx_43 @ 00000000 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217:
  Class: Eq_217
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_212 t0000))
T_218:
  Class: Eq_218
  DataType: (arr (ptr64 code))
  OrigDataType: (arr T_217)
*/
typedef Eq_1Eq_1Eq_1struct Globals {
	<anonymous> t1036;	// 1036
	<anonymous> t1046;	// 1046
	<anonymous> t1056;	// 1056
	<anonymous> t1066;	// 1066
	int32 t11E0(int32 rdi, char ** rsi, char ** rdx);	// 11E0
	void t1280();	// 1280
	void t12E0();	// 12E0
	real32 r2074;	// 2074
	real32 r2078;	// 2078
	real32 r207C;	// 207C
	<anonymous> * a3DD8[];	// 3DD8
	<anonymous> * _ITM_deregisterTMCloneTable_GOT;	// 3FD8
	<anonymous> * __libc_start_main_GOT;	// 3FE0
	<anonymous> * __gmon_start___GOT;	// 3FE8
	<anonymous> * _ITM_registerTMCloneTable_GOT;	// 3FF0
	<anonymous> * __cxa_finalize_GOT;	// 3FF8
	<anonymous> * puts_GOT;	// 4018
	<anonymous> * printf_GOT;	// 4020
	<anonymous> * strtof_GOT;	// 4028
	<anonymous> * sqrtf_GOT;	// 4030
	word64 qw4040;	// 4040
	byte b4048;	// 4048
} Eq_1;

typedef void (Eq_6)();

typedef void (Eq_8)();

typedef void (Eq_12)(ptr64);

typedef int32 (Eq_18)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_20)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_23)();

typedef void (Eq_24)();

typedef void (Eq_33)();

typedef void (Eq_39)();

typedef union Eq_44 {
	int64 u0;
	uint64 u1;
} Eq_44;

typedef union Eq_45 {
	int64 u0;
	ptr64 u1;
} Eq_45;

typedef union Eq_46 {
	int64 u0;
	ptr64 u1;
} Eq_46;

typedef union Eq_49 {
	int64 u0;
	uint64 u1;
} Eq_49;

typedef union Eq_51 {
	int64 u0;
	uint64 u1;
} Eq_51;

typedef union Eq_52 {
	int64 u0;
	uint64 u1;
} Eq_52;

typedef void (Eq_57)();

typedef void (Eq_70)();

typedef void (Eq_76)(word64);

typedef void (Eq_81)();

typedef union Eq_88 {
	uint32 u0;
	real32 u1;
} Eq_88;

typedef union Eq_111 {
	real32 u0;
	up32 u1;
} Eq_111;

typedef real32 (Eq_114)(real32);

typedef real64 (Eq_129)(Eq_131);

typedef union Eq_131 {
	real32 u0;
	real64 u1;
} Eq_131;

typedef struct Eq_136 {
	char * ptr0008;	// 8
	char * ptr0010;	// 10
} Eq_136;

typedef int32 (Eq_138)(char *, char *);

typedef int32 (Eq_147)(char *);

typedef real32 (Eq_158)(char *, char * *);

typedef word128 (Eq_168)(word128, int32);

typedef word128 (Eq_173)(word128);

typedef int32 (Eq_179)(char *, real64);

typedef int32 (Eq_185)(char *, real64);

typedef void (Eq_196)();

typedef union Eq_200 {
	int64 u0;
	ptr64 u1;
} Eq_200;

typedef union Eq_201 {
	int64 u0;
	ptr64 u1;
} Eq_201;

typedef union Eq_207 {
	int64 u0;
	uint64 u1;
} Eq_207;

