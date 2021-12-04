// PIC18Legacy.h
// Generated by decompiling PIC18Legacy.hex
// using Reko decompiler version 0.10.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (1 byte b0001) (C0 cu8 b00C0) (C1 cu8 b00C1) (C2 cu8 b00C2) (C3 cu8 b00C3) (C4 cu8 b00C4) (C5 cu8 b00C5) (C6 cu8 b00C6) (C7 byte b00C7) (C8 byte b00C8) (C9 byte b00C9) (CA byte b00CA))
	globals_t (in globals @ 00000000 : (ptr32 (struct "Globals")))
Eq_12: (fn void (cu8, Eq_15, word24))
	T_12 (in fn00000E @ 00000146 : ptr32)
	T_13 (in signature of fn00000E @ 0000000E : void)
Eq_15: (union "Eq_15" (word16 u0) ((ptr32 byte) u1))
	T_15 (in FSR0 @ 00000146 : Eq_15)
	T_17 (in 0<16> @ 00000146 : word16)
	T_120 (in FSR0 + 1<16> @ 0000008A : word16)
Eq_20: (fn void (word24, byte))
	T_20 (in __tblrd @ 0000001C : ptr32)
	T_21 (in signature of __tblrd @ 00000000 : void)
	T_28 (in __tblrd @ 00000022 : ptr32)
	T_42 (in __tblrd @ 00000030 : ptr32)
	T_47 (in __tblrd @ 00000036 : ptr32)
	T_52 (in __tblrd @ 0000003C : ptr32)
	T_57 (in __tblrd @ 00000042 : ptr32)
	T_60 (in __tblrd @ 00000044 : ptr32)
	T_63 (in __tblrd @ 0000004A : ptr32)
	T_66 (in __tblrd @ 00000050 : ptr32)
	T_69 (in __tblrd @ 00000052 : ptr32)
	T_72 (in __tblrd @ 00000054 : ptr32)
	T_77 (in __tblrd @ 0000005A : ptr32)
	T_82 (in __tblrd @ 00000060 : ptr32)
	T_85 (in __tblrd @ 00000062 : ptr32)
	T_107 (in __tblrd @ 00000086 : ptr32)
Eq_154: (union "Eq_154" (bool u0) (byte u1))
	T_154 (in !(bool) cond(g_b00C5) @ 000000A6 : bool)
Eq_170: (struct "Eq_170" (FE byte b00FE))
	T_170 (in FSR2 @ 000000AA : (ptr16 Eq_170))
Eq_171: (struct "Eq_171" (0 byte b0000) (1 byte b0001))
	T_171 (in FSR1 @ 000000AA : (ptr16 Eq_171))
Eq_209: (union "Eq_209" (word16 u0) ((ptr32 byte) u1))
	T_209 (in FSR0 @ 000000EC : Eq_209)
	T_216 (in FSR0 + 1<16> @ 0000012C : word16)
	T_222 (in FSR0 + 1<16> @ 00000136 : word16)
Eq_215: (union "Eq_215" (word16 u0) ((ptr32 byte) u1))
	T_215 (in 1<16> @ 0000012C : word16)
Eq_219: (union "Eq_219" (word16 u0) ((ptr32 byte) u1))
	T_219 (in FSR0 + 0<16> @ 00000136 : word16)
Eq_221: (union "Eq_221" (word16 u0) ((ptr32 byte) u1))
	T_221 (in 1<16> @ 00000136 : word16)
Eq_224: (struct "Eq_224" 0001 (0 ptr32 ptr0000))
	T_224
// Type Variables ////////////
globals_t: (in globals @ 00000000 : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in TABLAT @ 00000000 : cu8)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_3: (in 0001 @ 00000144 : ptr16)
  Class: Eq_3
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_4 t0000)))
T_4: (in Data[0x0001<p16>:byte] @ 00000144 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0xBF<8> @ 00000144 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in g_b0001 & 0xBF<8> @ 00000000 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_7: (in Data21[0x0001<p16>:byte] @ 00000144 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_8: (in 00014A @ 00000146 : ptr32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_9: (in Data21 @ 00000146 : (arr Eq_224))
  Class: Eq_9
  DataType: (ptr8 (arr Eq_224))
  OrigDataType: (ptr8 (struct (0 (arr T_224) a0000)))
T_10: (in 1<8> @ 00000146 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in Data21[1<8>] @ 00000146 : ptr32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_12: (in fn00000E @ 00000146 : ptr32)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: (ptr32 (fn T_19 (T_2, T_17, T_18)))
T_13: (in signature of fn00000E @ 0000000E : void)
  Class: Eq_12
  DataType: (ptr32 Eq_12)
  OrigDataType: 
T_14: (in TABLAT @ 00000146 : cu8)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_15: (in FSR0 @ 00000146 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_16: (in TBLPTR @ 00000146 : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: word24
T_17: (in 0<16> @ 00000146 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_18: (in 0<24> @ 00000146 : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: word24
T_19: (in fn00000E(TABLAT, 0<16>, 0<24>) @ 00000146 : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __tblrd @ 0000001C : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_25 (T_16, T_24)))
T_21: (in signature of __tblrd @ 00000000 : void)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: 
T_22: (in  @ 0000001C : word24)
  Class: Eq_16
  DataType: word24
  OrigDataType: 
T_23: (in  @ 0000001C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: 
T_24: (in 1<8> @ 0000001C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in __tblrd(TBLPTR, 1<8>) @ 0000001C : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in 00C5 @ 00000020 : ptr16)
  Class: Eq_26
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_27 t0000)))
T_27: (in Data13[0x00C5<p16>:byte] @ 00000020 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_28: (in __tblrd @ 00000022 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_30 (T_16, T_29)))
T_29: (in 1<8> @ 00000022 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_30: (in __tblrd(TBLPTR, 1<8>) @ 00000022 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_31: (in 00C6 @ 00000026 : ptr16)
  Class: Eq_31
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_32 t0000)))
T_32: (in Data16[0x00C6<p16>:byte] @ 00000026 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_33: (in TBLPTRL_4 @ 00000010 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 6<8> @ 00000010 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in TBLPTRH_46 @ 00000014 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0<8> @ 00000014 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in TBLPTRU_49 @ 00000018 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0<8> @ 00000018 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in v20_98 @ 00000024 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0<8> @ 00000024 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_41: (in TABLAT != 0<8> @ 00000000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_42: (in __tblrd @ 00000030 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_44 (T_16, T_43)))
T_43: (in 1<8> @ 00000030 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_44: (in __tblrd(TBLPTR, 1<8>) @ 00000030 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_45: (in 00C0 @ 00000034 : ptr16)
  Class: Eq_45
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_46 t0000)))
T_46: (in Data29[0x00C0<p16>:byte] @ 00000034 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_47: (in __tblrd @ 00000036 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_49 (T_16, T_48)))
T_48: (in 1<8> @ 00000036 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_49: (in __tblrd(TBLPTR, 1<8>) @ 00000036 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_50: (in 00C1 @ 0000003A : ptr16)
  Class: Eq_50
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_51 t0000)))
T_51: (in Data31[0x00C1<p16>:byte] @ 0000003A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_52: (in __tblrd @ 0000003C : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_54 (T_16, T_53)))
T_53: (in 1<8> @ 0000003C : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_54: (in __tblrd(TBLPTR, 1<8>) @ 0000003C : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_55: (in 00C2 @ 00000040 : ptr16)
  Class: Eq_55
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_56 t0000)))
T_56: (in Data33[0x00C2<p16>:byte] @ 00000040 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_57: (in __tblrd @ 00000042 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_59 (T_16, T_58)))
T_58: (in 1<8> @ 00000042 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_59: (in __tblrd(TBLPTR, 1<8>) @ 00000042 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_60: (in __tblrd @ 00000044 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_62 (T_16, T_61)))
T_61: (in 1<8> @ 00000044 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_62: (in __tblrd(TBLPTR, 1<8>) @ 00000044 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_63: (in __tblrd @ 0000004A : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_65 (T_16, T_64)))
T_64: (in 1<8> @ 0000004A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_65: (in __tblrd(TBLPTR, 1<8>) @ 0000004A : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_66: (in __tblrd @ 00000050 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_68 (T_16, T_67)))
T_67: (in 1<8> @ 00000050 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_68: (in __tblrd(TBLPTR, 1<8>) @ 00000050 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_69: (in __tblrd @ 00000052 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_71 (T_16, T_70)))
T_70: (in 1<8> @ 00000052 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_71: (in __tblrd(TBLPTR, 1<8>) @ 00000052 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_72: (in __tblrd @ 00000054 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_74 (T_16, T_73)))
T_73: (in 1<8> @ 00000054 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_74: (in __tblrd(TBLPTR, 1<8>) @ 00000054 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_75: (in 00C3 @ 00000058 : ptr16)
  Class: Eq_75
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_76 t0000)))
T_76: (in Data39[0x00C3<p16>:byte] @ 00000058 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_77: (in __tblrd @ 0000005A : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_79 (T_16, T_78)))
T_78: (in 1<8> @ 0000005A : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_79: (in __tblrd(TBLPTR, 1<8>) @ 0000005A : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_80: (in 00C4 @ 0000005E : ptr16)
  Class: Eq_80
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_81 t0000)))
T_81: (in Data41[0x00C4<p16>:byte] @ 0000005E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_82: (in __tblrd @ 00000060 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_84 (T_16, T_83)))
T_83: (in 1<8> @ 00000060 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_84: (in __tblrd(TBLPTR, 1<8>) @ 00000060 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_85: (in __tblrd @ 00000062 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_87 (T_16, T_86)))
T_86: (in 1<8> @ 00000062 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_87: (in __tblrd(TBLPTR, 1<8>) @ 00000062 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_88: (in 00C7 @ 00000064 : ptr16)
  Class: Eq_88
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_89 t0000)))
T_89: (in Data44[0x00C7<p16>:byte] @ 00000064 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_90: (in 00C8 @ 00000068 : ptr16)
  Class: Eq_90
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_91 t0000)))
T_91: (in Data47[0x00C8<p16>:byte] @ 00000068 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_92: (in 00C9 @ 0000006C : ptr16)
  Class: Eq_92
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_93 t0000)))
T_93: (in Data50[0x00C9<p16>:byte] @ 0000006C : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_94: (in 00C3 @ 0000007E : ptr16)
  Class: Eq_94
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_95 t0000)))
T_95: (in Data50[0x00C3<p16>:byte] @ 0000007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_96: (in 00C3 @ 0000007E : ptr16)
  Class: Eq_96
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_97 t0000)))
T_97: (in Data55[0x00C3<p16>:byte] @ 0000007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_98: (in v23_101 @ 0000007E : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 00C3 @ 0000007E : ptr16)
  Class: Eq_99
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_100 t0000)))
T_100: (in Data55[0x00C3<p16>:byte] @ 0000007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_101: (in 0<8> @ 0000007E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_102: (in g_b00C3 != 0<8> @ 00000000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_103: (in 00C5 @ 0000002A : ptr16)
  Class: Eq_103
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_104 t0000)))
T_104: (in Data19[0x00C5<p16>:byte] @ 0000002A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_105: (in 0<8> @ 0000002A : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_106: (in g_b00C5 == 0<8> @ 00000000 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in __tblrd @ 00000086 : ptr32)
  Class: Eq_20
  DataType: (ptr32 Eq_20)
  OrigDataType: (ptr32 (fn T_109 (T_16, T_108)))
T_108: (in 1<8> @ 00000086 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_109: (in __tblrd(TBLPTR, 1<8>) @ 00000086 : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_110: (in 0<16> @ 0000008A : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in FSR0 + 0<16> @ 0000008A : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Data77[FSR0 + 0<16>:byte] @ 0000008A : byte)
  Class: Eq_2
  DataType: Eq_15
  OrigDataType: cu8
T_113: (in 00C3 @ 0000008C : ptr16)
  Class: Eq_113
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_114 t0000)))
T_114: (in Data77[0x00C3<p16>:byte] @ 0000008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_115: (in 1<8> @ 0000008C : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in g_b00C3 - 1<8> @ 00000000 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_117: (in 00C3 @ 0000008C : ptr16)
  Class: Eq_117
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_118 t0000)))
T_118: (in Data80[0x00C3<p16>:byte] @ 0000008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_119: (in 1<16> @ 0000008A : word16)
  Class: Eq_119
  DataType: (ptr32 byte)
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_120: (in FSR0 + 1<16> @ 0000008A : word16)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: (union ((ptr32 (struct 0001 (0 byte b0000))) u0) ((ptr32 byte) u1))
T_121: (in 00C3 @ 0000008C : ptr16)
  Class: Eq_121
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_2 t0000)))
T_122: (in Data80[0x00C3<p16>:byte] @ 0000008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_123: (in 0<8> @ 0000008C : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_124: (in g_b00C3 != 0<8> @ 00000000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_125: (in Data80[0x00C3<p16>:byte] @ 0000008E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: cu8
T_126: (in 0<8> @ 0000008E : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: cu8
T_127: (in g_b00C3 < 0<8> @ 00000000 : bool)
  Class: Eq_127
  DataType: bool
  OrigDataType: bool
T_128: (in 00C4 @ 00000082 : ptr16)
  Class: Eq_128
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_129 t0000)))
T_129: (in Data59[0x00C4<p16>:byte] @ 00000082 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_130: (in 00C4 @ 00000082 : ptr16)
  Class: Eq_130
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_131 t0000)))
T_131: (in Data60[0x00C4<p16>:byte] @ 00000082 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_132: (in 00C4 @ 00000084 : ptr16)
  Class: Eq_132
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_133 t0000)))
T_133: (in Data60[0x00C4<p16>:byte] @ 00000084 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_134: (in 0<8> @ 00000084 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_135: (in g_b00C4 == 0<8> @ 00000000 : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in 00C7 @ 00000094 : ptr16)
  Class: Eq_136
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_137 t0000)))
T_137: (in Data60[0x00C7<p16>:byte] @ 00000094 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_138: (in 00C8 @ 00000098 : ptr16)
  Class: Eq_138
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_139 t0000)))
T_139: (in Data60[0x00C8<p16>:byte] @ 00000098 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_140: (in 00C9 @ 0000009C : ptr16)
  Class: Eq_140
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_141 t0000)))
T_141: (in Data60[0x00C9<p16>:byte] @ 0000009C : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_142: (in 00C5 @ 000000A2 : ptr16)
  Class: Eq_142
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_143 t0000)))
T_143: (in Data60[0x00C5<p16>:byte] @ 000000A2 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_144: (in 1<8> @ 000000A2 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in g_b00C5 - 1<8> @ 00000000 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_146: (in 00C5 @ 000000A2 : ptr16)
  Class: Eq_146
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_147 t0000)))
T_147: (in Data67[0x00C5<p16>:byte] @ 000000A2 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_148: (in 00C6 @ 000000A6 : ptr16)
  Class: Eq_148
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_149 t0000)))
T_149: (in Data67[0x00C6<p16>:byte] @ 000000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_150: (in 00C5 @ 000000A6 : ptr16)
  Class: Eq_150
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_151 t0000)))
T_151: (in Data67[0x00C5<p16>:byte] @ 000000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_152: (in cond(Data67[0x00C5<p16>:byte]) @ 000000A6 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in SLICE(cond(Data67[0x00C5<p16>:byte]), bool, 0) @ 000000A6 : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in !(bool) cond(g_b00C5) @ 000000A6 : bool)
  Class: Eq_154
  DataType: Eq_154
  OrigDataType: (union (bool u0) (byte u1))
T_155: (in g_b00C6 - !((bool) cond(g_b00C5)) @ 00000000 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_156: (in 00C6 @ 000000A6 : ptr16)
  Class: Eq_156
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_157 t0000)))
T_157: (in Data71[0x00C6<p16>:byte] @ 000000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_158: (in 00C6 @ 000000A6 : ptr16)
  Class: Eq_158
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_159 t0000)))
T_159: (in Data71[0x00C6<p16>:byte] @ 000000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_160: (in 0<8> @ 000000A6 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_161: (in g_b00C6 != 0<8> @ 00000000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_162: (in 00C4 @ 00000090 : ptr16)
  Class: Eq_162
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_163 t0000)))
T_163: (in Data80[0x00C4<p16>:byte] @ 00000090 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_164: (in 1<8> @ 00000090 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in g_b00C4 - 1<8> @ 00000000 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_166: (in 00C4 @ 00000090 : ptr16)
  Class: Eq_166
  DataType: (ptr16 cu8)
  OrigDataType: (ptr16 (struct (0 T_167 t0000)))
T_167: (in Data83[0x00C4<p16>:byte] @ 00000090 : byte)
  Class: Eq_2
  DataType: cu8
  OrigDataType: byte
T_168: (in LATB @ 000000AA : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in FSR2L @ 000000AA : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in FSR2 @ 000000AA : (ptr16 Eq_170))
  Class: Eq_170
  DataType: (ptr16 Eq_170)
  OrigDataType: (ptr16 (struct (FE T_198 t00FE)))
T_171: (in FSR1 @ 000000AA : (ptr16 Eq_171))
  Class: Eq_171
  DataType: (ptr16 Eq_171)
  OrigDataType: (ptr16 (struct (0 T_174 t0000) (1 T_177 t0001)))
T_172: (in 0<16> @ 000000D0 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in FSR1 + 0<16> @ 000000D0 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in Data5[FSR1 + 0<16>:byte] @ 000000D0 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_175: (in 1<16> @ 000000F4 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in FSR1 + 1<16> @ 000000F4 : word16)
  Class: Eq_176
  DataType: ptr16
  OrigDataType: ptr16
T_177: (in Data11[FSR1 + 1<16>:byte] @ 000000F4 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in FSR1 + 1<16> @ 000000F4 : word16)
  Class: Eq_178
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 byte)
T_179: (in Data16[FSR1 + 1<16>:byte] @ 000000F4 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_180: (in 00CA @ 000000E0 : ptr16)
  Class: Eq_180
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_181 t0000)))
T_181: (in Data11[0x00CA<p16>:byte] @ 000000E0 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in 1<8> @ 000000E0 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in g_b00CA & 1<8> @ 00000000 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in 0<8> @ 000000E0 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_185: (in (g_b00CA & 1<8>) != 0<8> @ 00000000 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in 00CA @ 000000E4 : ptr16)
  Class: Eq_186
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_187 t0000)))
T_187: (in Data11[0x00CA<p16>:byte] @ 000000E4 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_188: (in 0xFE<8> @ 000000E4 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in g_b00CA & 0xFE<8> @ 00000000 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_190: (in 00CA @ 000000E4 : ptr16)
  Class: Eq_190
  DataType: (ptr16 byte)
  OrigDataType: (ptr16 (struct (0 T_191 t0000)))
T_191: (in Data24[0x00CA<p16>:byte] @ 000000E4 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_192: (in 1<8> @ 000000EA : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_193: (in LATB & 1<8> @ 00000000 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in 0<8> @ 000000EA : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_195: (in (LATB & 1<8>) == 0<8> @ 00000000 : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in 0xFE<8> @ 000000DC : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in FSR2 + 0xFE<8> @ 000000DC : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in Data11[FSR2 + 0xFE<8>:byte] @ 000000DC : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in 0<8> @ 000000DC : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_200: (in FSR2->b00FE == 0<8> @ 00000000 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x7F<8> @ 000000F0 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in LATB & 0x7F<8> @ 00000000 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_203: (in 0x80<8> @ 000000EC : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in LATB | 0x80<8> @ 00000000 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_205: (in WREG @ 000000EC : cu8)
  Class: Eq_205
  DataType: cu8
  OrigDataType: cu8
T_206: (in FSR0L @ 000000EC : cu8)
  Class: Eq_206
  DataType: cu8
  OrigDataType: cu8
T_207: (in FSR0H @ 000000EC : cu8)
  Class: Eq_205
  DataType: cu8
  OrigDataType: cu8
T_208: (in PRODL @ 000000EC : cu8)
  Class: Eq_206
  DataType: cu8
  OrigDataType: cu8
T_209: (in FSR0 @ 000000EC : Eq_209)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: word32
T_210: (in FSR0H < WREG @ 00000000 : bool)
  Class: Eq_210
  DataType: bool
  OrigDataType: bool
T_211: (in 0<8> @ 0000012C : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in 0<16> @ 0000012C : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in FSR0 + 0<16> @ 0000012C : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Data6[FSR0 + 0<16>:byte] @ 0000012C : byte)
  Class: Eq_211
  DataType: Eq_209
  OrigDataType: byte
T_215: (in 1<16> @ 0000012C : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_216: (in FSR0 + 1<16> @ 0000012C : word16)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_217: (in 0<8> @ 00000136 : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in 0<16> @ 00000136 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in FSR0 + 0<16> @ 00000136 : word16)
  Class: Eq_219
  DataType: Eq_219
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_220: (in Data16[FSR0 + 0<16>:byte] @ 00000136 : byte)
  Class: Eq_217
  DataType: Eq_209
  OrigDataType: byte
T_221: (in 1<16> @ 00000136 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_222: (in FSR0 + 1<16> @ 00000136 : word16)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: (union (word16 u2) ((ptr32 byte) u1))
T_223: (in FSR0L < PRODL @ 00000000 : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224:
  Class: Eq_224
  DataType: Eq_224
  OrigDataType: (struct 0001 (0 T_11 t0000))
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

typedef void (Eq_12)(cu8, Eq_15, word24);

typedef union Eq_15 {
	word16 u0;
	byte * u1;
} Eq_15;

typedef void (Eq_20)(word24, byte);

typedef union Eq_154 {
	bool u0;
	byte u1;
} Eq_154;

typedef struct Eq_170 {
	byte b00FE;	// FE
} Eq_170;

typedef struct Eq_171 {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_171;

typedef union Eq_209 {
	word16 u0;
	byte * u1;
} Eq_209;

typedef union Eq_215 {
	word16 u0;
	byte * u1;
} Eq_215;

typedef union Eq_219 {
	word16 u0;
	byte * u1;
} Eq_219;

typedef union Eq_221 {
	word16 u0;
	byte * u1;
} Eq_221;

typedef struct Eq_224 {	// size: 1 1
	ptr32 ptr0000;	// 0
} Eq_224;

