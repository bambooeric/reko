// pySample_text.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.11.2.0.

#include "pySample.h"

// 10001140: Register (ptr32 Eq_n) unused_wrapper(Stack (ptr32 Eq_n) self, Stack (ptr32 Eq_n) args)
PyObject * unused_wrapper(PyObject * self, PyObject * args)
{
	PyObject * eax_n = PyArg_ParseTuple(args, ":unused");
	if (eax_n == null)
		return eax_n;
	PyObject * eax_n = &_Py_NoneStruct;
	++eax_n->ob_refcnt;
	return &_Py_NoneStruct;
}

// 10001170: void initpySample()
void initpySample()
{
	// Procedures:
	//     sum_wrapper:
	//         Address: 0x10001000
	//         File: sum.c
	//         Decompile: True
	//     dif_wrapper:
	//         Address: 0x10001050
	//         File: dif.c
	//         Decompile: True
	//     div_wrapper:
	//         Address: 0x100010A0
	//         File: div.c
	//         Decompile: True
	//     fdiv_wrapper:
	//         Address: 0x100010F0
	//         File: fdiv.c
	//         Decompile: True
	//     unused_wrapper:
	//         Address: 0x10001140
	//         File: None
	//         Decompile: True
	//     DllMain:
	//         Address: 0x1000149E
	//         File: None
	//         Decompile: False
	//     Get procedure at 0x00000001: None
	//     Get procedure at 0x1000149E: DllMain
	//     Get procedure at 0x1000149D: None
	//     There is no procedure entry at 0x00000002
	//     There is procedure entry at 0x100010F0
	//     There is no procedure entry at 0x100010F1
	// Memory at 0x10003020:
	//     Byte: 0x28
	//     16-bit integer: 0x2128
	//     32-bit integer: 0x10002128
	//     64-bit integer: 0x1000105010002128
	// Memory at [0x10003020:0x10003024]:
	//     Bytes: ['0x28', '0x21', '0x0', '0x10']
	//     16-bit integers: ['0x2128', '0x1000']
	// Memory at [0x10003020:0x10003030]:
	//     32-bit integers: ['0x10002128', '0x10001050', '0x1', '0x10002114']
	//     64-bit integers: ['0x1000105010002128', '0x1000211400000001']
	// This is initialization of Python extension module
	Py_InitModule4("pySample", methods, null, null, 1007);
}

// 10001196: void empty_procedure_loaded_decompiling_scanned_decompiled()
void empty_procedure_loaded_decompiling_scanned_decompiled()
{
}

