// PIC18Legacy.h
// Generated by decompiling PIC18Legacy.hex
// using Reko decompiler version 0.11.4.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(1 byte b0001)
		(C0 cu8 b00C0)
		(C1 cu8 b00C1)
		(C2 cu8 b00C2)
		(C3 cu8 b00C3)
		(C4 cu8 b00C4)
		(C5 cu8 b00C5)
		(C6 cu8 b00C6)
		(C7 byte b00C7)
		(C8 byte b00C8)
		(C9 byte b00C9)
		(CA byte b00CA))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_12: (fn void (cu8, Eq_15, Eq_16))
	T_12 (in fn00000E @ 000146 : ptr32)
	T_13 (in signature of fn00000E @ 00000E : void)
Eq_15: (union "Eq_15" (word16 u0) ((ptr32 byte) u1))
	T_15 (in FSR0 @ 000146 : Eq_15)
	T_17 (in 0<16> @ 000146 : word16)
	T_114 (in FSR0 + 1<16> @ 00008A : word16)
Eq_16: (union "Eq_16" (ptr16 u0) (word24 u1))
	T_16 (in TBLPTR @ 000146 : Eq_16)
	T_18 (in 0<24> @ 000146 : word24)
	T_22 (in p1 @ 00001C : ptr16)
Eq_20: (fn void (Eq_16, byte))
	T_20 (in __tblrd @ 00001C : ptr32)
	T_21 (in signature of __tblrd : void)
	T_28 (in __tblrd @ 000022 : ptr32)
	T_42 (in __tblrd @ 000030 : ptr32)
	T_47 (in __tblrd @ 000036 : ptr32)
	T_52 (in __tblrd @ 00003C : ptr32)
	T_57 (in __tblrd @ 000042 : ptr32)
	T_60 (in __tblrd @ 000044 : ptr32)
	T_63 (in __tblrd @ 00004A : ptr32)
	T_66 (in __tblrd @ 000050 : ptr32)
	T_69 (in __tblrd @ 000052 : ptr32)
	T_72 (in __tblrd @ 000054 : ptr32)
	T_77 (in __tblrd @ 00005A : ptr32)
	T_82 (in __tblrd @ 000060 : ptr32)
	T_85 (in __tblrd @ 000062 : ptr32)
	T_103 (in __tblrd @ 000086 : ptr32)
Eq_137: (union "Eq_137" (bool u0) (byte u1))
	T_137 (in !(bool) cond(g_b00C5) @ 0000A6 : bool)
Eq_149: (struct "Eq_149" (FE byte b00FE))
	T_149 (in FSR2 @ 0000AA : (ptr16 Eq_149))
Eq_150: (struct "Eq_150" (0 byte b0000) (1 byte b0001))
	T_150 (in FSR1 @ 0000AA : (ptr16 Eq_150))
Eq_186: (union "Eq_186" (word16 u0) ((ptr32 byte) u1))
	T_186 (in FSR0 @ 0000EC : Eq_186)
	T_193 (in FSR0 + 1<16> @ 00012C : word16)
	T_199 (in FSR0 + 1<16> @ 000136 : word16)
Eq_192: (union "Eq_192" (word16 u0) ((ptr32 byte) u1))
	T_192 (in 1<16> @ 00012C : word16)
Eq_196: (union "Eq_196" (word16 u0) ((ptr32 byte) u1))
	T_196 (in FSR0 + 0<16> @ 000136 : word16)
Eq_198: (union "Eq_198" (word16 u0) ((ptr32 byte) u1))
	T_198 (in 1<16> @ 000136 : word16)
Eq_201: (struct "Eq_201" 0001 (0 ptr32 ptr0000))
	T_201
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in TABLAT : cu8)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_3: (in 0001 @ 000144 : ptr16)
  Class: Eq_3
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_4 t0000)))
T_4: (in Data[0x0001<p16>:byte] @ 000144 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0xBF<8> @ 000144 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in g_b0001 & 0xBF<8> @ 000144 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_7: (in Data21[0x0001<p16>:byte] @ 000144 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_8: (in 00014A @ 000146 : ptr32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_9: (in Data21 @ 000146 : (arr Eq_201))
  Class: Eq_9
  DataType: (ptr8 (arr Eq_201))
  OrigDataType: (ptr8 (struct (0 (arr T_201) a0000)))
T_10: (in 1<8> @ 000146 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in Data21[1<8>] @ 000146 : ptr32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_12: (in fn00000E @ 000146 : ptr32)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: (ptr32 (fn T_19 (T_2, T_17, T_18)))
T_13: (in signature of fn00000E @ 00000E : void)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: 
T_14: (in TABLAT @ 000146 : cu8)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_15: (in FSR0 @ 000146 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_16: (in TBLPTR @ 000146 : Eq_16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: (union (ptr16 u0) (word24 u1))
T_17: (in 0<16> @ 000146 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in 0<24> @ 000146 : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: word24
T_19: (in fn00000E(TABLAT, 0<16>, 0<24>) @ 000146 : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __tblrd @ 00001C : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_25 (T_16, T_24)))
T_21: (in signature of __tblrd : void)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: 
T_22: (in p1 @ 00001C : ptr16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: 
T_23: (in p2 @ 00001C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: 
T_24: (in 1<8> @ 00001C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in __tblrd(TBLPTR, 1<8>) @ 00001C : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in 00C5 @ 000020 : ptr16)
  Class: Eq_26
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_2 t0000)))
T_27: (in Data13[0x00C5<p16>:byte] @ 000020 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_28: (in __tblrd @ 000022 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_30 (T_16, T_29)))
T_29: (in 1<8> @ 000022 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_30: (in __tblrd(TBLPTR, 1<8>) @ 000022 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_31: (in 00C6 @ 000026 : ptr16)
  Class: Eq_31
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_2 t0000)))
T_32: (in Data16[0x00C6<p16>:byte] @ 000026 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_33: (in TBLPTRL_4 @ 000010 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 6<8> @ 000010 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in TBLPTRH_46 @ 000014 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0<8> @ 000014 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in TBLPTRU_49 @ 000018 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0<8> @ 000018 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in v19_98 @ 000024 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0<8> @ 000024 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_41: (in TABLAT != 0<8> @ 000024 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_42: (in __tblrd @ 000030 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_44 (T_16, T_43)))
T_43: (in 1<8> @ 000030 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_44: (in __tblrd(TBLPTR, 1<8>) @ 000030 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_45: (in 00C0 @ 000034 : ptr16)
  Class: Eq_45
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_46 t0000)))
T_46: (in Data29[0x00C0<p16>:byte] @ 000034 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_47: (in __tblrd @ 000036 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_49 (T_16, T_48)))
T_48: (in 1<8> @ 000036 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_49: (in __tblrd(TBLPTR, 1<8>) @ 000036 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_50: (in 00C1 @ 00003A : ptr16)
  Class: Eq_50
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_51 t0000)))
T_51: (in Data31[0x00C1<p16>:byte] @ 00003A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_52: (in __tblrd @ 00003C : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_54 (T_16, T_53)))
T_53: (in 1<8> @ 00003C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_54: (in __tblrd(TBLPTR, 1<8>) @ 00003C : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_55: (in 00C2 @ 000040 : ptr16)
  Class: Eq_55
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_56 t0000)))
T_56: (in Data33[0x00C2<p16>:byte] @ 000040 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_57: (in __tblrd @ 000042 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_59 (T_16, T_58)))
T_58: (in 1<8> @ 000042 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_59: (in __tblrd(TBLPTR, 1<8>) @ 000042 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_60: (in __tblrd @ 000044 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_62 (T_16, T_61)))
T_61: (in 1<8> @ 000044 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_62: (in __tblrd(TBLPTR, 1<8>) @ 000044 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_63: (in __tblrd @ 00004A : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_65 (T_16, T_64)))
T_64: (in 1<8> @ 00004A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_65: (in __tblrd(TBLPTR, 1<8>) @ 00004A : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_66: (in __tblrd @ 000050 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_68 (T_16, T_67)))
T_67: (in 1<8> @ 000050 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_68: (in __tblrd(TBLPTR, 1<8>) @ 000050 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_69: (in __tblrd @ 000052 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_71 (T_16, T_70)))
T_70: (in 1<8> @ 000052 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_71: (in __tblrd(TBLPTR, 1<8>) @ 000052 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_72: (in __tblrd @ 000054 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_74 (T_16, T_73)))
T_73: (in 1<8> @ 000054 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_74: (in __tblrd(TBLPTR, 1<8>) @ 000054 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_75: (in 00C3 @ 000058 : ptr16)
  Class: Eq_75
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_2 t0000)))
T_76: (in Data39[0x00C3<p16>:byte] @ 000058 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_77: (in __tblrd @ 00005A : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_79 (T_16, T_78)))
T_78: (in 1<8> @ 00005A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_79: (in __tblrd(TBLPTR, 1<8>) @ 00005A : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_80: (in 00C4 @ 00005E : ptr16)
  Class: Eq_80
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_2 t0000)))
T_81: (in Data41[0x00C4<p16>:byte] @ 00005E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_82: (in __tblrd @ 000060 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_84 (T_16, T_83)))
T_83: (in 1<8> @ 000060 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_84: (in __tblrd(TBLPTR, 1<8>) @ 000060 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_85: (in __tblrd @ 000062 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_87 (T_16, T_86)))
T_86: (in 1<8> @ 000062 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_87: (in __tblrd(TBLPTR, 1<8>) @ 000062 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_88: (in 00C7 @ 000064 : ptr16)
  Class: Eq_88
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_33 t0000)))
T_89: (in Data44[0x00C7<p16>:byte] @ 000064 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_90: (in 00C8 @ 000068 : ptr16)
  Class: Eq_90
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_35 t0000)))
T_91: (in Data47[0x00C8<p16>:byte] @ 000068 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_92: (in 00C9 @ 00006C : ptr16)
  Class: Eq_92
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_37 t0000)))
T_93: (in Data50[0x00C9<p16>:byte] @ 00006C : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_94: (in Data50[0x00C3<p16>:byte] @ 00007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_95: (in Data55[0x00C3<p16>:byte] @ 00007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_96: (in v22_101 @ 00007E : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in Data55[0x00C3<p16>:byte] @ 00007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_98: (in 0<8> @ 00007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_99: (in g_b00C3 != 0<8> @ 00007E : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_100: (in Data19[0x00C5<p16>:byte] @ 00002A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_101: (in 0<8> @ 00002A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_102: (in g_b00C5 == 0<8> @ 00002A : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in __tblrd @ 000086 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_105 (T_16, T_104)))
T_104: (in 1<8> @ 000086 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_105: (in __tblrd(TBLPTR, 1<8>) @ 000086 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_106: (in 0<16> @ 00008A : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in FSR0 + 0<16> @ 00008A : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Data77[FSR0 + 0<16>:byte] @ 00008A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_109: (in Data77[0x00C3<p16>:byte] @ 00008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_110: (in 1<8> @ 00008C : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in g_b00C3 - 1<8> @ 00008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_112: (in Data80[0x00C3<p16>:byte] @ 00008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_113: (in 1<16> @ 00008A : word16)
  Class: Eq_113
  DataType: (ptr32 byte)
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_114: (in FSR0 + 1<16> @ 00008A : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_115: (in Data80[0x00C3<p16>:byte] @ 00008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_116: (in 0<8> @ 00008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_117: (in g_b00C3 != 0<8> @ 00008C : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_118: (in Data80[0x00C3<p16>:byte] @ 00008E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: cu8
T_119: (in 0<8> @ 00008E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: cu8
T_120: (in g_b00C3 < 0<8> @ 00008E : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in Data59[0x00C4<p16>:byte] @ 000082 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_122: (in Data60[0x00C4<p16>:byte] @ 000082 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_123: (in Data60[0x00C4<p16>:byte] @ 000084 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_124: (in 0<8> @ 000084 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_125: (in g_b00C4 == 0<8> @ 000084 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in Data60[0x00C7<p16>:byte] @ 000094 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_127: (in Data60[0x00C8<p16>:byte] @ 000098 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_128: (in Data60[0x00C9<p16>:byte] @ 00009C : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_129: (in Data60[0x00C5<p16>:byte] @ 0000A2 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_130: (in 1<8> @ 0000A2 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in g_b00C5 - 1<8> @ 0000A2 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_132: (in Data67[0x00C5<p16>:byte] @ 0000A2 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_133: (in Data67[0x00C6<p16>:byte] @ 0000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_134: (in Data67[0x00C5<p16>:byte] @ 0000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_135: (in cond(Data67[0x00C5<p16>:byte]) @ 0000A6 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in SLICE(cond(Data67[0x00C5<p16>:byte]), bool, 0) @ 0000A6 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in !(bool) cond(g_b00C5) @ 0000A6 : bool)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: (union (bool u0) (byte u1))
T_138: (in g_b00C6 - !((bool) cond(g_b00C5)) @ 0000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_139: (in Data71[0x00C6<p16>:byte] @ 0000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_140: (in Data71[0x00C6<p16>:byte] @ 0000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_141: (in 0<8> @ 0000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_142: (in g_b00C6 != 0<8> @ 0000A6 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_143: (in Data80[0x00C4<p16>:byte] @ 000090 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_144: (in 1<8> @ 000090 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in g_b00C4 - 1<8> @ 000090 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_146: (in Data83[0x00C4<p16>:byte] @ 000090 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_147: (in LATB @ 0000AA : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in FSR2L @ 0000AA : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in FSR2 @ 0000AA : (ptr16 Eq_149))
  Class: Eq_149
  DataType: (ptr16 Eq_149)
  OrigDataType: (ptr16 (struct (FE T_175 t00FE)))
T_150: (in FSR1 @ 0000AA : (ptr16 Eq_150))
  Class: Eq_150
  DataType: (ptr16 Eq_150)
  OrigDataType: (ptr16 (struct (0 T_153 t0000) (1 T_156 t0001)))
T_151: (in 0<16> @ 0000D0 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in FSR1 + 0<16> @ 0000D0 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in Data5[FSR1 + 0<16>:byte] @ 0000D0 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_154: (in 1<16> @ 0000F4 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in FSR1 + 1<16> @ 0000F4 : word16)
  Class: Eq_155
  DataType: ptr16
  OrigDataType: ptr16
T_156: (in Data11[FSR1 + 1<16>:byte] @ 0000F4 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_157: (in FSR1 + 1<16> @ 0000F4 : word16)
  Class: Eq_157
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 byte)
T_158: (in Data16[FSR1 + 1<16>:byte] @ 0000F4 : byte)
  Class: Eq_156
  DataType: byte
  OrigDataType: byte
T_159: (in 00CA @ 0000E0 : ptr16)
  Class: Eq_159
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_160 t0000)))
T_160: (in Data11[0x00CA<p16>:byte] @ 0000E0 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in 1<8> @ 0000E0 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in g_b00CA & 1<8> @ 0000E0 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0<8> @ 0000E0 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_164: (in (g_b00CA & 1<8>) != 0<8> @ 0000E0 : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in Data11[0x00CA<p16>:byte] @ 0000E4 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_166: (in 0xFE<8> @ 0000E4 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in g_b00CA & 0xFE<8> @ 0000E4 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_168: (in Data24[0x00CA<p16>:byte] @ 0000E4 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_169: (in 1<8> @ 0000EA : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in LATB & 1<8> @ 0000EA : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in 0<8> @ 0000EA : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_172: (in (LATB & 1<8>) == 0<8> @ 0000EA : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in 0xFE<8> @ 0000DC : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in FSR2 + 0xFE<8> @ 0000DC : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in Data11[FSR2 + 0xFE<8>:byte] @ 0000DC : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in 0<8> @ 0000DC : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_177: (in FSR2->b00FE == 0<8> @ 0000DC : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in 0x7F<8> @ 0000F0 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in LATB & 0x7F<8> @ 0000F0 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_180: (in 0x80<8> @ 0000EC : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in LATB | 0x80<8> @ 0000EC : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_182: (in WREG @ 0000EC : cu8)
  Class: Eq_182
  DataType: cu8
  OrigDataType: cu8
T_183: (in FSR0L @ 0000EC : cu8)
  Class: Eq_183
  DataType: cu8
  OrigDataType: cu8
T_184: (in FSR0H @ 0000EC : cu8)
  Class: Eq_182
  DataType: cu8
  OrigDataType: cu8
T_185: (in PRODL @ 0000EC : cu8)
  Class: Eq_183
  DataType: cu8
  OrigDataType: cu8
T_186: (in FSR0 @ 0000EC : Eq_186)
  Class: Eq_186
  DataType: Eq_186
  OrigDataType: word32
T_187: (in FSR0H < WREG @ 000128 : bool)
  Class: Eq_187
  DataType: bool
  OrigDataType: bool
T_188: (in 0<8> @ 00012C : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in 0<16> @ 00012C : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in FSR0 + 0<16> @ 00012C : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Data6[FSR0 + 0<16>:byte] @ 00012C : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_192: (in 1<16> @ 00012C : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_193: (in FSR0 + 1<16> @ 00012C : word16)
  Class: Eq_186
  DataType: Eq_186
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_194: (in 0<8> @ 000136 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in 0<16> @ 000136 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in FSR0 + 0<16> @ 000136 : word16)
  Class: Eq_196
  DataType: Eq_196
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_197: (in Data16[FSR0 + 0<16>:byte] @ 000136 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_198: (in 1<16> @ 000136 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_199: (in FSR0 + 1<16> @ 000136 : word16)
  Class: Eq_186
  DataType: Eq_186
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_200: (in FSR0L < PRODL @ 000132 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201:
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: (struct 0001 (0 T_11 t0000))
T_202:
  Class: Eq_202
  DataType: (arr Eq_201)
  OrigDataType: (arr T_201)
*/
typedef struct Globals {
	byte b0001;	// 1
	cu8 b00C0;	// C0
	cu8 b00C1;	// C1
	cu8 b00C2;	// C2
	cu8 b00C3;	// C3
	cu8 b00C4;	// C4
	cu8 b00C5;	// C5
	cu8 b00C6;	// C6
	byte b00C7;	// C7
	byte b00C8;	// C8
	byte b00C9;	// C9
	byte b00CA;	// CA
} Eq_1;

typedef void (Eq_12)(cu8, Eq_15, Eq_16);

typedef union Eq_15 {
	word16 u0;
	byte * u1;
} Eq_15;

typedef union Eq_16 {
	ptr16 u0;
	word24 u1;
} Eq_16;

typedef void (Eq_20)(Eq_16, byte);

typedef union Eq_137 {
	bool u0;
	byte u1;
} Eq_137;

typedef struct Eq_149 {
	byte b00FE;	// FE
} Eq_149;

typedef struct Eq_150 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_150;

typedef union Eq_186 {
	word16 u0;
	byte * u1;
} Eq_186;

typedef union Eq_192 {
	word16 u0;
	byte * u1;
} Eq_192;

typedef union Eq_196 {
	word16 u0;
	byte * u1;
} Eq_196;

typedef union Eq_198 {
	word16 u0;
	byte * u1;
} Eq_198;

typedef struct Eq_201 {	// size: 1 1
	ptr32 ptr0000;	// 0
} Eq_201;

