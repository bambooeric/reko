// BENCHFN.c
// Generated by decompiling BENCHFN.EXE
// using Decompiler version 0.6.0.0.

#include "BENCHFN.h"

void fn0800_01FA()
{
	return;
}

void fn0800_01FF()
{
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	return;
}

void fn0800_0222()
{
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	return;
}

void fn0800_0245()
{
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	return;
}

void main(Eq_64 * ds)
{
	word16 di_12;
	word16 bx_13 = fn0800_0E4B(ds, 404, out di_12);
	fn0800_16D4(bx_13, di_12, ds, 0x01B0);
	word16 di_35;
	fn0800_0E4B(ds, 0x01B4, out di_35);
	ci16 wLoc08_39 = 0x00;
	cu16 wLoc0A_40 = 0x01;
	while (wLoc08_39 < wLoc04 || wLoc08_39 <= wLoc04 && wLoc0A_40 <= wLoc06)
	{
		fn0800_0245();
		wLoc0A_40 = wLoc0A_40 + 0x01;
		wLoc08_39 = v14;
	}
	word16 di_68;
	fn0800_0E4B(ds, 0x01CE, out di_68);
	return;
}

word16 fn0800_0E4B(Eq_64 * ds, word16 wArg02, ptr16 & diOut)
{
	word16 di_19;
	word16 bx_20 = fn0800_1073(ds, wArg02, out di_19);
	return bx_20;
}

word16 fn0800_1073(Eq_64 * ds, word16 wArg04, ptr16 & diOut)
{
	ci8 bLoc57_109 = 0x50;
	ptr16 sp_161 = fp - 0xA0;
	Eq_126 di_107 = fp - 0x56;
	byte Eq_64::*si_105 = wArg04;
	while (true)
	{
		byte al_40 = ds->*si_105;
		si_105 = si_105 + 0x01;
		byte al_101 = al_40;
		ax = DPB(ax, al_40, 0);
		if (al_40 == 0x00)
			break;
		if (al_40 == 0x25)
		{
			al_101 = ds->*si_105;
			ax = DPB(ax, al_101, 0);
			si_105 = si_105 + 0x01;
			if (al_101 != 0x25)
			{
				byte bLoc8F_128 = 0x00;
				while (true)
				{
					word16 ax_139 = DPB(ax, 0x00, 8);
					cu8 bl_143 = (byte) ax_139;
					byte dl_141 = (byte) ax_139;
					Eq_200 Eq_64::*bx_145 = DPB(ax_139, bl_143 - 0x20, 0);
					if (bl_143 >= 0x80)
						break;
					cu16 bx_182 = DPB(ax_139, (ds->*bx_145).b04F9, 0);
					if (bx_182 > 0x17)
						goto l0800_1560;
					if (true)
						break;
					if (bLoc8F_128 != 0x2B)
						bLoc8F_128 = dl_141;
					ax = DPB(ax_139, ds->*si_105, 0);
					si_105 = si_105 + 0x01;
				}
l0800_1560:
				byte Eq_64::*si_154 = si_105;
				byte al_156 = 0x25;
				do
				{
					bx = fn0800_1099(al_156, fp - 0x02, di_107, ds, out di_107);
					byte al_167 = ds->*si_154;
					sp_161 = sp_161 + ~0x01;
					si_154 = si_154 + 0x01;
					al_156 = al_167;
				} while (al_167 != 0x00);
				break;
			}
		}
		ds->*di_107 = al_101;
		ci8 v15_108 = bLoc57_109 - 0x01;
		di_107 = di_107;
		bLoc57_109 = v15_108;
		if (v15_108 <= 0x00)
			bx = fn0800_10A1(fp - 0x02, di_107, out di_107);
	}
	if (bLoc57_109 < 0x50)
	{
		Eq_126 di_93;
		fn0800_10A1(fp - 0x02, di_107, out di_93);
		word16 di_95;
		bx = fn0800_10A1(fp - 0x02, di_93, out di_95);
	}
	Eq_175 sp_80 = sp_161 + 0x02;
	word16 di_84;
	*diOut = ss->*sp_80;
	return bx;
}

word16 fn0800_1099(byte al, Eq_164 bp, Eq_126 di, Eq_64 * ds, Eq_230 & diOut)
{
	ds->*di = al;
	ci8 v9_9 = ss->*(bp - 0x55) - 0x01;
	ss->*(bp - 0x55) = v9_9;
	word16 di_6;
	*diOut = (byte Eq_64::*) di;
	if (v9_9 <= 0x00)
		return bx;
	else
	{
		Eq_126 di_15;
		return fn0800_10A1(bp, di, out di_15);
	}
}

Eq_286 * fn0800_10A1(Eq_164 bp, Eq_126 di, Eq_166 & diOut)
{
	word16 sp_29;
	word16 bx_30;
	Eq_289 * ss_31;
	word16 cx_32;
	word16 dx_33;
	Eq_292 * es_34;
	Eq_309 Eq_289::*bp_35;
	word16 ax_36;
	word16 di_37;
	byte SCZO_38;
	Eq_297 * cs_39;
	byte SZO_40;
	byte C_41;
	byte Z_42;
	(cs->*(ss->*bp))();
	if (ax_36 == 0x00)
		(ss_31->*(bp_35 - 0x02)).u1 = 0x01;
	(ss_31->*(bp_35 - 0x55)).u0 = 0x50;
	(ss_31->*(bp_35 - 88)).u1 = (ss_31->*(bp_35 - 88)).u1;
	word16 di_51;
	*diOut = bp_35 - 0x54;
	return es;
}

void fn0800_16D4(word16 bx, word16 di, Eq_64 * ds, word16 wArg02)
{
	fn0800_16F3(bx, di, ds, 0x0342, wArg02);
	return;
}

void fn0800_16F3(word16 bx, word16 di, Eq_64 * ds, word16 wArg06, word16 wArg08)
{
	Eq_347 bp_154 = fp - 0x02;
	byte Eq_64::*si_157 = wArg08;
l0800_1726:
	byte al_57 = ds->*si_157;
	byte Eq_64::*si_58 = si_157 + 0x01;
	if (al_57 == 0x00)
		return;
	if (al_57 != 0x25)
	{
		word16 sp_153;
		byte SCZO_156;
		Eq_366 di_158;
		Eq_367 * es_159;
		byte D_160;
		byte al_161;
		byte SZO_163;
		byte C_164;
		byte Z_165;
		Eq_366 ax_166;
		word16 cx_168;
		byte SO_169;
		byte S_170;
		byte bl_172;
		byte bh_173;
		byte CZ_174;
		(cs->*(ss->*bp_154))();
		Eq_366 ax_177 = ax_166;
		if (ax_166 >= 0x00)
		{
			if (di_158 < 0x00 || ds->*di_158 != 0x01)
			{
				if (ax_166 == di_158)
					goto l0800_1726;
				word16 sp_216;
				word16 bp_217;
				Eq_487 * ss_218;
				byte SCZO_219;
				word16 si_220;
				word16 di_221;
				Eq_491 * es_222;
				byte D_223;
				byte al_224;
				Eq_494 * ds_225;
				byte SZO_226;
				byte C_227;
				byte Z_228;
				word16 ax_229;
				Eq_499 * cs_230;
				word16 cx_231;
				byte SO_232;
				byte S_233;
				word16 bx_234;
				byte bl_235;
				byte bh_236;
				byte CZ_237;
				(cs->*(ss->*bp_154))();
				return;
			}
			do
			{
				ci8 bl_269 = (byte) ax_177;
				Eq_399 Eq_64::*bx_272 = DPB(ax_177, bl_269, 0);
				if (bl_269 < 0x00 || (ds->*bx_272).b055A != 0x01)
				{
					word16 sp_280;
					byte SCZO_283;
					word16 di_285;
					Eq_406 * es_286;
					byte D_287;
					byte al_288;
					byte SZO_290;
					byte C_291;
					byte Z_292;
					word16 ax_293;
					word16 cx_295;
					byte SO_296;
					byte S_297;
					byte bl_299;
					byte bh_300;
					byte CZ_301;
					(cs->*(ss->*bp_154))();
					goto l0800_1726;
				}
				word16 sp_316;
				byte SCZO_319;
				word16 si_320;
				word16 di_321;
				Eq_432 * es_322;
				byte D_323;
				byte al_324;
				byte SZO_326;
				byte C_327;
				byte Z_328;
				Eq_366 ax_329;
				word16 cx_331;
				byte SO_332;
				byte S_333;
				word16 bx_334;
				byte bl_335;
				byte bh_336;
				byte CZ_337;
				(cs->*(ss->*bp_154))();
				ax_177 = ax_329;
			} while (ax_329 > 0x00);
		}
	}
	else
	{
		int16 ax_348 = (int16) (ds->*si_58);
		if (ax_348 < 0x00)
			goto l0800_17E6;
		if (DPB(bx, 0x00, 8) <= 0x15)
		{
			switch (ax_348)
			{
			case 0x00:
				break;
			}
			return;
		}
	}
	word16 sp_111;
	word16 bp_112;
	Eq_454 * ss_113;
	byte SCZO_114;
	word16 si_115;
	word16 di_116;
	Eq_458 * es_117;
	byte D_118;
	byte al_119;
	Eq_461 * ds_120;
	byte SZO_121;
	byte C_122;
	byte Z_123;
	word16 ax_124;
	Eq_466 * cs_125;
	word16 cx_126;
	byte SO_127;
	byte S_128;
	word16 bx_129;
	byte bl_130;
	byte bh_131;
	byte CZ_132;
	(cs->*(ss->*bp_154))();
	return;
}

