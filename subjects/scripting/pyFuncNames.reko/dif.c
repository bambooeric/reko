// dif.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.11.5.0.

#include "pySample.h"

// 10001050: Register (ptr32 Eq_n) dif_wrapper(Stack (ptr32 Eq_n) ptrArg04, Stack (ptr32 Eq_n) ptrArg08)
PyObject * dif_wrapper(PyObject * ptrArg04, PyObject * ptrArg08)
{
	int32 dwLoc08;
	int32 dwLoc04;
	PyObject * eax_n = PyArg_ParseTuple(ptrArg08, "ii:dif", &dwLoc08, &dwLoc04);
	if (eax_n != null)
		return Py_BuildValue("i", dwLoc08 - dwLoc04);
	return eax_n;
}

