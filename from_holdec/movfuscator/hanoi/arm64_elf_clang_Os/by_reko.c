// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400598: Register ptr64 _init(Stack word64 qwArg00)
ptr64 _init(word64 qwArg00)
{
	call_weak_fn();
	return fp + 0x08;
}

// 00000000004005D0: void fn00000000004005D0()
void fn00000000004005D0()
{
	<anonymous> * x17_4 = globals->ptr411000;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 00000000004005E0: void fn00000000004005E0()
void fn00000000004005E0()
{
	<anonymous> * x17_4 = globals->ptr411008;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 00000000004005F0: void fn00000000004005F0()
void fn00000000004005F0()
{
	<anonymous> * x17_4 = globals->ptr411010;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 0000000000400610: void fn0000000000400610()
void fn0000000000400610()
{
	<anonymous> * x17_4 = globals->ptr411020;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 0000000000400620: void fn0000000000400620()
void fn0000000000400620()
{
	<anonymous> * x17_4 = globals->ptr411028;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 0000000000400640: void fn0000000000400640()
void fn0000000000400640()
{
	<anonymous> * x17_4 = globals->ptr411038;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 0000000000400650: void fn0000000000400650()
void fn0000000000400650()
{
	<anonymous> * x17_4 = globals->ptr411040;
	word64 sp_6;
	word64 x16_7;
	word64 x17_8;
	x17_4();
}

// 0000000000400660: void _start(Stack word64 qwArg00)
void _start(word64 qwArg00)
{
	fn00000000004005E0();
	fn0000000000400610();
}

// 00000000004006A8: void call_weak_fn()
void call_weak_fn()
{
	word64 x0_4 = globals->qw410FE0;
	if (x0_4 == 0x00)
		return;
	<anonymous> * x17_10 = globals->ptr411018;
	word64 sp_12;
	word64 x0_13;
	word64 x16_14;
	word64 x17_15;
	x17_10();
}

// 00000000004006C0: void deregister_tm_clones()
void deregister_tm_clones()
{
	if (0x0041105F - 4264024 <= 0x0E)
		return;
	<anonymous> * x1_17 = globals->ptr4006F8;
	if (x1_17 == null)
		return;
	word64 sp_18;
	word64 x1_19;
	word64 x0_20;
	byte NZCV_21;
	byte ZC_22;
	x1_17();
}

// 0000000000400700: void register_tm_clones()
void register_tm_clones()
{
	int64 x1_6 = 4264024 - 4264024;
	if ((x1_6 >> 0x03) + ((x1_6 >> 0x03) >>u 0x003F) >> 0x01 == 0x00)
		return;
	<anonymous> * x2_17 = globals->ptr400738;
	if (x2_17 == null)
		return;
	word64 sp_18;
	word64 x1_19;
	word64 x0_20;
	word64 x2_21;
	x2_17();
}

// 0000000000400740: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) globals->b411060 == 0x00)
	{
		deregister_tm_clones();
		globals->b411060 = 0x01;
	}
}

// 0000000000400770: void frame_dummy(Stack word64 qwArg00)
void frame_dummy(word64 qwArg00)
{
	if (globals->qw410DF0 != 0x00)
	{
		<anonymous> * x1_20 = globals->ptr4007A8;
		if (x1_20 != null)
		{
			word64 sp_26;
			word64 x0_27;
			word64 x1_28;
			word64 x29_29;
			word64 x30_30;
			word64 x2_31;
			x1_20();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 00000000004007B0: void new_tower(Register (ptr64 Eq_171) x0, Stack word64 qwArg00)
void new_tower(Eq_171 * x0, word64 qwArg00)
{
	__sbfiz(x0, 0x02);
	fn00000000004005F0();
	word64 * x0_13 = DPB(x0, 0x01, 0);
	*x0_13 = x0_13 + 0x02;
}

// 00000000004007D8: Register word64 text(Register word32 w0, Register word32 w1, Register Eq_193 w2, Stack word64 qwArg00, Register out ptr64 spOut)
word64 text(word32 w0, word32 w1, Eq_193 w2, word64 qwArg00, ptr64 & spOut)
{
	__bfm(w1, 0x001F, 0x001E);
	fn0000000000400650();
	Eq_193 w20_26 = w2;
	if (w2 != 0x00)
	{
		do
		{
			fn0000000000400650();
			--w20_26;
		} while (w20_26 != 0x00);
	}
	word64 sp_57;
	*spOut = fp + 0x08;
	return qwLoc20;
}

// 0000000000400850: Register word64 add_disk(Register word32 w0, Register Eq_193 w1, Register word32 w11, Register word64 x30, Register out ptr64 x30Out, Register out ptr64 spOut)
word64 add_disk(word32 w0, Eq_193 w1, word32 w11, word64 x30, ptr64 & x30Out, ptr64 & spOut)
{
	Eq_229 x10_14 = globals->a411068[(int64) (int32) w0];
	ui64 x11_20 = (word64) (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[0x04].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
	word32 w11_21 = (word32) x11_20;
	Eq_193 x12_22[] = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
	(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[0x08].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00] = (Eq_229) (w11_21 + 0x01);
	x12_22[x11_20] = w1;
	word64 sp_29;
	word64 x21_30 = text((&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[0x08].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00], w0, w1, x30, out sp_29);
	fn0000000000400640();
	<anonymous> * x17_41 = globals->ptr411030;
	word64 sp_43;
	word64 x29_44;
	word64 x30_45;
	word64 x9_46;
	word32 w0_47;
	word32 w8_48;
	word64 x10_49;
	word32 w1_50;
	word32 w9_51;
	word64 x3_52;
	word64 x11_53;
	word64 x12_54;
	word32 w2_55;
	word32 w13_56;
	word32 w11_57;
	word64 x8_58;
	word64 x0_59;
	word64 x16_60;
	word64 x17_61;
	word64 x21_62;
	x17_41();
	return x21_62;
}

// 00000000004008B4: void remove_disk(Register word32 w0, Register word64 x19, Stack word64 qwArg00)
void remove_disk(word32 w0, word64 x19, word64 qwArg00)
{
	Eq_294 x9_20 = globals->a411068[(int64) (int32) w0];
	word32 w0_24 = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x9_20.a0000[0x08].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
	Eq_193 x10_25[] = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x9_20.a0000[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
	(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x9_20.a0000[0x08].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00] = (Eq_294) (w0_24 - 0x01);
	word64 sp_30;
	text(w0_24, w0, x10_25[(int64) (int32) (w0_24 - 0x01) / 0x04], x19, out sp_30);
}

// 0000000000400908: Register word32 move(Register word32 w0, Register word32 w11, Stack word64 qwArg00, Register out Eq_326 w20Out, Register out Eq_327 w21Out, Register out Eq_328 w23Out, Register out ptr64 x25Out)
word32 move(word32 w0, word32 w11, word64 qwArg00, Eq_326 & w20Out, Eq_327 & w21Out, Eq_328 & w23Out, ptr64 & x25Out)
{
	struct Eq_330 * sp_139 = fp + -0x0048;
	if (w0 != 0x00)
	{
		word32 w21_104 = w0 - 0x01;
		x30_132 = x30;
		do
		{
			word64 x30_132;
			word32 w20_113;
			word32 w21_114;
			word32 w23_115;
			Eq_383 x25_116[];
			word32 w19_117 = move(w21_104, w11, x30, out w20_113, out w21_114, out w23_115, out x25_116);
			Eq_383 x8_119 = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x25_116[(int64) (int32) w20_113].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
			word32 w0_122 = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x8_119.a0000[0x08].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
			Eq_193 x9_123[] = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x8_119.a0000[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
			(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x8_119.a0000[0x08].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00] = (Eq_383) (w0_122 - 0x01);
			Eq_193 w24_126 = x9_123[(int64) (int32) (w0_122 - 0x01) / 0x04];
			word64 sp_128;
			text(w0_122, w20_113, w24_126, x30, out sp_128);
			word64 sp_133;
			word32 w21_135 = (word32) add_disk(w19_117, w24_126, w11, x30_132, out x30_132, out sp_133);
			w21_104 = w21_135 - 0x01;
			sp_139 = DPB(sp_133, w21_135, 0);
		} while (w21_135 != 0x00);
	}
	struct Eq_336 * v34_67 = &sp_139->qw0028 + 0x01;
	word32 w20_69;
	*w20Out = (word32) v34_67->qw0000;
	word32 w21_77;
	*w21Out = (word32) sp_139->qw0028;
	word32 w23_82;
	*w23Out = (word32) sp_139->qw0018;
	word64 x25_86;
	*x25Out = sp_139->qw0008;
	return (word32) v34_67->qw0008;
}

// 00000000004009B8: void main(Register int32 w0, Register (ptr64 Eq_171) x1, Register word32 w11, Register word64 x30, Stack word64 qwArg00)
void main(int32 w0, Eq_171 * x1, word32 w11, word64 x30, word64 qwArg00)
{
	Eq_193 w19_108;
	fn0000000000400620();
	ptr64 * x0_116 = &globals->ptr400B4A;
	struct Eq_171 * x19_117 = x1;
	if (w0 >= 0x02)
	{
		x0_116 = x1->ptr0008;
		fn00000000004005D0();
		Eq_193 w0_123 = (word32) x0_116;
		w19_108 = w0_123;
		x19_117 = DPB(x1, w0_123, 0);
		if (w0_123 > 0x00)
		{
l0000000000400A00:
			__sbfiz(x19_117, 0x02);
			globals->u411080 = w19_108;
			int64 x22_46;
			for (x22_46 = 0x00; x22_46 != 0x18; x22_46 += 0x08)
			{
				fn00000000004005F0();
				x0_116 = DPB(x0_116, 0x01, 0);
				4264040 + x22_46 = x0_116;
				*x0_116 = x0_116 + 0x02;
			}
			word32 w0_110;
			x30_100 = x30;
			if (w19_108 != 0x00)
			{
				do
				{
					word64 x30_100;
					word64 sp_105;
					struct Eq_417 * x21_106 = add_disk(0x00, w19_108, w11, x30_100, out x30_100, out sp_105);
					--w19_108;
				} while (w19_108 != 0x00);
				w0_110 = x21_106->dw0080;
			}
			else
				w0_110 = 0x00;
			word32 w20_69;
			word32 w21_70;
			word32 w23_71;
			word64 x25_72;
			move(w0_110, w11, x30, out w20_69, out w21_70, out w23_71, out x25_72);
			word64 sp_79;
			text(0x01, 0x00, 0x01, x30, out sp_79);
			return;
		}
	}
	w19_108.u0 = 0x08;
	x19_117 = DPB(x19_117, 0x08, 0);
	goto l0000000000400A00;
}

// 0000000000400AA8: void __libc_csu_init(Register word64 x30, Stack word64 qwArg00)
void __libc_csu_init(word64 x30, word64 qwArg00)
{
	<anonymous> * x21_23[] = globals->a410DE0;
	word64 sp_38 = _init(x30);
	if (4263400 - 0x00410DE0 >> 0x03 != 0x00)
	{
		ui64 x19_71 = 0x00;
		do
		{
			<anonymous> * x3_77 = x21_23[x19_71];
			word64 sp_82;
			word64 x29_83;
			word64 x30_84;
			word64 x22_86;
			word64 x20_88;
			word64 x23_89;
			word64 x24_90;
			word64 x2_91;
			word32 w0_92;
			word32 w24_93;
			word64 x1_94;
			word64 x3_95;
			word64 x31_96;
			byte NZCV_97;
			bool Z_98;
			x3_77();
		} while (x20_88 - x19_71 != 0x00);
	}
}

// 0000000000400B20: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 0000000000400B24: void _fini(Stack word64 qwArg00)
void _fini(word64 qwArg00)
{
}

