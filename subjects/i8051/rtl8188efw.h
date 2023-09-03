// rtl8188efw.h
// Generated by decompiling rtl8188efw.bin
// using Reko decompiler version 0.11.5.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr16 (struct "Globals")))
Eq_2: (segment "Eq_2" (1D byte b001D))
	T_2 (in __data : (ptr16 Eq_2))
Eq_7: (fn void ())
	T_7 (in fn4EF3 @ 0797 : ptr16)
Eq_11: (segment "Eq_11" (157 byte b0157) (80EA bcu8 b80EA))
	T_11 (in __data_23 @ 079F : selector)
Eq_24: (fn void ())
	T_24 (in fn4AC0 @ 07A7 : ptr16)
// Type Variables ////////////
globals_t: (in globals : (ptr16 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr16 Eq_1)
  OrigDataType: (ptr16 (struct "Globals"))
T_2: (in __data : (ptr16 Eq_2))
  Class: Eq_2
  DataType: (ptr16 Eq_2)
  OrigDataType: (ptr16 (segment (1D T_6 t001D)))
T_3: (in 0<8> @ 077C : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in 0x001D<p16> @ 077C : mp16)
  Class: Eq_4
  DataType: (memptr (ptr16 Eq_2) byte)
  OrigDataType: (memptr T_2 (struct (0 T_6 t0000)))
T_5: (in __data:0x001D<p16> @ 077C : segptr32)
  Class: Eq_5
  DataType: segptr32
  OrigDataType: segptr32
T_6: (in Mem8[__data:0x001D<p16>:byte] @ 077C : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_7: (in fn4EF3 @ 0797 : ptr16)
  Class: Eq_7
  DataType: (ptr16 Eq_7)
  OrigDataType: (ptr16 (fn T_9 ()))
T_8: (in signature of fn4EF3 : void)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: 
T_9: (in fn4EF3() @ 0797 : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in 5<8> @ 079F : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __data_23 @ 079F : selector)
  Class: Eq_11
  DataType: (ptr16 Eq_11)
  OrigDataType: (ptr16 (segment (157 T_14 t0157) (80EA T_17 t80EA)))
T_12: (in 0x157<16> @ 079F : word16)
  Class: Eq_12
  DataType: (memptr (ptr16 Eq_11) byte)
  OrigDataType: (memptr T_11 (struct (0 T_14 t0000)))
T_13: (in __data_23:0x157<16> @ 079F : segptr32)
  Class: Eq_13
  DataType: segptr32
  OrigDataType: segptr32
T_14: (in Mem32[__data_23:0x157<16>:byte] @ 079F : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_15: (in 0x80EA<16> @ 07A4 : word16)
  Class: Eq_15
  DataType: (memptr (ptr16 Eq_11) bcu8)
  OrigDataType: (memptr T_11 (struct (0 T_17 t0000)))
T_16: (in __data_23:0x80EA<16> @ 07A4 : segptr32)
  Class: Eq_16
  DataType: segptr32
  OrigDataType: segptr32
T_17: (in Mem32[__data_23:0x80EA<16>:byte] @ 07A4 : byte)
  Class: Eq_17
  DataType: bcu8
  OrigDataType: bcu8
T_18: (in 2<8> @ 07A4 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in __data_23->b80EA >> 2<8> @ 07A4 : byte)
  Class: Eq_19
  DataType: uint8
  OrigDataType: uint8
T_20: (in 1<8> @ 07A4 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in __data_23->b80EA >> 2<8> & 1<8> @ 07A4 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0<8> @ 07A4 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in (__data_23->b80EA >> 2<8> & 1<8>) != 0<8> @ 07A4 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in fn4AC0 @ 07A7 : ptr16)
  Class: Eq_24
  DataType: (ptr16 Eq_24)
  OrigDataType: (ptr16 (fn T_26 ()))
T_25: (in signature of fn4AC0 : void)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: 
T_26: (in fn4AC0() @ 07A7 : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_2 {
	byte b001D;	// 1D
} Eq_2;

typedef void (Eq_7)();

typedef struct Eq_11 {
	byte b0157;	// 157
	bcu8 b80EA;	// 80EA
} Eq_11;

typedef void (Eq_24)();

