// code.h
// Generated by decompiling code.bin
// using Reko decompiler version 0.11.4.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (800004FC real96 r800004FC) (80000508 real96 r80000508) (80000514 real96 r80000514) (80000520 real96 r80000520) (8000052C real96 r8000052C) (80000538 real96 r80000538))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in fn800003CC @ 80000000 : ptr32)
	T_3 (in signature of fn800003CC @ 800003CC : void)
Eq_51: (fn real96 (real96, real96))
	T_51 (in fn80000132 @ 80000262 : ptr32)
	T_52 (in signature of fn80000132 @ 80000132 : void)
	T_84 (in fn80000132 @ 80000320 : ptr32)
	T_114 (in fn80000132 @ 800003F2 : ptr32)
Eq_55: (fn real96 (real96))
	T_55 (in fn8000018E @ 80000262 : ptr32)
	T_56 (in signature of fn8000018E @ 8000018E : void)
	T_87 (in fn8000018E @ 80000320 : ptr32)
	T_116 (in fn8000018E @ 80000404 : ptr32)
Eq_105: (fn real96 (real96))
	T_105 (in fn800001F2 @ 80000380 : ptr32)
	T_106 (in signature of fn800001F2 @ 800001F2 : void)
	T_118 (in fn800001F2 @ 80000416 : ptr32)
Eq_108: (fn real96 (real96))
	T_108 (in fn800002AE @ 80000396 : ptr32)
	T_109 (in signature of fn800002AE @ 800002AE : void)
	T_120 (in fn800002AE @ 80000428 : ptr32)
Eq_122: (fn void (real96))
	T_122 (in fn8000036C @ 8000043A : ptr32)
	T_123 (in signature of fn8000036C @ 8000036C : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in fn800003CC @ 80000000 : ptr32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn T_4 ()))
T_3: (in signature of fn800003CC @ 800003CC : void)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: 
T_4: (in fn800003CC() @ 80000000 : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in fp0 @ 80000004 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_6: (in rArg04 @ 80000004 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_7: (in rArg10 @ 80000004 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_8: (in fp0_11 @ 80000138 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_9: (in 800004FC @ 80000138 : ptr32)
  Class: Eq_9
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_10 t0000)))
T_10: (in Mem10[0x800004FC<p32>:real96] @ 80000138 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_11: (in dwLoc14_55 @ 80000146 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0<32> @ 80000146 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_13: (in rLoc10_67 @ 80000160 : real96)
  Class: Eq_13
  DataType: real96
  OrigDataType: real96
T_14: (in rLoc10_67 * rArg04 @ 80000160 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_15: (in 1<32> @ 8000016C : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in dwLoc14_55 + 1<32> @ 8000016C : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_17: (in SLICE(fp0_11, word32, 0) @ 80000150 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in SLICE(fp0_11, word32, 32) @ 80000150 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in SLICE(fp0_11, word32, 64) @ 80000150 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in SEQ(SLICE(fp0_11, word32, 0), SLICE(fp0_11, word32, 32), SLICE(fp0_11, word32, 64)) @ 80000150 : word96)
  Class: Eq_13
  DataType: real96
  OrigDataType: word96
T_21: (in CONVERT(dwLoc14_55, word32, real96) @ 80000156 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_22: (in (real96) dwLoc14_55 >= rArg10 @ 80000156 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in fp0 @ 80000156 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_24: (in rArg04 @ 80000156 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_25: (in fp0_11 @ 80000194 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_26: (in 80000508 @ 80000194 : ptr32)
  Class: Eq_26
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_27 t0000)))
T_27: (in Mem10[0x80000508<p32>:real96] @ 80000194 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_28: (in dwLoc14_56 @ 800001A4 : int32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_29: (in 1<i32> @ 800001A4 : int32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_30: (in rLoc10_68 @ 800001C4 : real96)
  Class: Eq_30
  DataType: real96
  OrigDataType: real96
T_31: (in CONVERT(dwLoc14_56, word32, real96) @ 800001C4 : real96)
  Class: Eq_31
  DataType: real96
  OrigDataType: real96
T_32: (in CONVERT(CONVERT(dwLoc14_56, word32, real96), real96, real80) @ 800001C4 : real80)
  Class: Eq_32
  DataType: real80
  OrigDataType: real80
T_33: (in rLoc10_68 *96 (real80) ((real96) dwLoc14_56) @ 800001C4 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_34: (in 1<32> @ 800001CE : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in dwLoc14_56 + 1<32> @ 800001CE : word32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_36: (in SLICE(fp0_11, word32, 0) @ 800001AE : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in SLICE(fp0_11, word32, 32) @ 800001AE : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in SLICE(fp0_11, word32, 64) @ 800001AE : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in SEQ(SLICE(fp0_11, word32, 0), SLICE(fp0_11, word32, 32), SLICE(fp0_11, word32, 64)) @ 800001AE : word96)
  Class: Eq_30
  DataType: real96
  OrigDataType: word96
T_40: (in CONVERT(dwLoc14_56, word32, real96) @ 800001B4 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_41: (in (real96) dwLoc14_56 > rArg04 @ 800001B4 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in fp0 @ 800001B4 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_43: (in rArg04 @ 800001B4 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_44: (in rLoc1C_101 @ 80000210 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_45: (in 80000514 @ 80000210 : ptr32)
  Class: Eq_45
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_46 t0000)))
T_46: (in Mem15[0x80000514<p32>:real96] @ 80000210 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_47: (in dwLoc20_102 @ 80000218 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_48: (in 3<i32> @ 80000218 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_49: (in fp1_87 @ 800001F2 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_50: (in fp0_85 @ 80000262 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_51: (in fn80000132 @ 80000262 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_54 (T_43, T_53)))
T_52: (in signature of fn80000132 @ 80000132 : void)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: 
T_53: (in CONVERT(dwLoc20_102, word32, real96) @ 80000262 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_54: (in fn80000132(rArg04, (real96) dwLoc20_102) @ 80000262 : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_55: (in fn8000018E @ 80000262 : ptr32)
  Class: Eq_55
  DataType: (ptr32 Eq_55)
  OrigDataType: (ptr32 (fn T_58 (T_57)))
T_56: (in signature of fn8000018E @ 8000018E : void)
  Class: Eq_55
  DataType: (ptr32 Eq_55)
  OrigDataType: 
T_57: (in CONVERT(dwLoc20_102, word32, real96) @ 80000262 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_58: (in fn8000018E((real96) dwLoc20_102) @ 80000262 : real96)
  Class: Eq_58
  DataType: real96
  OrigDataType: real96
T_59: (in CONVERT(fn8000018E((real96) dwLoc20_102), real96, real80) @ 80000262 : real80)
  Class: Eq_59
  DataType: real80
  OrigDataType: real80
T_60: (in fn80000132(rArg04, (real96) dwLoc20_102) /96 (real80) fn8000018E((real96) dwLoc20_102) @ 80000262 : real96)
  Class: Eq_60
  DataType: real96
  OrigDataType: real96
T_61: (in fn80000132(rArg04, (real96) dwLoc20_102) /96 (real80) fn8000018E((real96) dwLoc20_102) * rLoc1C_101 @ 80000262 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_62: (in rLoc10_119 @ 8000026E : real96)
  Class: Eq_62
  DataType: real96
  OrigDataType: real96
T_63: (in CONVERT(fp0_85, real96, real80) @ 8000026E : real80)
  Class: Eq_63
  DataType: real80
  OrigDataType: real80
T_64: (in rLoc10_119 + (real80) fp0_85 @ 8000026E : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_65: (in 2<32> @ 80000284 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in dwLoc20_102 + 2<32> @ 80000284 : word32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_67: (in SLICE(fp1_87, word32, 0) @ 8000021E : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in SLICE(fp1_87, word32, 32) @ 8000021E : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in SLICE(fp1_87, word32, 64) @ 8000021E : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in SEQ(SLICE(fp1_87, word32, 0), SLICE(fp1_87, word32, 32), SLICE(fp1_87, word32, 64)) @ 8000021E : word96)
  Class: Eq_62
  DataType: real96
  OrigDataType: word96
T_71: (in 100<i32> @ 80000222 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_72: (in dwLoc20_102 > 100<i32> @ 80000222 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in fp0 @ 80000222 : real96)
  Class: Eq_73
  DataType: real96
  OrigDataType: real96
T_74: (in rArg04 @ 80000222 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_75: (in fp0_14 @ 800002B8 : real96)
  Class: Eq_73
  DataType: real96
  OrigDataType: real96
T_76: (in 80000520 @ 800002B8 : ptr32)
  Class: Eq_76
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_77 t0000)))
T_77: (in Mem13[0x80000520<p32>:real96] @ 800002B8 : real96)
  Class: Eq_73
  DataType: real96
  OrigDataType: real96
T_78: (in rLoc1C_100 @ 800002CE : real96)
  Class: Eq_78
  DataType: real96
  OrigDataType: real96
T_79: (in 8000052C @ 800002CE : ptr32)
  Class: Eq_79
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_80 t0000)))
T_80: (in Mem15[0x8000052C<p32>:real96] @ 800002CE : real96)
  Class: Eq_78
  DataType: real96
  OrigDataType: real96
T_81: (in dwLoc20_101 @ 800002D6 : int32)
  Class: Eq_81
  DataType: int32
  OrigDataType: int32
T_82: (in 2<i32> @ 800002D6 : int32)
  Class: Eq_81
  DataType: int32
  OrigDataType: int32
T_83: (in fp0_85 @ 80000320 : real96)
  Class: Eq_78
  DataType: real96
  OrigDataType: real96
T_84: (in fn80000132 @ 80000320 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_86 (T_74, T_85)))
T_85: (in CONVERT(dwLoc20_101, word32, real96) @ 80000320 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_86: (in fn80000132(rArg04, (real96) dwLoc20_101) @ 80000320 : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_87: (in fn8000018E @ 80000320 : ptr32)
  Class: Eq_55
  DataType: (ptr32 Eq_55)
  OrigDataType: (ptr32 (fn T_89 (T_88)))
T_88: (in CONVERT(dwLoc20_101, word32, real96) @ 80000320 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_89: (in fn8000018E((real96) dwLoc20_101) @ 80000320 : real96)
  Class: Eq_58
  DataType: real96
  OrigDataType: real96
T_90: (in CONVERT(fn8000018E((real96) dwLoc20_101), real96, real80) @ 80000320 : real80)
  Class: Eq_90
  DataType: real80
  OrigDataType: real80
T_91: (in fn80000132(rArg04, (real96) dwLoc20_101) /96 (real80) fn8000018E((real96) dwLoc20_101) @ 80000320 : real96)
  Class: Eq_91
  DataType: real96
  OrigDataType: real96
T_92: (in fn80000132(rArg04, (real96) dwLoc20_101) /96 (real80) fn8000018E((real96) dwLoc20_101) * rLoc1C_100 @ 80000320 : real96)
  Class: Eq_78
  DataType: real96
  OrigDataType: real96
T_93: (in rLoc10_118 @ 8000032C : real96)
  Class: Eq_93
  DataType: real96
  OrigDataType: real96
T_94: (in CONVERT(fp0_85, real96, real80) @ 8000032C : real80)
  Class: Eq_94
  DataType: real80
  OrigDataType: real80
T_95: (in rLoc10_118 + (real80) fp0_85 @ 8000032C : real96)
  Class: Eq_73
  DataType: real96
  OrigDataType: real96
T_96: (in 2<32> @ 80000342 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in dwLoc20_101 + 2<32> @ 80000342 : word32)
  Class: Eq_81
  DataType: int32
  OrigDataType: int32
T_98: (in SLICE(fp0_14, word32, 0) @ 800002DC : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in SLICE(fp0_14, word32, 32) @ 800002DC : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in SLICE(fp0_14, word32, 64) @ 800002DC : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in SEQ(SLICE(fp0_14, word32, 0), SLICE(fp0_14, word32, 32), SLICE(fp0_14, word32, 64)) @ 800002DC : word96)
  Class: Eq_93
  DataType: real96
  OrigDataType: word96
T_102: (in 100<i32> @ 800002E0 : int32)
  Class: Eq_81
  DataType: int32
  OrigDataType: int32
T_103: (in dwLoc20_101 > 100<i32> @ 800002E0 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in rArg04 @ 800002E0 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_105: (in fn800001F2 @ 80000380 : ptr32)
  Class: Eq_105
  DataType: (ptr32 Eq_105)
  OrigDataType: (ptr32 (fn T_107 (T_104)))
T_106: (in signature of fn800001F2 @ 800001F2 : void)
  Class: Eq_105
  DataType: (ptr32 Eq_105)
  OrigDataType: 
T_107: (in fn800001F2(rArg04) @ 80000380 : real96)
  Class: Eq_107
  DataType: real96
  OrigDataType: real96
T_108: (in fn800002AE @ 80000396 : ptr32)
  Class: Eq_108
  DataType: (ptr32 Eq_108)
  OrigDataType: (ptr32 (fn T_110 (T_104)))
T_109: (in signature of fn800002AE @ 800002AE : void)
  Class: Eq_108
  DataType: (ptr32 Eq_108)
  OrigDataType: 
T_110: (in fn800002AE(rArg04) @ 80000396 : real96)
  Class: Eq_110
  DataType: real96
  OrigDataType: real96
T_111: (in fp0_8 @ 800003D0 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_112: (in 80000538 @ 800003D0 : ptr32)
  Class: Eq_112
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_113 t0000)))
T_113: (in Mem5[0x80000538<p32>:real96] @ 800003D0 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_114: (in fn80000132 @ 800003F2 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_115 (T_111, T_111)))
T_115: (in fn80000132(fp0_8, fp0_8) @ 800003F2 : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_116: (in fn8000018E @ 80000404 : ptr32)
  Class: Eq_55
  DataType: (ptr32 Eq_55)
  OrigDataType: (ptr32 (fn T_117 (T_111)))
T_117: (in fn8000018E(fp0_8) @ 80000404 : real96)
  Class: Eq_58
  DataType: real96
  OrigDataType: real96
T_118: (in fn800001F2 @ 80000416 : ptr32)
  Class: Eq_105
  DataType: (ptr32 Eq_105)
  OrigDataType: (ptr32 (fn T_119 (T_111)))
T_119: (in fn800001F2(fp0_8) @ 80000416 : real96)
  Class: Eq_107
  DataType: real96
  OrigDataType: real96
T_120: (in fn800002AE @ 80000428 : ptr32)
  Class: Eq_108
  DataType: (ptr32 Eq_108)
  OrigDataType: (ptr32 (fn T_121 (T_111)))
T_121: (in fn800002AE(fp0_8) @ 80000428 : real96)
  Class: Eq_110
  DataType: real96
  OrigDataType: real96
T_122: (in fn8000036C @ 8000043A : ptr32)
  Class: Eq_122
  DataType: (ptr32 Eq_122)
  OrigDataType: (ptr32 (fn T_124 (T_111)))
T_123: (in signature of fn8000036C @ 8000036C : void)
  Class: Eq_122
  DataType: (ptr32 Eq_122)
  OrigDataType: 
T_124: (in fn8000036C(fp0_8) @ 8000043A : void)
  Class: Eq_124
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	real96 r800004FC;	// 800004FC
	real96 r80000508;	// 80000508
	real96 r80000514;	// 80000514
	real96 r80000520;	// 80000520
	real96 r8000052C;	// 8000052C
	real96 r80000538;	// 80000538
} Eq_1;

typedef void (Eq_2)();

typedef real96 (Eq_51)(real96, real96);

typedef real96 (Eq_55)(real96);

typedef real96 (Eq_105)(real96);

typedef real96 (Eq_108)(real96);

typedef void (Eq_122)(real96);

