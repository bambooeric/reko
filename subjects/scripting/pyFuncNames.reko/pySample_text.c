// pySample_text.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.9.4.0.

#include "pySample.h"

// 10001000: void sum_wrapper(Stack (ptr32 Eq_n) dwArg08)
void sum_wrapper(PyObject * dwArg08)
{
	if (PyArg_ParseTuple(dwArg08, "ii:sum", fp - 0x04, fp - 0x08) == 0x00)
		return;
	Py_BuildValue("i", dwLoc04 + dwLoc08);
}

// 10001050: void dif_wrapper(Stack (ptr32 Eq_n) dwArg08)
void dif_wrapper(PyObject * dwArg08)
{
	if (PyArg_ParseTuple(dwArg08, "ii:dif", fp - 0x08, fp - 0x04) == 0x00)
		return;
	Py_BuildValue("i", dwLoc08 - dwLoc04);
}

// 100010A0: void div_wrapper(Stack (ptr32 Eq_n) dwArg08)
void div_wrapper(PyObject * dwArg08)
{
	if (PyArg_ParseTuple(dwArg08, "ii:div", fp - 0x08, fp - 0x04) == 0x00)
		return;
	Py_BuildValue("i", (int32) ((int64) dwLoc08 /32 dwLoc04));
}

// 100010F0: void fdiv_wrapper(Stack (ptr32 Eq_n) dwArg08)
void fdiv_wrapper(PyObject * dwArg08)
{
	if (PyArg_ParseTuple(dwArg08, "ff:fdiv", fp - 0x08, fp - 0x04) == 0x00)
		return;
	Py_BuildValue("f", (real64) rLoc08 / (real64) rLoc04);
}

// 10001170: void initpySample()
void initpySample()
{
	Py_InitModule4("pySample", &g_t10003010, null, null, 1007);
}

