// RTOSDemo_privileged_data.c
// Generated by decompiling RTOSDemo.axf
// using Reko decompiler version 0.11.2.0.

#include "RTOSDemo.h"

word32 uxCurrentNumberOfTasks = 0x00; // 200000C4
word32 pxCurrentTCB = 0x00; // 200000C8
word32 pxDelayedTaskList = 0x00; // 20000130
word32 pxOverflowDelayedTaskList = 0x00; // 20000134
word32 xSchedulerRunning = 0x00; // 20000138
word32 uxTaskNumber = 0x00; // 2000013C
word32 uxTopReadyPriority = 0x00; // 20000140
word32 xTickCount = 0x00; // 20000144
word32 xNextTaskUnblockTime = 0x00; // 20000148
word32 xIdleTaskHandle = 0x00; // 2000014C
word32 uxSchedulerSuspended = 0x00; // 20000150
word32 xYieldPending = 0x00; // 20000154
word32 xNumOfOverflows = 0x00; // 20000158
word32 uxPendedTicks = 0x00; // 2000015C
