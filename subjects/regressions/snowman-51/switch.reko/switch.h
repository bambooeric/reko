// switch.h
// Generated by decompiling switch.dll
// using Reko decompiler version 0.11.4.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (10072000 (str char) str10072000) (10072008 (str char) str10072008) (10072010 (str char) str10072010) (10072014 (str char) str10072014) (10072018 (str char) str10072018))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_14: BOOL
	T_14 (in eax @ 10071028 : Eq_14)
	T_18 (in 1<32> @ 10071085 : word32)
Eq_15: HANDLE
	T_15 (in hModule @ 10071028 : Eq_15)
Eq_16: DWORD
	T_16 (in dwReason @ 10071028 : Eq_16)
Eq_17: LPVOID
	T_17 (in lpReserved @ 10071028 : Eq_17)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in eax : (ptr32 char))
  Class: Eq_2
  DataType: (ptr32 char)
  OrigDataType: (ptr32 char)
T_3: (in n : uint32)
  Class: Eq_3
  DataType: uint32
  OrigDataType: uint32
T_4: (in n @ 10071008 : uint32)
  Class: Eq_4
  DataType: uint32
  OrigDataType: uint32
T_5: (in 0xFFFFFFFE<32> @ 10071008 : word32)
  Class: Eq_4
  DataType: uint32
  OrigDataType: up32
T_6: (in n > 0xFFFFFFFE<32> @ 10071008 : bool)
  Class: Eq_6
  DataType: bool
  OrigDataType: bool
T_7: (in 0x10072000<p32> @ 1007102E : ptr32)
  Class: Eq_2
  DataType: (ptr32 char)
  OrigDataType: ptr32
T_8: (in 1<32> @ 1007100A : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in n + 1<32> @ 1007100A : word32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: uint32
T_10: (in 0x10072018<p32> @ 10071016 : ptr32)
  Class: Eq_2
  DataType: (ptr32 char)
  OrigDataType: ptr32
T_11: (in 0x10072014<p32> @ 1007101C : ptr32)
  Class: Eq_2
  DataType: (ptr32 char)
  OrigDataType: ptr32
T_12: (in 0x10072010<p32> @ 10071022 : ptr32)
  Class: Eq_2
  DataType: (ptr32 char)
  OrigDataType: ptr32
T_13: (in 0x10072008<p32> @ 10071028 : ptr32)
  Class: Eq_2
  DataType: (ptr32 char)
  OrigDataType: ptr32
T_14: (in eax @ 10071028 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: BOOL
T_15: (in hModule @ 10071028 : Eq_15)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: HANDLE
T_16: (in dwReason @ 10071028 : Eq_16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: DWORD
T_17: (in lpReserved @ 10071028 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: LPVOID
T_18: (in 1<32> @ 10071085 : word32)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: word32
*/
typedef struct Globals {
	char str10072000[];	// 10072000
	char str10072008[];	// 10072008
	char str10072010[];	// 10072010
	char str10072014[];	// 10072014
	char str10072018[];	// 10072018
} Eq_1;

typedef BOOL Eq_14;

typedef HANDLE Eq_15;

typedef DWORD Eq_16;

typedef LPVOID Eq_17;

