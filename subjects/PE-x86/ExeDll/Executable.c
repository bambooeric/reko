// Executable.c
// Generated by decompiling Executable.exe
// using Reko decompiler version 0.7.0.0.

#include "Executable.h"

// 00401000: Register word32 fn00401000(Register out ptr32 ebpOut)
word32 fn00401000(ptr32 & ebpOut)
{
	InitializeCriticalSection(&exported_critical_section);
	fn00401060(0x00402108);
	*(fp - 0x0C) = 0x01;
	*(fp - 0x10) = slow_and_safe_increment(*(fp - 0x0C));
	*(fp - 0x14) = 0x00402108;
	fn00401060(dwArg00);
	*(fp - 0x18) = exported_int;
	*(fp - 0x1C) = 0x00402108;
	word32 ebp_32;
	*ebpOut = fn00401060(dwArg00);
	return 0x00;
}

// 00401050: void fn00401050()
void fn00401050()
{
	return;
}

// 00401060: Register word32 fn00401060(Stack word32 dwArg04)
word32 fn00401060(word32 dwArg04)
{
	word32 esp_13;
	word32 ebp_14;
	word32 esi_15;
	byte SCZO_16;
	word32 ecx_17;
	word32 eax_18;
	_acrt_iob_func();
	fn00401050();
	word32 esp_38;
	word32 ebp_39;
	word32 esi_40;
	byte SCZO_41;
	word32 ecx_42;
	word32 eax_43;
	_stdio_common_vfprintf();
	return 0x01;
}

// 004012CE: Register Eq_86 Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn00401663();
	struct Eq_90 * ebp_10 = fn00401980(ebx, esi, edi, dwLoc0C, 0x004024D8, 0x14);
	*(fp - 0x0C) = 0x01;
	word32 * esp_17 = fp - 0x08;
	if (fn00401474(edx, dwArg00) == 0x00)
	{
l00401177:
		esp_17 = esp_17 - 0x04;
		*esp_17 = 0x07;
		fn00401774(0x14, dwArg00);
	}
	*(ebp_10 - 0x19) = 0x00;
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	*(ebp_10 - 0x24) = fn0040143F();
	ebx = DPB(ebx, 0x00, 0);
	word32 eax_36 = globals->dw403334;
	if (eax_36 != 0x01)
	{
		Eq_86 eax_189;
		if (eax_36 == 0x00)
		{
			globals->dw403334 = 0x01;
			PVFV ** esp_276 = esp_17 - 0x04;
			*esp_276 = (PVFV **) &globals->t4020EC;
			*(esp_276 - 0x04) = 0x004020E0;
			if (_initterm_e(*(esp_276 - 0x04), *esp_276) != 0x00)
			{
				*(ebp_10 - 0x04) = ~0x01;
				eax_189 = 0xFF;
				goto l004012C8;
			}
			*esp_276 = (PVFV **) &globals->t4020DC;
			*(esp_276 - 0x04) = 0x004020D4;
			_initterm(*(esp_276 - 0x04), *esp_276);
			globals->dw403334 = 0x02;
		}
		else
		{
			*(ebp_10 - 0x19) = 0x01;
			ebx = DPB(ebx, 0x01, 0);
		}
		ptr32 * esp_71 = esp_17 - 0x04;
		*esp_71 = *(ebp_10 - 0x24);
		fn004015CE(bArg00);
		fn00401768();
		ptr32 esp_248 = esp_71 + 0x01;
		ptr32 edi_244 = 0x00;
		if (globals->dw403388 != 0x00)
		{
			*esp_71 = 0x00403388;
			<anonymous> ** esi_243;
			word32 eax_245 = fn00401544(ebx, 0x00403388, 0x00, out ebx, out esi_243, out edi_244);
			byte al_246 = (byte) eax_245;
			esp_248 = esp_71 + 0x01;
			if (al_246 != 0x00)
			{
				*esp_71 = edi_244;
				*(esp_71 - 0x04) = 0x02;
				*(esp_71 - 0x08) = edi_244;
				<anonymous> * esi_258 = *esi_243;
				fn00401976();
				word32 ecx_261;
				byte al_262;
				byte SZO_263;
				byte C_264;
				byte Z_265;
				byte bl_266;
				word32 ebp_267;
				word32 eax_268;
				byte SCZO_269;
				byte cl_270;
				word32 esi_271;
				word32 edx_274;
				esi_258();
			}
		}
		word32 eax_90 = fn0040176E();
		if (globals->ptr403384 != edi_244)
		{
			ptr32 * esp_207 = esp_248 - 0x04;
			*esp_207 = 0x00403384;
			word32 ebx_209;
			ptr32 * esi_210;
			word32 edi_211;
			word32 eax_212 = fn00401544(ebx, 0x00403384, edi_244, out ebx_209, out esi_210, out edi_211);
			byte al_213 = (byte) eax_212;
			if (al_213 != 0x00)
			{
				*esp_207 = *esi_210;
				word32 esp_222;
				word32 ecx_223;
				byte al_224;
				byte SZO_225;
				byte C_226;
				byte Z_227;
				byte bl_228;
				word32 ebp_229;
				word32 eax_230;
				byte SCZO_231;
				byte cl_232;
				word32 esi_233;
				word32 edi_234;
				word32 ebx_235;
				word32 edx_236;
				register_thread_local_exe_atexit_callback();
			}
		}
		word32 esp_95;
		word32 ecx_96;
		byte al_97;
		byte SZO_98;
		byte C_99;
		byte Z_100;
		byte bl_101;
		word32 ebp_102;
		word32 eax_103;
		byte SCZO_104;
		byte cl_105;
		word32 esi_106;
		word32 edi_107;
		word32 ebx_108;
		word32 edx_109;
		_p___argv();
		word32 esp_112;
		word32 ecx_113;
		byte al_114;
		byte SZO_115;
		byte C_116;
		byte Z_117;
		byte bl_118;
		word32 ebp_119;
		word32 eax_120;
		byte SCZO_121;
		byte cl_122;
		word32 esi_123;
		word32 edi_124;
		word32 ebx_125;
		word32 edx_126;
		_p___argc();
		ptr32 esp_129;
		word32 ecx_130;
		byte al_131;
		byte SZO_132;
		byte C_133;
		byte Z_134;
		byte bl_135;
		word32 ebp_136;
		word32 eax_137;
		byte SCZO_138;
		byte cl_139;
		word32 * esi_140;
		word32 * edi_141;
		word32 ebx_142;
		word32 edx_143;
		get_initial_narrow_environment();
		*(esp_129 - 0x08) = eax_137;
		*(esp_129 - 0x0C) = *edi_141;
		*(esp_129 - 0x10) = *esi_140;
		Eq_86 eax_154 = fn00401000(out ebp_10);
		ptr32 esp_155 = esp_129 - 0x04;
		Eq_86 esi_157 = eax_154;
		byte al_158 = fn0040188F();
		if (al_158 == 0x00)
		{
			*(esp_129 - 0x08) = (uint32) eax_154;
			exit(*(esp_129 - 0x08));
		}
		if (bl_135 == 0x00)
		{
			word32 esp_191;
			word32 ecx_192;
			byte al_193;
			byte SZO_194;
			byte C_195;
			byte Z_196;
			byte bl_197;
			word32 eax_199;
			byte SCZO_200;
			byte cl_201;
			word32 edi_203;
			word32 ebx_204;
			word32 edx_205;
			cexit();
			esp_155 = esp_191 + ~0x03;
		}
		word32 * esp_179 = esp_155 - 0x04;
		*esp_179 = 0x00;
		*(esp_179 - 0x04) = 0x01;
		fn004015EB(dwArg00, bArg04);
		*(ebp_10 - 0x04) = ~0x01;
		eax_189 = esi_157;
l004012C8:
		word32 esi_61;
		word32 edi_62;
		fn004019C6(ebp_10, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_61, out edi_62);
		return eax_189;
	}
	goto l00401177;
}

// 004012D8: void fn004012D8(Stack word32 dwArg04)
void fn004012D8(word32 dwArg04)
{
	SetUnhandledExceptionFilter(null);
	UnhandledExceptionFilter(dwArg04);
	TerminateProcess(GetCurrentProcess(), 0xC0000409);
	return;
}

// 004013FB: Register (ptr Eq_564) fn004013FB(Stack word32 dwArg04, Stack word32 dwArg08)
Eq_564 * fn004013FB(word32 dwArg04, word32 dwArg08)
{
	struct Eq_564 * eax_26;
	struct Eq_568 * ecx_13 = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_564 * edx_16 = &ecx_13->w0014 + 0x02 + (word32) ecx_13->w0014 / 22;
	struct Eq_564 * esi_19 = edx_16 + (word32) ecx_13->w0006;
	if (edx_16 != esi_19)
	{
		do
		{
			if (dwArg08 >= edx_16->dw000C && dwArg08 < edx_16->dw0008 + edx_16->dw000C)
			{
				eax_26 = edx_16;
				return eax_26;
			}
			edx_16 = edx_16 + 0x01;
		} while (edx_16 != esi_19);
	}
	eax_26 = null;
	return eax_26;
}

// 0040143F: Register byte fn0040143F()
byte fn0040143F()
{
	if (fn00401B98() != 0x00)
	{
		word32 edx_32 = fs->ptr0018->dw0004;
l00401460:
		__lock();
		word32 eax_37;
		__cmpxchg(globals->dw403338, edx_32, 0x00, out eax_37);
		if (eax_37 != 0x00)
		{
			if (edx_32 != eax_37)
				goto l00401460;
			return 0x01;
		}
		else
			return 0x00;
	}
	else
		return 0x00;
}

// 00401474: Register byte fn00401474(Register word32 edx, Stack word32 dwArg04)
byte fn00401474(word32 edx, word32 dwArg04)
{
	if (dwArg04 == 0x00)
		globals->b403354 = 0x01;
	fn004019FE(edx);
	fn00401C48();
	if (true)
	{
		fn00401C48();
		if (true)
			return 0x01;
		fn00401C48();
	}
	return 0x00;
}

// 004014AD: void fn004014AD(Register ptr32 edi, Stack word32 dwArg04)
void fn004014AD(ptr32 edi, word32 dwArg04)
{
	if (dwArg04 == 0x00 || dwArg04 == 0x01)
	{
		word32 eax_35 = fn00401B98();
		if (eax_35 != 0x00 && dwArg04 == 0x00)
		{
			word32 esp_125;
			word32 ebp_126;
			byte SCZO_127;
			word32 esi_128;
			byte SZO_129;
			byte C_130;
			byte Z_131;
			word32 eax_132;
			word32 ecx_133;
			byte al_134;
			word32 edi_135;
			byte cl_136;
			word32 ebx_137;
			initialize_onexit_table();
			if (eax_132 == 0x00)
			{
				*(fp - 0x1C) = 0x00403348;
				word32 esp_149;
				word32 ebp_150;
				byte SCZO_151;
				word32 esi_152;
				byte SZO_153;
				byte C_154;
				byte Z_155;
				word32 eax_156;
				word32 ecx_157;
				byte al_158;
				word32 edi_159;
				byte cl_160;
				word32 ebx_161;
				initialize_onexit_table();
			}
		}
		else
		{
			ui32 eax_62 = globals->dw403004;
			ui32 eax_78 = __ror(eax_62 & 0x1F | ~0x00, (byte) (0x20 - (eax_62 & 0x1F))) ^ globals->dw403004;
			globals->dw40333C = eax_78;
			globals->dw403340 = eax_78;
			globals->dw403344 = eax_78;
			globals->dw403348 = eax_78;
			globals->dw40334C = eax_78;
			globals->dw403350 = eax_78;
		}
		return;
	}
	else
	{
		fn00401774(dwLoc1C, 0x05);
		int3();
		word32 ebx_175;
		word32 esi_176;
		word32 edi_177;
		fn00401544(ebx, dwArg04, edi, out ebx_175, out esi_176, out edi_177);
		return;
	}
}

// 00401544: Register (ptr Eq_756) fn00401544(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Register out ptr32 ebxOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
Eq_756 * fn00401544(word32 ebx, ptr32 esi, ptr32 edi, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	struct Eq_756 * eax_31;
	struct Eq_90 * ebp_10 = fn00401980(ebx, esi, edi, dwLoc0C, 0x004024F8, 0x08);
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	struct Eq_776 * eax_15 = (struct Eq_776 *) 23117;
	if ((word16 *) 0x00400000 == 23117)
	{
		eax_15 = (struct Eq_776 *) (struct Eq_776 **) 0x0040003C;
		if (eax_15->dw400000 == 0x4550 && eax_15->w400018 == 0x010B)
		{
			*(fp - 0x0C) = ebp_10->dw0008 - 0x00400000;
			*(fp - 0x10) = 0x00400000;
			eax_15 = fn004013FB(dwArg00, dwArg04);
			if (eax_15 != null && eax_15->dw0024 >= 0x00)
			{
				*(ebp_10 - 0x04) = ~0x01;
				eax_31 = (struct Eq_756 *) DPB(eax_15, 0x01, 0);
l004015C8:
				word32 esi_37;
				word32 edi_38;
				word32 ebx_39;
				*ebxOut = fn004019C6(ebp_10, 0x08, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_37, out edi_38);
				return eax_31;
			}
		}
	}
	*(ebp_10 - 0x04) = ~0x01;
	eax_31 = (struct Eq_756 *) DPB(eax_15, 0x00, 0);
	goto l004015C8;
}

// 004015CE: void fn004015CE(Stack byte bArg04)
void fn004015CE(byte bArg04)
{
	if (fn00401B98() != 0x00 && bArg04 == 0x00)
		globals->dw403338 = 0x00;
	return;
}

// 004015EB: void fn004015EB(Stack word32 dwArg04, Stack byte bArg08)
void fn004015EB(word32 dwArg04, byte bArg08)
{
	if (globals->b403354 == 0x00 || bArg08 == 0x00)
	{
		fn00401C48();
		fn00401C48();
	}
	return;
}

// 00401613: Register word32 fn00401613(Stack word32 dwArg04)
word32 fn00401613(word32 dwArg04)
{
	word32 eax_24;
	ui32 eax_7 = globals->dw403004;
	byte cl_11 = (byte) (eax_7 & 0x1F);
	word32 eax_17 = __ror(eax_7 ^ globals->dw40333C, cl_11);
	if (eax_17 == ~0x00)
	{
		word32 esp_40;
		word32 ebp_41;
		word32 ecx_43;
		byte SZO_44;
		byte C_45;
		byte cl_46;
		byte SCZO_47;
		byte Z_48;
		crt_atexit();
	}
	else
	{
		word32 esp_52;
		word32 ebp_53;
		word32 ecx_55;
		byte SZO_56;
		byte C_57;
		byte cl_58;
		byte SCZO_59;
		byte Z_60;
		register_onexit_function();
	}
	return ~(0x00 - (-eax_24 == 0x00)) & dwArg04;
}

// 0040164E: void fn0040164E(Stack word32 dwArg04)
void fn0040164E(word32 dwArg04)
{
	fn00401613(dwArg04);
	return;
}

// 00401663: void fn00401663()
void fn00401663()
{
	ui32 eax_16 = globals->dw403004;
	if (eax_16 != 0xBB40E64E && (eax_16 & 0xFFFF0000) != 0x00)
		globals->dw403000 = ~eax_16;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x10);
		ui32 v14_55 = dwLoc0C & 0x00 ^ dwLoc10 & 0x00 ^ GetCurrentThreadId() ^ GetCurrentProcessId();
		QueryPerformanceCounter(fp - 0x18);
		ui32 ecx_69 = dwLoc14 ^ dwLoc18 ^ v14_55 ^ fp - 0x08;
		if (ecx_69 == 0xBB40E64E)
			ecx_69 = ~0x44BF19B0;
		else if ((ecx_69 & 0xFFFF0000) == 0x00)
			ecx_69 = ecx_69 | (ecx_69 | 0x4711) << 0x10;
		globals->dw403004 = ecx_69;
		globals->dw403000 = ~ecx_69;
	}
	return;
}

// 004016FF: void fn004016FF()
void fn004016FF()
{
	return;
}

// 00401703: void fn00401703()
void fn00401703()
{
	return;
}

// 00401709: void fn00401709()
void fn00401709()
{
	return;
}

// 0040170C: void fn0040170C()
void fn0040170C()
{
	InitializeSListHead(&globals->u403358);
	return;
}

// 00401718: void fn00401718(Register word32 eax)
void fn00401718(word32 eax)
{
	word32 esp_8;
	byte SCZO_9;
	word32 eax_10;
	byte SZO_11;
	byte C_12;
	byte Z_13;
	controlfp_s();
	if (eax_10 != 0x00)
	{
		*(fp - 0x08) = 0x07;
		fn00401774(0x00030000, dwArg00);
		int3();
		fn00401739();
		return;
	}
	else
		return;
}

// 00401739: void fn00401739()
void fn00401739()
{
	return;
}

// 0040173F: void fn0040173F()
void fn0040173F()
{
	fn00401050();
	word32 ecx_3 = globals->dw40337C;
	globals->dw403378 = globals->dw403378 | 0x04;
	globals->dw40337C = ecx_3;
	fn00401739();
	word32 ecx_9 = globals->dw403364;
	globals->dw403360 = globals->dw403360 | 0x02;
	globals->dw403364 = ecx_9;
	return;
}

// 0040175C: void fn0040175C()
void fn0040175C()
{
	return;
}

// 00401768: void fn00401768()
void fn00401768()
{
	return;
}

// 0040176E: Register ptr32 fn0040176E()
ptr32 fn0040176E()
{
	return 0x00403384;
}

// 00401774: void fn00401774(Stack word32 dwArg00, Stack word32 dwArg04)
void fn00401774(word32 dwArg00, word32 dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw403368 = 0x00;
		memset(fp - 808, 0x00, 0x02CC);
		memset(fp - 0x5C, 0x00, 0x50);
		byte bl_90 = 0x00 - (0x01 - IsDebuggerPresent() == 0x00);
		SetUnhandledExceptionFilter(null);
		if (UnhandledExceptionFilter(fp - 0x0C) == 0x00)
			globals->dw403368 = globals->dw403368 & 0x00 - (-((word32) (bl_90 + 0x01)) == 0x00);
		return;
	}
	else
		__fastfail(dwArg04);
}

// 0040188F: Register bool fn0040188F()
bool fn0040188F()
{
	Eq_1112 eax_4 = GetModuleHandleW(null);
	if (eax_4 != null && eax_4->unused == 23117)
	{
		struct Eq_1126 * eax_42 = eax_4 + eax_4->dw003C / 0x0040;
		if (eax_42->dw0000 == 0x4550 && (eax_42->w0018 == 0x010B && eax_42->dw0074 > 0x0E))
			return eax_42->dw00E8 != 0x00;
	}
	return 0x00;
}

// 004018D3: void fn004018D3()
void fn004018D3()
{
	SetUnhandledExceptionFilter(&globals->t4018DF);
	return;
}

// 00401920: void fn00401920()
void fn00401920()
{
	word32 * esi_34 = &globals->dw4024C8;
	if (false)
	{
		do
		{
			<anonymous> * edi_37 = *esi_34;
			if (edi_37 != null)
			{
				fn00401976();
				word32 esp_54;
				word32 ebx_55;
				byte SCZO_57;
				byte C_58;
				word32 edi_59;
				byte SZO_60;
				byte Z_61;
				word32 ecx_62;
				edi_37();
			}
			esi_34 = esi_34 + 0x01;
		} while (esi_34 < &globals->dw4024C8);
	}
	return;
}

// 00401976: void fn00401976()
void fn00401976()
{
	word32 esp_3;
	globals->ptr4020D0();
	return;
}

// 00401980: Register ptr32 fn00401980(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Stack word32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08)
ptr32 fn00401980(word32 ebx, ptr32 esi, ptr32 edi, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	*(esp_14 - 0x10) = globals->dw403004 ^ fp + 0x08;
	*(esp_14 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 004019C6: Register word32 fn004019C6(Register (ptr Eq_90) ebp, Stack word32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Register out ptr32 esiOut, Register out ptr32 ediOut)
word32 fn004019C6(Eq_90 * ebp, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->dw0000 = dwArg00;
	word32 edi_14;
	*ediOut = dwArg08;
	word32 esi_17;
	*esiOut = dwArg0C;
	return dwArg10;
}

// 004019FE: void fn004019FE(Register word32 edx)
void fn004019FE(word32 edx)
{
	globals->dw40336C = globals->dw40336C & 0x00;
	globals->dw403010 = globals->dw403010 | 0x01;
	if (IsProcessorFeaturePresent(0x0A) != 0x00)
	{
		ui32 edi_135;
		globals->dw403010 = globals->dw403010 | 0x02;
		globals->dw40336C = 0x01;
		int32 eax_89;
		word32 ebx_90;
		word32 ecx_91;
		word32 edx_92;
		__cpuid(0x00, 0x00, &eax_89, &ebx_90, &ecx_91, &edx_92);
		ui32 eax_124;
		word32 ebx_125;
		ui32 ecx_126;
		word32 edx_127;
		__cpuid(0x01, 0x00, &eax_124, &ebx_125, &ecx_126, &edx_127);
		if ((edx_92 ^ 0x49656E69 | ecx_91 ^ 1818588270 | ebx_90 ^ 1970169159) == 0x00 && ((eax_124 & 0x0FFF3FF0) == 0x000106C0 || ((eax_124 & 0x0FFF3FF0) == 0x00020660 || ((eax_124 & 0x0FFF3FF0) == 0x00020670 || ((eax_124 & 0x0FFF3FF0) == 0x00030650 || ((eax_124 & 0x0FFF3FF0) == 0x00030660 || (eax_124 & 0x0FFF3FF0) == 0x00030670))))))
		{
			ui32 edi_245 = globals->dw403370;
			globals->dw403370 = edi_245 | 0x01;
			edi_135 = edi_245 | 0x01;
		}
		else
			edi_135 = globals->dw403370;
		if (eax_89 >= 0x07)
		{
			word32 eax_210;
			ui32 ebx_211;
			word32 ecx_212;
			word32 edx_213;
			__cpuid(0x07, 0x00, &eax_210, &ebx_211, &ecx_212, &edx_213);
			if ((ebx_211 & 0x0200) != 0x00)
				globals->dw403370 = edi_135 | 0x02;
		}
		if ((ecx_126 & 0x00100000) != 0x00)
		{
			globals->dw403010 = globals->dw403010 | 0x04;
			globals->dw40336C = 0x02;
			if ((ecx_126 & 0x08000000) != 0x00 && ((ecx_126 & 0x10000000) != 0x00 && (((word32) __xgetbv(0x00) & 0x06) == 0x06 && true)))
			{
				ui32 eax_189 = globals->dw403010;
				globals->dw40336C = 0x03;
				globals->dw403010 = eax_189 | 0x08;
				if ((bLoc14 & 0x20) != 0x00)
				{
					globals->dw40336C = 0x05;
					globals->dw403010 = eax_189 | 0x08 | 0x20;
				}
			}
		}
	}
	return;
}

// 00401B98: Register word32 fn00401B98()
word32 fn00401B98()
{
	return (word32) (globals->dw403014 != 0x00);
}

// 00401BA4: void fn00401BA4()
void fn00401BA4()
{
	return;
}

// 00401C48: void fn00401C48()
void fn00401C48()
{
	return;
}

