// hello_O1.h
// Generated by decompiling hello_O1
// using Reko decompiler version 0.11.6.0.

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
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_6: (fn word64 ())
	T_6 (in __gmon_start__ @ 0000000000001010 : ptr64)
Eq_8: (fn void ())
	T_8 (in rdx @ 0000000000001010 : (ptr64 Eq_8))
	T_23 (in rtld_fini @ 00000000000010A4 : (ptr64 (fn void ())))
Eq_11: (fn void ((ptr64 (ptr64 char))))
	T_11 (in __align_stack<word64> @ 0000000000001089 : ptr32)
	T_12 (in signature of __align_stack : void)
Eq_16: (fn int32 ((ptr64 Eq_18), int32, (ptr64 (ptr64 char)), (ptr64 Eq_21), (ptr64 Eq_22), (ptr64 Eq_8), (ptr64 void)))
	T_16 (in __libc_start_main @ 00000000000010A4 : ptr64)
	T_17 (in signature of __libc_start_main : void)
Eq_18: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_18 (in main @ 00000000000010A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_25 (in 00000000000011E0 @ 00000000000010A4 : ptr64)
Eq_21: (fn void ())
	T_21 (in init @ 00000000000010A4 : (ptr64 (fn void ())))
	T_29 (in 0000000000001280 @ 00000000000010A4 : ptr64)
Eq_22: (fn void ())
	T_22 (in fini @ 00000000000010A4 : (ptr64 (fn void ())))
	T_30 (in 00000000000012E0 @ 00000000000010A4 : ptr64)
Eq_33: (fn void ())
	T_33 (in __halt @ 00000000000010AA : ptr32)
	T_34 (in signature of __halt : void)
Eq_38: (fn word64 ())
	T_38 (in _ITM_deregisterTMCloneTable @ 00000000000010CD : ptr64)
	T_40 (in 0<64> @ 00000000000010CD : word64)
Eq_43: (union "Eq_43" (int64 u0) (uint64 u1))
	T_43 (in &g_b4048 - &g_b4048 @ 00000000000010EE : word64)
	T_44 (in rsi_6 @ 00000000000010EE : Eq_43)
Eq_46: (union "Eq_46" (int64 u0) (uint64 u1))
	T_46 (in rsi_6 >> 0x3F<64> @ 0000000000001102 : word64)
Eq_48: (union "Eq_48" (int64 u0) (uint64 u1))
	T_48 (in rsi_6 >> 3<64> @ 0000000000001102 : word64)
Eq_49: (union "Eq_49" (int64 u0) (uint64 u1))
	T_49 (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) @ 0000000000001102 : word64)
Eq_54: (fn word64 ())
	T_54 (in _ITM_registerTMCloneTable @ 000000000000110E : ptr64)
	T_56 (in 0<64> @ 000000000000110E : word64)
Eq_66: (fn void ())
	T_66 (in deregister_tm_clones @ 0000000000001147 : ptr64)
	T_67 (in signature of deregister_tm_clones @ 00000000000010B0 : void)
Eq_71: (fn word64 (word64))
	T_71 (in __cxa_finalize @ 0000000000001142 : ptr64)
Eq_76: (fn void ())
	T_76 (in register_tm_clones @ 0000000000001160 : ptr64)
	T_77 (in signature of register_tm_clones @ 00000000000010E0 : void)
Eq_82: (union "Eq_82" (uint32 u0) (real32 u1))
	T_82 (in SLICE(xmm0, real32, 0) @ 000000000000117E : real32)
Eq_106: (union "Eq_106" (real32 u0) (up32 u1))
	T_106 (in SLICE(xmm0, real32, 0) @ 00000000000011AD : real32)
	T_107 (in 0.0F @ 00000000000011AD : real32)
Eq_109: (fn real32 (real32))
	T_109 (in sqrtf @ 00000000000011C7 : ptr64)
	T_110 (in signature of sqrtf : void)
Eq_123: (fn real64 (Eq_125))
	T_123 (in fsqrt @ 00000000000011C2 : ptr32)
	T_124 (in signature of fsqrt : void)
Eq_125: (union "Eq_125" (real32 u0) (real64 u1))
	T_125 (in p1 @ 00000000000011C2 : real64)
	T_126 (in SLICE(xmm0, real32, 0) @ 00000000000011C2 : real32)
Eq_130: (struct "Eq_130" (8 (ptr64 char) ptr0008) (10 (ptr64 char) ptr0010))
	T_130 (in rsi @ 00000000000011C2 : (ptr64 Eq_130))
Eq_131: (fn int32 ((ptr64 char), (ptr64 char)))
	T_131 (in printf @ 00000000000011F8 : ptr64)
	T_132 (in signature of printf : void)
Eq_140: (fn int32 ((ptr64 char)))
	T_140 (in puts @ 0000000000001204 : ptr64)
	T_141 (in signature of puts : void)
Eq_150: (fn real32 ((ptr64 char), (ptr64 (ptr64 char))))
	T_150 (in strtof @ 0000000000001212 : ptr64)
	T_151 (in signature of strtof : void)
Eq_160: (fn word128 (word128, int32))
	T_160 (in Q_rsqrt @ 0000000000001222 : ptr64)
	T_161 (in signature of Q_rsqrt @ 0000000000001169 : void)
Eq_166: (fn word128 (word128))
	T_166 (in lib_rsqrt @ 0000000000001233 : ptr64)
	T_167 (in signature of lib_rsqrt @ 00000000000011A6 : void)
Eq_173: (fn int32 ((ptr64 char), real64))
	T_173 (in printf @ 000000000000124F : ptr64)
	T_174 (in signature of printf : void)
Eq_179: (fn int32 ((ptr64 char), real64))
	T_179 (in printf @ 000000000000126A : ptr64)
	T_180 (in signature of printf : void)
Eq_190: (fn void ())
	T_190 (in _init @ 00000000000012A8 : ptr64)
	T_191 (in signature of _init @ 0000000000001000 : void)
Eq_193: (union "Eq_193" (int64 u0) (ptr64 u1))
	T_193 (in 0000000000003DE0 @ 00000000000012A1 : ptr64)
Eq_201: (union "Eq_201" (int64 u0) (uint64 u1))
	T_201 (in 0<u64> @ 00000000000012B3 : uint64)
	T_202 (in rbx_45 @ 00000000000012B3 : Eq_201)
	T_207 (in rbx_45 + 1<64> @ 00000000000012C5 : word64)
	T_208 (in rbp_31 >> 3<64> @ 00000000000012CC : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ @ 000000000000100E : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0<64> @ 000000000000100E : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0<64> @ 000000000000100E : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ @ 0000000000001010 : ptr64)
  Class: Eq_6
  DataType: (ptr64 Eq_6)
  OrigDataType: (ptr64 (fn T_7 ()))
T_7: (in __gmon_start__() @ 0000000000001010 : word64)
  Class: Eq_7
  DataType: word64
  OrigDataType: word64
T_8: (in rdx @ 0000000000001010 : (ptr64 Eq_8))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: (ptr64 (fn void ()))
T_9: (in dwArg00 @ 0000000000001010 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in ptrArg08 @ 0000000000001010 : (ptr64 char))
  Class: Eq_10
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_11: (in __align_stack<word64> @ 0000000000001089 : ptr32)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: (ptr32 (fn T_15 (T_14)))
T_12: (in signature of __align_stack : void)
  Class: Eq_11
  DataType: (ptr32 Eq_11)
  OrigDataType: 
T_13: (in p1 @ 0000000000001089 : word64)
  Class: Eq_13
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_14: (in &ptrArg08 @ 0000000000001089 : (ptr64 (ptr64 char)))
  Class: Eq_13
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_15: (in __align_stack<word64>(&ptrArg08) @ 0000000000001089 : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __libc_start_main @ 00000000000010A4 : ptr64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn T_32 (T_25, T_27, T_28, T_29, T_30, T_8, T_31)))
T_17: (in signature of __libc_start_main : void)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_18: (in main @ 00000000000010A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: 
T_19: (in argc @ 00000000000010A4 : int32)
  Class: Eq_19
  DataType: int32
  OrigDataType: 
T_20: (in ubp_av @ 00000000000010A4 : (ptr64 (ptr64 char)))
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_21: (in init @ 00000000000010A4 : (ptr64 (fn void ())))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in fini @ 00000000000010A4 : (ptr64 (fn void ())))
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: 
T_23: (in rtld_fini @ 00000000000010A4 : (ptr64 (fn void ())))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: 
T_24: (in stack_end @ 00000000000010A4 : (ptr64 void))
  Class: Eq_24
  DataType: (ptr64 void)
  OrigDataType: 
T_25: (in 00000000000011E0 @ 00000000000010A4 : ptr64)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_26: (in qwArg00 @ 00000000000010A4 : word64)
  Class: Eq_26
  DataType: word64
  OrigDataType: word64
T_27: (in SLICE(qwArg00, int32, 0) @ 00000000000010A4 : int32)
  Class: Eq_19
  DataType: int32
  OrigDataType: int32
T_28: (in &ptrArg08 @ 00000000000010A4 : (ptr64 (ptr64 char)))
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_29: (in 0000000000001280 @ 00000000000010A4 : ptr64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn void ()))
T_30: (in 00000000000012E0 @ 00000000000010A4 : ptr64)
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: (ptr64 (fn void ()))
T_31: (in fp @ 00000000000010A4 : (ptr64 void))
  Class: Eq_24
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_32: (in __libc_start_main(&g_t11E0, (int32) qwArg00, &ptrArg08, &g_t1280, &g_t12E0, rdx, fp) @ 00000000000010A4 : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in __halt @ 00000000000010AA : ptr32)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: (ptr32 (fn T_35 ()))
T_34: (in signature of __halt : void)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: 
T_35: (in __halt() @ 00000000000010AA : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in 0000000000004048 @ 00000000000010C1 : ptr64)
  Class: Eq_36
  DataType: (ptr64 byte)
  OrigDataType: (union ((ptr64 byte) u1) (ptr64 u0))
T_37: (in &g_b4048 == &g_b4048 @ 00000000000010C1 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in _ITM_deregisterTMCloneTable @ 00000000000010CD : ptr64)
  Class: Eq_38
  DataType: (ptr64 Eq_38)
  OrigDataType: (ptr64 (fn T_42 ()))
T_39: (in signature of _ITM_deregisterTMCloneTable : void)
  Class: Eq_39
  DataType: Eq_39
  OrigDataType: 
T_40: (in 0<64> @ 00000000000010CD : word64)
  Class: Eq_38
  DataType: (ptr64 Eq_38)
  OrigDataType: word64
T_41: (in _ITM_deregisterTMCloneTable == null @ 00000000000010CD : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in _ITM_deregisterTMCloneTable() @ 00000000000010CF : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_43: (in &g_b4048 - &g_b4048 @ 00000000000010EE : word64)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: int64
T_44: (in rsi_6 @ 00000000000010EE : Eq_43)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: (union (int64 u0) (uint64 u1))
T_45: (in 0x3F<64> @ 0000000000001102 : word64)
  Class: Eq_45
  DataType: word64
  OrigDataType: word64
T_46: (in rsi_6 >> 0x3F<64> @ 0000000000001102 : word64)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (int64 u1) (uint64 u0))
T_47: (in 3<64> @ 0000000000001102 : word64)
  Class: Eq_47
  DataType: word64
  OrigDataType: word64
T_48: (in rsi_6 >> 3<64> @ 0000000000001102 : word64)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: (union (int64 u1) (uint64 u0))
T_49: (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) @ 0000000000001102 : word64)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (int64 u1) (uint64 u0))
T_50: (in 1<64> @ 0000000000001102 : word64)
  Class: Eq_50
  DataType: word64
  OrigDataType: word64
T_51: (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) >> 1<64> @ 0000000000001102 : word64)
  Class: Eq_51
  DataType: int64
  OrigDataType: int64
T_52: (in 0<64> @ 0000000000001102 : word64)
  Class: Eq_51
  DataType: int64
  OrigDataType: word64
T_53: (in (rsi_6 >>u 0x3F<64>) + (rsi_6 >> 3<64>) >> 1<64> == 0<64> @ 0000000000001102 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in _ITM_registerTMCloneTable @ 000000000000110E : ptr64)
  Class: Eq_54
  DataType: (ptr64 Eq_54)
  OrigDataType: (ptr64 (fn T_58 ()))
T_55: (in signature of _ITM_registerTMCloneTable : void)
  Class: Eq_55
  DataType: Eq_55
  OrigDataType: 
T_56: (in 0<64> @ 000000000000110E : word64)
  Class: Eq_54
  DataType: (ptr64 Eq_54)
  OrigDataType: word64
T_57: (in _ITM_registerTMCloneTable == null @ 000000000000110E : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in _ITM_registerTMCloneTable() @ 0000000000001110 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_59: (in Mem0[0x0000000000004048<p64>:byte] @ 000000000000112B : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in 0<8> @ 000000000000112B : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in g_b4048 != 0<8> @ 000000000000112B : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in __cxa_finalize @ 0000000000001139 : ptr64)
  Class: Eq_62
  DataType: word64
  OrigDataType: 
T_63: (in signature of __cxa_finalize : void)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: 
T_64: (in 0<64> @ 0000000000001139 : word64)
  Class: Eq_62
  DataType: word64
  OrigDataType: word64
T_65: (in __cxa_finalize == 0<64> @ 0000000000001139 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in deregister_tm_clones @ 0000000000001147 : ptr64)
  Class: Eq_66
  DataType: (ptr64 Eq_66)
  OrigDataType: (ptr64 (fn T_68 ()))
T_67: (in signature of deregister_tm_clones @ 00000000000010B0 : void)
  Class: Eq_66
  DataType: (ptr64 Eq_66)
  OrigDataType: 
T_68: (in deregister_tm_clones() @ 0000000000001147 : void)
  Class: Eq_68
  DataType: void
  OrigDataType: void
T_69: (in 1<8> @ 000000000000114C : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_70: (in Mem23[0x0000000000004048<p64>:byte] @ 000000000000114C : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_71: (in __cxa_finalize @ 0000000000001142 : ptr64)
  Class: Eq_71
  DataType: (ptr64 Eq_71)
  OrigDataType: (ptr64 (fn T_75 (T_74)))
T_72: (in signature of __cxa_finalize : void)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: 
T_73: (in 0000000000004040 @ 0000000000001142 : ptr64)
  Class: Eq_73
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_74 t0000)))
T_74: (in Mem9[0x0000000000004040<p64>:word64] @ 0000000000001142 : word64)
  Class: Eq_74
  DataType: word64
  OrigDataType: word64
T_75: (in __cxa_finalize(g_qw4040) @ 0000000000001142 : word64)
  Class: Eq_75
  DataType: word64
  OrigDataType: word64
T_76: (in register_tm_clones @ 0000000000001160 : ptr64)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: (ptr64 (fn T_78 ()))
T_77: (in signature of register_tm_clones @ 00000000000010E0 : void)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: 
T_78: (in register_tm_clones() @ 0000000000001160 : void)
  Class: Eq_78
  DataType: void
  OrigDataType: void
T_79: (in xmm0 @ 0000000000001160 : word128)
  Class: Eq_79
  DataType: word128
  OrigDataType: word128
T_80: (in dwArg00 @ 0000000000001160 : int32)
  Class: Eq_80
  DataType: int32
  OrigDataType: int32
T_81: (in 0x5F3759DF<32> @ 000000000000117E : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in SLICE(xmm0, real32, 0) @ 000000000000117E : real32)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union (uint32 u1) (real32 u0))
T_83: (in SEQ(dwArg00, SLICE(xmm0, real32, 0)) @ 000000000000117E : word64)
  Class: Eq_83
  DataType: int64
  OrigDataType: int64
T_84: (in 1<64> @ 000000000000117E : word64)
  Class: Eq_84
  DataType: word64
  OrigDataType: word64
T_85: (in SEQ(dwArg00, (real32) xmm0) >> 1<64> @ 000000000000117E : word64)
  Class: Eq_85
  DataType: int64
  OrigDataType: int64
T_86: (in SLICE(SEQ(dwArg00, SLICE(xmm0, real32, 0)) >> 1<64>, word32, 0) @ 000000000000117E : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in 0x5F3759DF<32> - (word32) (SEQ(dwArg00, (real32) xmm0) >> 1<64>) @ 000000000000117E : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in CONVERT(0x5F3759DF<32> - SLICE(SEQ(dwArg00, SLICE(xmm0, real32, 0)) >> 1<64>, word32, 0), word32, word128) @ 000000000000117E : word128)
  Class: Eq_88
  DataType: word128
  OrigDataType: word128
T_89: (in xmm2_16 @ 000000000000117E : word128)
  Class: Eq_88
  DataType: word128
  OrigDataType: word128
T_90: (in 0<96> @ 00000000000011A5 : word96)
  Class: Eq_90
  DataType: word96
  OrigDataType: word96
T_91: (in 0000000000002078 @ 00000000000011A5 : ptr64)
  Class: Eq_91
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_92 t0000)))
T_92: (in Mem5[0x0000000000002078<p64>:real32] @ 00000000000011A5 : real32)
  Class: Eq_92
  DataType: real32
  OrigDataType: real32
T_93: (in SLICE(xmm0, real32, 0) @ 00000000000011A5 : real32)
  Class: Eq_93
  DataType: real32
  OrigDataType: real32
T_94: (in 0000000000002074 @ 00000000000011A5 : ptr64)
  Class: Eq_94
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_95 t0000)))
T_95: (in Mem5[0x0000000000002074<p64>:real32] @ 00000000000011A5 : real32)
  Class: Eq_95
  DataType: real32
  OrigDataType: real32
T_96: (in (real32) xmm0 * 0.5F @ 00000000000011A5 : real32)
  Class: Eq_96
  DataType: real32
  OrigDataType: real32
T_97: (in SLICE(xmm2_16, real32, 0) @ 00000000000011A5 : real32)
  Class: Eq_97
  DataType: real32
  OrigDataType: real32
T_98: (in (real32) xmm0 * 0.5F * (real32) xmm2_16 @ 00000000000011A5 : real32)
  Class: Eq_98
  DataType: real32
  OrigDataType: real32
T_99: (in SLICE(xmm2_16, real32, 0) @ 00000000000011A5 : real32)
  Class: Eq_99
  DataType: real32
  OrigDataType: real32
T_100: (in (real32) xmm0 * 0.5F * (real32) xmm2_16 * (real32) xmm2_16 @ 00000000000011A5 : real32)
  Class: Eq_100
  DataType: real32
  OrigDataType: real32
T_101: (in 1.5F - (((real32) xmm0 * 0.5F) * (real32) xmm2_16) * (real32) xmm2_16 @ 00000000000011A5 : real32)
  Class: Eq_101
  DataType: real32
  OrigDataType: real32
T_102: (in SLICE(xmm2_16, real32, 0) @ 00000000000011A5 : real32)
  Class: Eq_102
  DataType: real32
  OrigDataType: real32
T_103: (in (1.5F - (((real32) xmm0 * 0.5F) * (real32) xmm2_16) * (real32) xmm2_16) * (real32) xmm2_16 @ 00000000000011A5 : real32)
  Class: Eq_103
  DataType: real32
  OrigDataType: real32
T_104: (in SEQ(0<96>, (Mem5[0x0000000000002078<p64>:real32] - ((SLICE(xmm0, real32, 0) * Mem5[0x0000000000002074<p64>:real32]) * SLICE(xmm2_16, real32, 0)) * SLICE(xmm2_16, real32, 0)) * SLICE(xmm2_16, real32, 0)) @ 00000000000011A5 : word128)
  Class: Eq_79
  DataType: word128
  OrigDataType: word128
T_105: (in xmm0 @ 00000000000011A5 : word128)
  Class: Eq_105
  DataType: word128
  OrigDataType: word128
T_106: (in SLICE(xmm0, real32, 0) @ 00000000000011AD : real32)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: (union (real32 u0) (up32 u1))
T_107: (in 0.0F @ 00000000000011AD : real32)
  Class: Eq_106
  DataType: real32
  OrigDataType: (union (real32 u0) (up32 u1))
T_108: (in (real32) xmm0 < 0.0F @ 00000000000011AD : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in sqrtf @ 00000000000011C7 : ptr64)
  Class: Eq_109
  DataType: (ptr64 Eq_109)
  OrigDataType: (ptr64 (fn T_113 (T_111)))
T_110: (in signature of sqrtf : void)
  Class: Eq_109
  DataType: (ptr64 Eq_109)
  OrigDataType: 
T_111: (in xmm0 @ 00000000000011C7 : real32)
  Class: Eq_111
  DataType: real32
  OrigDataType: 
T_112: (in SLICE(xmm0, real32, 0) @ 00000000000011C7 : real32)
  Class: Eq_111
  DataType: real32
  OrigDataType: real32
T_113: (in sqrtf((real32) xmm0) @ 00000000000011C7 : real32)
  Class: Eq_113
  DataType: real32
  OrigDataType: real32
T_114: (in 0<96> @ 00000000000011DF : word96)
  Class: Eq_114
  DataType: word96
  OrigDataType: word96
T_115: (in 000000000000207C @ 00000000000011DF : ptr64)
  Class: Eq_115
  DataType: (ptr64 real32)
  OrigDataType: (ptr64 (struct (0 T_116 t0000)))
T_116: (in Mem0[0x000000000000207C<p64>:real32] @ 00000000000011DF : real32)
  Class: Eq_116
  DataType: real32
  OrigDataType: real32
T_117: (in SLICE(xmm0, real32, 0) @ 00000000000011DF : real32)
  Class: Eq_111
  DataType: real32
  OrigDataType: real32
T_118: (in sqrtf((real32) xmm0) @ 00000000000011DF : real32)
  Class: Eq_113
  DataType: real32
  OrigDataType: real32
T_119: (in 1.0F / sqrtf((real32) xmm0) @ 00000000000011DF : real32)
  Class: Eq_119
  DataType: real32
  OrigDataType: real32
T_120: (in SEQ(0<96>, Mem0[0x000000000000207C<p64>:real32] / sqrtf((real32) xmm0)) @ 00000000000011DF : word128)
  Class: Eq_105
  DataType: word128
  OrigDataType: word128
T_121: (in 0<96> @ 00000000000011C2 : word96)
  Class: Eq_121
  DataType: word96
  OrigDataType: word96
T_122: (in Mem0[0x000000000000207C<p64>:real32] @ 00000000000011C2 : real32)
  Class: Eq_116
  DataType: real32
  OrigDataType: real32
T_123: (in fsqrt @ 00000000000011C2 : ptr32)
  Class: Eq_123
  DataType: (ptr32 Eq_123)
  OrigDataType: (ptr32 (fn T_127 (T_126)))
T_124: (in signature of fsqrt : void)
  Class: Eq_123
  DataType: (ptr32 Eq_123)
  OrigDataType: 
T_125: (in p1 @ 00000000000011C2 : real64)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: 
T_126: (in SLICE(xmm0, real32, 0) @ 00000000000011C2 : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real32 u0) (real64 u1))
T_127: (in fsqrt((real32) xmm0) @ 00000000000011C2 : real64)
  Class: Eq_127
  DataType: real64
  OrigDataType: real64
T_128: (in 1.0F /32 fsqrt((real32) xmm0) @ 00000000000011C2 : real32)
  Class: Eq_128
  DataType: real32
  OrigDataType: real32
T_129: (in SEQ(0<96>, Mem0[0x000000000000207C<p64>:real32] /32 fsqrt((real32) xmm0)) @ 00000000000011C2 : word128)
  Class: Eq_105
  DataType: word128
  OrigDataType: word128
T_130: (in rsi @ 00000000000011C2 : (ptr64 Eq_130))
  Class: Eq_130
  DataType: (ptr64 Eq_130)
  OrigDataType: (ptr64 (struct (8 T_138 t0008) (10 T_147 t0010)))
T_131: (in printf @ 00000000000011F8 : ptr64)
  Class: Eq_131
  DataType: (ptr64 Eq_131)
  OrigDataType: (ptr64 (fn T_139 (T_135, T_138)))
T_132: (in signature of printf : void)
  Class: Eq_131
  DataType: (ptr64 Eq_131)
  OrigDataType: 
T_133: (in format @ 00000000000011F8 : (ptr64 char))
  Class: Eq_133
  DataType: (ptr64 char)
  OrigDataType: 
T_134: (in  @ 00000000000011F8 : (ptr64 char))
  Class: Eq_134
  DataType: (ptr64 char)
  OrigDataType: 
T_135: (in Hello %s, I'm inside an archive.
 @ 00000000000011F8 : (ptr64 char))
  Class: Eq_133
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_136: (in 8<i64> @ 00000000000011F8 : int64)
  Class: Eq_136
  DataType: int64
  OrigDataType: int64
T_137: (in rsi + 8<i64> @ 00000000000011F8 : word64)
  Class: Eq_137
  DataType: word64
  OrigDataType: word64
T_138: (in Mem6[rsi + 8<i64>:word64] @ 00000000000011F8 : word64)
  Class: Eq_134
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_139: (in printf("Hello %s, I'm inside an archive.\n", rsi->ptr0008) @ 00000000000011F8 : int32)
  Class: Eq_139
  DataType: int32
  OrigDataType: int32
T_140: (in puts @ 0000000000001204 : ptr64)
  Class: Eq_140
  DataType: (ptr64 Eq_140)
  OrigDataType: (ptr64 (fn T_144 (T_143)))
T_141: (in signature of puts : void)
  Class: Eq_140
  DataType: (ptr64 Eq_140)
  OrigDataType: 
T_142: (in s @ 0000000000001204 : (ptr64 char))
  Class: Eq_142
  DataType: (ptr64 char)
  OrigDataType: 
T_143: (in 0000000000002030 @ 0000000000001204 : ptr64)
  Class: Eq_142
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_144: (in puts("Inverse square root computation.") @ 0000000000001204 : int32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_145: (in 16<i64> @ 0000000000001209 : int64)
  Class: Eq_145
  DataType: int64
  OrigDataType: int64
T_146: (in rsi + 16<i64> @ 0000000000001209 : word64)
  Class: Eq_146
  DataType: ptr64
  OrigDataType: ptr64
T_147: (in Mem6[rsi + 16<i64>:word64] @ 0000000000001209 : word64)
  Class: Eq_147
  DataType: (ptr64 char)
  OrigDataType: word64
T_148: (in rdi_17 @ 0000000000001209 : (ptr64 char))
  Class: Eq_147
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_149: (in 0<96> @ 0000000000001212 : word96)
  Class: Eq_149
  DataType: word96
  OrigDataType: word96
T_150: (in strtof @ 0000000000001212 : ptr64)
  Class: Eq_150
  DataType: (ptr64 Eq_150)
  OrigDataType: (ptr64 (fn T_155 (T_148, T_154)))
T_151: (in signature of strtof : void)
  Class: Eq_150
  DataType: (ptr64 Eq_150)
  OrigDataType: 
T_152: (in str @ 0000000000001212 : (ptr64 char))
  Class: Eq_147
  DataType: (ptr64 char)
  OrigDataType: 
T_153: (in endptr @ 0000000000001212 : (ptr64 (ptr64 char)))
  Class: Eq_153
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_154: (in 0<u64> @ 0000000000001212 : uint64)
  Class: Eq_153
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_155: (in strtof(rdi_17, null) @ 0000000000001212 : real32)
  Class: Eq_155
  DataType: real32
  OrigDataType: real32
T_156: (in SEQ(0<96>, strtof(rdi_17, null)) @ 0000000000001212 : word128)
  Class: Eq_79
  DataType: word128
  OrigDataType: word128
T_157: (in xmm0_20 @ 0000000000001212 : word128)
  Class: Eq_79
  DataType: word128
  OrigDataType: word128
T_158: (in strtof(rdi_17, null) @ 0000000000001217 : real32)
  Class: Eq_155
  DataType: real32
  OrigDataType: real32
T_159: (in rLoc10_59 @ 0000000000001217 : real32)
  Class: Eq_155
  DataType: real32
  OrigDataType: real32
T_160: (in Q_rsqrt @ 0000000000001222 : ptr64)
  Class: Eq_160
  DataType: (ptr64 Eq_160)
  OrigDataType: (ptr64 (fn T_163 (T_157, T_162)))
T_161: (in signature of Q_rsqrt @ 0000000000001169 : void)
  Class: Eq_160
  DataType: (ptr64 Eq_160)
  OrigDataType: 
T_162: (in dwLoc20 @ 0000000000001222 : int32)
  Class: Eq_80
  DataType: int32
  OrigDataType: word32
T_163: (in Q_rsqrt(xmm0_20, dwLoc20) @ 0000000000001222 : word128)
  Class: Eq_163
  DataType: word128
  OrigDataType: word128
T_164: (in SLICE(Q_rsqrt(xmm0_20, dwLoc20), real32, 0) @ 0000000000001222 : real32)
  Class: Eq_164
  DataType: real32
  OrigDataType: real32
T_165: (in rLoc0C_61 @ 0000000000001222 : real32)
  Class: Eq_164
  DataType: real32
  OrigDataType: real32
T_166: (in lib_rsqrt @ 0000000000001233 : ptr64)
  Class: Eq_166
  DataType: (ptr64 Eq_166)
  OrigDataType: (ptr64 (fn T_170 (T_169)))
T_167: (in signature of lib_rsqrt @ 00000000000011A6 : void)
  Class: Eq_166
  DataType: (ptr64 Eq_166)
  OrigDataType: 
T_168: (in 0<96> @ 0000000000001233 : word96)
  Class: Eq_168
  DataType: word96
  OrigDataType: word96
T_169: (in SEQ(0<96>, rLoc10_59) @ 0000000000001233 : word128)
  Class: Eq_105
  DataType: word128
  OrigDataType: word128
T_170: (in lib_rsqrt(SEQ(0<96>, rLoc10_59)) @ 0000000000001233 : word128)
  Class: Eq_170
  DataType: word128
  OrigDataType: word128
T_171: (in SLICE(lib_rsqrt(SEQ(0<96>, rLoc10_59)), real32, 0) @ 0000000000001233 : real32)
  Class: Eq_171
  DataType: real32
  OrigDataType: real32
T_172: (in rLoc10_62 @ 0000000000001233 : real32)
  Class: Eq_171
  DataType: real32
  OrigDataType: real32
T_173: (in printf @ 000000000000124F : ptr64)
  Class: Eq_173
  DataType: (ptr64 Eq_173)
  OrigDataType: (ptr64 (fn T_178 (T_176, T_177)))
T_174: (in signature of printf : void)
  Class: Eq_173
  DataType: (ptr64 Eq_173)
  OrigDataType: 
T_175: (in  @ 000000000000124F : real64)
  Class: Eq_175
  DataType: real64
  OrigDataType: 
T_176: (in     Quick:   %g
 @ 000000000000124F : (ptr64 char))
  Class: Eq_133
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_177: (in CONVERT(rLoc0C_61, real32, real64) @ 000000000000124F : real64)
  Class: Eq_175
  DataType: real64
  OrigDataType: real64
T_178: (in printf("    Quick:   %g\n", (real64) rLoc0C_61) @ 000000000000124F : int32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_179: (in printf @ 000000000000126A : ptr64)
  Class: Eq_179
  DataType: (ptr64 Eq_179)
  OrigDataType: (ptr64 (fn T_184 (T_182, T_183)))
T_180: (in signature of printf : void)
  Class: Eq_179
  DataType: (ptr64 Eq_179)
  OrigDataType: 
T_181: (in  @ 000000000000126A : real64)
  Class: Eq_181
  DataType: real64
  OrigDataType: 
T_182: (in     Library: %g
 @ 000000000000126A : (ptr64 char))
  Class: Eq_133
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_183: (in CONVERT(rLoc10_62, real32, real64) @ 000000000000126A : real64)
  Class: Eq_181
  DataType: real64
  OrigDataType: real64
T_184: (in printf("    Library: %g\n", (real64) rLoc10_62) @ 000000000000126A : int32)
  Class: Eq_184
  DataType: int32
  OrigDataType: int32
T_185: (in edi @ 0000000000001274 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in rsi @ 0000000000001274 : word64)
  Class: Eq_186
  DataType: word64
  OrigDataType: word64
T_187: (in rdx @ 0000000000001274 : word64)
  Class: Eq_187
  DataType: word64
  OrigDataType: word64
T_188: (in rdi @ 0000000000001280 : word64)
  Class: Eq_188
  DataType: word64
  OrigDataType: word64
T_189: (in SLICE(rdi, word32, 0) @ 0000000000001280 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_190: (in _init @ 00000000000012A8 : ptr64)
  Class: Eq_190
  DataType: (ptr64 Eq_190)
  OrigDataType: (ptr64 (fn T_192 ()))
T_191: (in signature of _init @ 0000000000001000 : void)
  Class: Eq_190
  DataType: (ptr64 Eq_190)
  OrigDataType: 
T_192: (in _init() @ 00000000000012A8 : void)
  Class: Eq_192
  DataType: void
  OrigDataType: void
T_193: (in 0000000000003DE0 @ 00000000000012A1 : ptr64)
  Class: Eq_193
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_194: (in 0000000000003DD8 @ 00000000000012A1 : ptr64)
  Class: Eq_194
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (union ((ptr64 (arr Eq_210)) u1) ((ptr64 (arr Eq_210)) u0))
T_195: (in 0x3DE0<u64> - g_a3DD8 @ 00000000000012A1 : word64)
  Class: Eq_195
  DataType: int64
  OrigDataType: int64
T_196: (in rbp_31 @ 00000000000012A1 : int64)
  Class: Eq_195
  DataType: int64
  OrigDataType: int64
T_197: (in 3<64> @ 00000000000012B1 : word64)
  Class: Eq_197
  DataType: word64
  OrigDataType: word64
T_198: (in rbp_31 >> 3<64> @ 00000000000012B1 : word64)
  Class: Eq_198
  DataType: int64
  OrigDataType: int64
T_199: (in 0<64> @ 00000000000012B1 : word64)
  Class: Eq_198
  DataType: int64
  OrigDataType: word64
T_200: (in rbp_31 >> 3<64> == 0<64> @ 00000000000012B1 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0<u64> @ 00000000000012B3 : uint64)
  Class: Eq_201
  DataType: uint64
  OrigDataType: uint64
T_202: (in rbx_45 @ 00000000000012B3 : Eq_201)
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: uint64
T_203: (in 8<64> @ 00000000000012C1 : word64)
  Class: Eq_203
  DataType: ui64
  OrigDataType: ui64
T_204: (in rbx_45 * 8<64> @ 00000000000012C1 : word64)
  Class: Eq_204
  DataType: ui64
  OrigDataType: ui64
T_205: (in 0x0000000000003DD8<p64>[rbx_45 * 8<64>] @ 00000000000012C1 : word64)
  Class: Eq_205
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_206: (in 1<64> @ 00000000000012C5 : word64)
  Class: Eq_206
  DataType: word64
  OrigDataType: word64
T_207: (in rbx_45 + 1<64> @ 00000000000012C5 : word64)
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: uint64
T_208: (in rbp_31 >> 3<64> @ 00000000000012CC : word64)
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: int64
T_209: (in rbp_31 >> 3<64> != rbx_45 @ 00000000000012CC : bool)
  Class: Eq_209
  DataType: bool
  OrigDataType: bool
T_210:
  Class: Eq_210
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_205 t0000))
T_211:
  Class: Eq_211
  DataType: (arr (ptr64 code))
  OrigDataType: (arr T_210)
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

typedef word64 (Eq_6)();

typedef void (Eq_8)();

typedef void (Eq_11)(char * *);

typedef int32 (Eq_16)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_18)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_21)();

typedef void (Eq_22)();

typedef void (Eq_33)();

typedef word64 (Eq_38)();

typedef union Eq_43 {
	int64 u0;
	uint64 u1;
} Eq_43;

typedef union Eq_46 {
	int64 u0;
	uint64 u1;
} Eq_46;

typedef union Eq_48 {
	int64 u0;
	uint64 u1;
} Eq_48;

typedef union Eq_49 {
	int64 u0;
	uint64 u1;
} Eq_49;

typedef word64 (Eq_54)();

typedef void (Eq_66)();

typedef word64 (Eq_71)(word64);

typedef void (Eq_76)();

typedef union Eq_82 {
	uint32 u0;
	real32 u1;
} Eq_82;

typedef union Eq_106 {
	real32 u0;
	up32 u1;
} Eq_106;

typedef real32 (Eq_109)(real32);

typedef real64 (Eq_123)(Eq_125);

typedef union Eq_125 {
	real32 u0;
	real64 u1;
} Eq_125;

typedef struct Eq_130 {
	char * ptr0008;	// 8
	char * ptr0010;	// 10
} Eq_130;

typedef int32 (Eq_131)(char *, char *);

typedef int32 (Eq_140)(char *);

typedef real32 (Eq_150)(char *, char * *);

typedef word128 (Eq_160)(word128, int32);

typedef word128 (Eq_166)(word128);

typedef int32 (Eq_173)(char *, real64);

typedef int32 (Eq_179)(char *, real64);

typedef void (Eq_190)();

typedef union Eq_193 {
	int64 u0;
	ptr64 u1;
} Eq_193;

typedef union Eq_201 {
	int64 u0;
	uint64 u1;
} Eq_201;

