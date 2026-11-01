
/* ==== FUN_0044b570 @ 0044b570 ==== 
 * signature: undefined __stdcall FUN_0044b570(void)
 * body: 0044b570-0044b9c8
 */

void FUN_0044b570(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined4 local_1b0;
  char local_1ac [4];
  char local_1a8 [4];
  char local_1a4 [4];
  char local_1a0;
  undefined4 local_19f;
  undefined4 local_19b;
  undefined4 local_197;
  undefined4 local_193;
  undefined1 local_18f;
  undefined4 local_18c;
  char local_188 [4];
  char local_184 [4];
  char local_180 [2];
  undefined4 local_17e;
  undefined4 local_17a;
  undefined4 local_176;
  undefined4 local_172;
  undefined4 local_16e;
  undefined4 local_168;
  char local_164 [4];
  char local_160 [4];
  char local_15c [2];
  undefined4 local_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_144;
  char local_140 [4];
  char local_13c [4];
  char local_138 [4];
  char local_134;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined1 local_123;
  undefined4 local_120;
  char local_11c [4];
  char local_118 [4];
  char local_114 [4];
  char local_110;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined4 local_103;
  undefined1 local_ff;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  char local_d4 [4];
  char local_d0 [4];
  char local_cc [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined4 local_ac [7];
  undefined4 local_90;
  char local_8c [4];
  char local_88 [4];
  char local_84;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined1 local_6f;
  undefined4 local_6c;
  char local_68 [4];
  char local_64 [4];
  char local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  char local_44 [4];
  char local_40 [4];
  char local_3c;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_1b [6];
  
  local_1cc = DAT_005a0fc8;
  local_1c0 = 0;
  local_1bc = 0;
  local_1d0 = DAT_005a0fc4;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1a4 = (char  [4])s_BOTHSRCALPHA_005a0fd4._8_4_;
  local_1c8 = DAT_005a0fcc;
  local_188 = (char  [4])s_DESTALPHA_005a0fe4._0_4_;
  local_1c4 = PTR_LAB_005a0fd0;
  local_1ac = (char  [4])s_BOTHSRCALPHA_005a0fd4._0_4_;
  local_17e = 0;
  local_1a8 = (char  [4])s_BOTHSRCALPHA_005a0fd4._4_4_;
  local_1a0 = s_BOTHSRCALPHA_005a0fd4[0xc];
  local_17a = 0;
  local_19f = 0;
  local_176 = 0;
  local_184 = (char  [4])s_DESTALPHA_005a0fe4._4_4_;
  local_19b = 0;
  local_172 = 0;
  local_197 = 0;
  local_16e = 0;
  local_164 = (char  [4])s_DESTCOLOR_005a0ff0._0_4_;
  local_193 = 0;
  local_15c = (char  [2])s_DESTCOLOR_005a0ff0._8_2_;
  local_15a = 0;
  local_18f = 0;
  local_156 = 0;
  local_13c = (char  [4])s_INVDESTALPHA_005a0ffc._4_4_;
  local_180 = (char  [2])s_DESTALPHA_005a0fe4._8_2_;
  local_152 = 0;
  local_14e = 0;
  local_133 = 0;
  local_160 = (char  [4])s_DESTCOLOR_005a0ff0._4_4_;
  local_14a = 0;
  local_12f = 0;
  local_140 = (char  [4])s_INVDESTALPHA_005a0ffc._0_4_;
  local_12b = 0;
  local_138 = (char  [4])s_INVDESTALPHA_005a0ffc._8_4_;
  local_127 = 0;
  local_134 = s_INVDESTALPHA_005a0ffc[0xc];
  local_123 = 0;
  local_11c = (char  [4])s_INVDESTCOLOR_005a100c._0_4_;
  local_118 = (char  [4])s_INVDESTCOLOR_005a100c._4_4_;
  local_1b0 = 0x800;
  local_18c = 0x40;
  local_168 = 0x100;
  local_144 = 0x80;
  local_120 = 0x200;
  local_114 = (char  [4])s_INVDESTCOLOR_005a100c._8_4_;
  local_110 = s_INVDESTCOLOR_005a100c[0xc];
  local_10f = 0;
  local_f8 = DAT_005a101c;
  local_10b = 0;
  local_107 = 0;
  local_f4 = DAT_005a1020;
  local_103 = 0;
  local_ec = 0;
  local_ff = 0;
  local_e8 = 0;
  local_d4 = (char  [4])s_INVSRCCOLOR_005a1028._0_4_;
  local_e4 = 0;
  local_f0 = PTR_LAB_005a1024;
  local_c8 = 0;
  local_e0 = 0;
  local_c4 = 0;
  local_dc = 0;
  local_d0 = (char  [4])s_INVSRCCOLOR_005a1028._4_4_;
  local_c0 = 0;
  local_cc = (char  [4])s_INVSRCCOLOR_005a1028._8_4_;
  local_bc = 0;
  local_b0 = PTR_FUN_005a1034;
  local_fc = 0x20;
  local_d8 = 8;
  local_b8 = 0;
  local_b4 = 2;
  puVar2 = local_ac;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_8c = (char  [4])s_SRCALPHA_005a1038._0_4_;
  local_84 = s_SRCALPHA_005a1038[8];
  local_88 = (char  [4])s_SRCALPHA_005a1038._4_4_;
  local_83 = 0;
  local_64 = (char  [4])s_SRCALPHASAT_005a1044._4_4_;
  local_7f = 0;
  local_68 = (char  [4])s_SRCALPHASAT_005a1044._0_4_;
  local_44 = (char  [4])s_SRCCOLOR_005a1050._0_4_;
  local_7b = 0;
  local_5c = 0;
  local_77 = 0;
  local_3b = 0;
  local_58 = 0;
  local_73 = 0;
  local_37 = 0;
  local_54 = 0;
  local_6f = 0;
  local_33 = 0;
  local_50 = 0;
  local_2f = 0;
  local_60 = (char  [4])s_SRCALPHASAT_005a1044._8_4_;
  local_4c = 0;
  local_2b = 0;
  local_90 = 0x10;
  local_6c = 0x400;
  local_48 = 4;
  local_40 = (char  [4])s_SRCCOLOR_005a1050._4_4_;
  local_3c = s_SRCCOLOR_005a1050[8];
  local_27 = 0;
  local_24 = 1;
  local_20 = DAT_005a105c;
  local_1c = DAT_005a1060;
  puVar2 = local_1b;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = FUN_00447730();
  if (iVar1 != 0) {
    puVar2 = &local_1d0;
    iVar1 = 0xd;
    do {
      if ((puVar2[-1] & DAT_006fb928) == 0) {
        pcVar3 = s__s_source_blend_mode_not_support_005a1088;
      }
      else {
        pcVar3 = s__s_source_blend_mode_supported__005a1064;
      }
      FUN_004c3fa0((byte *)pcVar3);
      if ((puVar2[-1] & DAT_006fb92c) == 0) {
        pcVar3 = s__s_destination_blend_mode_not_su_005a10d8;
      }
      else {
        pcVar3 = s__s_destination_blend_mode_suppor_005a10b0;
      }
      FUN_004c3fa0((byte *)pcVar3);
      puVar2 = puVar2 + 9;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


