// m68k_jump.h
// Generated by decompiling m68k_jump.bin
// using Reko decompiler version 0.11.4.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FF0F04 int32 dwFF0F04) (FF0F08 int32 dwFF0F08))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (struct "Eq_2" (0 int32 dw0000) (4 (arr byte) a0004))
	T_2 (in a0 : (ptr32 Eq_2))
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in a0 : (ptr32 Eq_2))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (struct (0 T_6 t0000) (4 (arr T_70) a0004)))
T_3: (in a1 : (ptr32 word32))
  Class: Eq_3
  DataType: (ptr32 word32)
  OrigDataType: word32
T_4: (in 0<32> @ 0000C034 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in a0 + 0<32> @ 0000C034 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in Mem47[a0 + 0<32>:word32] @ 0000C034 : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: word32
T_7: (in 00FF0F08 @ 0000C034 : ptr32)
  Class: Eq_7
  DataType: (ptr32 int32)
  OrigDataType: (ptr32 (struct (0 T_6 t0000)))
T_8: (in Mem53[0x00FF0F08<p32>:word32] @ 0000C034 : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: word32
T_9: (in 0<i32> @ 0000C03C : int32)
  Class: Eq_6
  DataType: int32
  OrigDataType: int32
T_10: (in 00FF0F04 @ 0000C03C : ptr32)
  Class: Eq_10
  DataType: (ptr32 int32)
  OrigDataType: (ptr32 (struct (0 T_6 t0000)))
T_11: (in Mem55[0x00FF0F04<p32>:word32] @ 0000C03C : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: word32
T_12: (in a6_141 @ 0000C030 : (ptr32 word32))
  Class: Eq_3
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct 0004 (0 word32 dw0000)))
T_13: (in a4_56 @ 0000C042 : int32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_14: (in 0<i32> @ 0000C042 : int32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_15: (in Mem60[0x00FF0F04<p32>:word32] @ 0000C3EA : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: int32
T_16: (in Mem60[0x00FF0F08<p32>:word32] @ 0000C3EA : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: int32
T_17: (in g_dwFF0F04 < g_dwFF0F08 @ 0000C3EA : bool)
  Class: Eq_17
  DataType: bool
  OrigDataType: bool
T_18: (in d3_71 @ 0000C054 : ui32)
  Class: Eq_18
  DataType: ui32
  OrigDataType: ui32
T_19: (in SLICE(a4_56, word24, 8) @ 0000C054 : word24)
  Class: Eq_19
  DataType: word24
  OrigDataType: word24
T_20: (in 4<i32> @ 0000C054 : int32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in a0 + 4<i32> @ 0000C054 : word32)
  Class: Eq_21
  DataType: (ptr32 (arr byte))
  OrigDataType: (ptr32 (struct (0 (arr T_70) a0000)))
T_22: (in a0 + 4<i32> + a4_56 @ 0000C054 : word32)
  Class: Eq_22
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_23 t0000)))
T_23: (in Mem60[a0 + 4<i32> + a4_56:byte] @ 0000C054 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in SEQ(SLICE(a4_56, word24, 8), Mem60[a0 + 4<i32> + a4_56:byte]) @ 0000C054 : uip32)
  Class: Eq_18
  DataType: ui32
  OrigDataType: uip32
T_25: (in v28_75 @ 0000C05C : cui16)
  Class: Eq_25
  DataType: cui16
  OrigDataType: cui16
T_26: (in SLICE(d3_71, word16, 0) @ 0000C05C : word16)
  Class: Eq_26
  DataType: cui16
  OrigDataType: cui16
T_27: (in 0xFF<16> @ 0000C05C : word16)
  Class: Eq_27
  DataType: cui16
  OrigDataType: cui16
T_28: (in (word16) d3_71 & 0xFF<16> @ 0000C05C : word16)
  Class: Eq_28
  DataType: cui16
  OrigDataType: cui16
T_29: (in 0xF0<16> @ 0000C05C : word16)
  Class: Eq_29
  DataType: cui16
  OrigDataType: cui16
T_30: (in (word16) d3_71 & 0xFF<16> & 0xF0<16> @ 0000C05C : word16)
  Class: Eq_25
  DataType: cui16
  OrigDataType: cui16
T_31: (in d0_80 @ 0000C060 : uip32)
  Class: Eq_31
  DataType: uip32
  OrigDataType: uip32
T_32: (in CONVERT(v28_75, word16, uint32) @ 0000C060 : uint32)
  Class: Eq_32
  DataType: uint32
  OrigDataType: uint32
T_33: (in SLICE(CONVERT(v28_75, word16, uint32), word24, 8) @ 0000C060 : word24)
  Class: Eq_33
  DataType: word24
  OrigDataType: word24
T_34: (in SLICE(v28_75, byte, 0) @ 0000C060 : byte)
  Class: Eq_34
  DataType: bcu8
  OrigDataType: bcu8
T_35: (in 2<8> @ 0000C060 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in (byte) v28_75 >> 2<8> @ 0000C060 : byte)
  Class: Eq_36
  DataType: uint8
  OrigDataType: uint8
T_37: (in SEQ(SLICE(CONVERT(v28_75, word16, uint32), word24, 8), SLICE(v28_75, byte, 0) >>u 2<8>) @ 0000C060 : uip32)
  Class: Eq_31
  DataType: uip32
  OrigDataType: uip32
T_38: (in 1<i32> @ 0000C052 : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in a4_56 + 1<i32> @ 0000C052 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_40: (in v35_82 @ 0000C062 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in SLICE(d0_80, word16, 0) @ 0000C062 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_42: (in SLICE(d0_80, word16, 0) @ 0000C066 : word16)
  Class: Eq_42
  DataType: ci16
  OrigDataType: ci16
T_43: (in 0x2C<16> @ 0000C066 : word16)
  Class: Eq_42
  DataType: ci16
  OrigDataType: ci16
T_44: (in (word16) d0_80 > 0x2C<16> @ 0000C066 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in d3_89 @ 0000C0A2 : ui32)
  Class: Eq_45
  DataType: ui32
  OrigDataType: ui32
T_46: (in 0xFF<32> @ 0000C0A2 : word32)
  Class: Eq_46
  DataType: ui32
  OrigDataType: ui32
T_47: (in d3_71 & 0xFF<32> @ 0000C0A2 : word32)
  Class: Eq_47
  DataType: ui32
  OrigDataType: ui32
T_48: (in 15<i32> @ 0000C0A2 : int32)
  Class: Eq_48
  DataType: int32
  OrigDataType: int32
T_49: (in d3_71 & 0xFF<32> & 15<i32> @ 0000C0A2 : word32)
  Class: Eq_49
  DataType: ui32
  OrigDataType: ui32
T_50: (in 1<32> @ 0000C0A2 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in (d3_71 & 0xFF<32> & 15<i32>) + 1<32> @ 0000C0A2 : word32)
  Class: Eq_45
  DataType: ui32
  OrigDataType: ui32
T_52: (in v36_92 @ 0000C0AE : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in SLICE(d3_89, word16, 0) @ 0000C0AE : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_54: (in SLICE(d3_89, word16, 16) @ 0000C0AE : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 1<i16> @ 0000C0AE : int16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_56: (in v36_92 - 1<i16> @ 0000C0AE : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in SEQ(SLICE(d3_89, word16, 16), v36_92 - 1<i16>) @ 0000C0AE : uipr32)
  Class: Eq_45
  DataType: ui32
  OrigDataType: uipr32
T_58: (in 0<16> @ 0000C0AE : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_59: (in v36_92 != 0<16> @ 0000C0AE : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in 0<i32> @ 0000C0A6 : int32)
  Class: Eq_60
  DataType: int32
  OrigDataType: int32
T_61: (in 0<32> @ 0000C0A6 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in a6_141 + 0<32> @ 0000C0A6 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in Mem98[a6_141 + 0<32>:word32] @ 0000C0A6 : word32)
  Class: Eq_60
  DataType: int32
  OrigDataType: word32
T_64: (in Mem98[0x00FF0F04<p32>:word32] @ 0000C0A8 : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: int32
T_65: (in 4<32> @ 0000C0A8 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in g_dwFF0F04 + 4<32> @ 0000C0A8 : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: int32
T_67: (in Mem101[0x00FF0F04<p32>:word32] @ 0000C0A8 : word32)
  Class: Eq_6
  DataType: int32
  OrigDataType: word32
T_68: (in 4<i32> @ 0000C0A6 : int32)
  Class: Eq_68
  DataType: int32
  OrigDataType: int32
T_69: (in a6_141 + 4<i32> @ 0000C0A6 : word32)
  Class: Eq_3
  DataType: (ptr32 word32)
  OrigDataType: ptr32
T_70:
  Class: Eq_70
  DataType: byte
  OrigDataType: (struct 0001 (0 T_23 t0000))
T_71:
  Class: Eq_71
  DataType: (arr byte)
  OrigDataType: (arr T_70)
*/
typedef struct Globals {
	int32 dwFF0F04;	// FF0F04
	int32 dwFF0F08;	// FF0F08
} Eq_1;

typedef struct Eq_2 {
	int32 dw0000;	// 0
	byte a0004[];	// 4
} Eq_2;

