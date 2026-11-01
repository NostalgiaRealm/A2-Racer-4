
/* ==== FUN_004865e4 @ 004865e4 ==== 
 * signature: undefined __register FUN_004865e4(int * param_1)
 * body: 004865e4-00486e5f
 */

void FUN_004865e4(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *unaff_EDI;
  int *in_FS_OFFSET;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 *local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  uint *local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  uint *local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined4 *local_148;
  int local_144;
  int local_140;
  uint *local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  byte local_124 [216];
  undefined4 uStackY_4c;
  int local_24;
  code *local_20;
  code *local_1c;
  int local_8;
  
  local_1c = (code *)&stack0xfffffffc;
  iVar4 = 0x39;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = thunk_FUN_004036bc;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  iVar4 = FUN_00415b9c((int)param_1);
  uVar1 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)uVar1) {
    local_20 = (code *)(uVar1 + 1);
    local_8 = 0;
    do {
      piVar2 = (int *)FUN_00415b70((int)param_1,local_8);
      FUN_00403f28((int *)&stack0xffffffe8,(undefined4 *)piVar2[2],(undefined4 *)&DAT_00486e78);
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TControl_vmt_000_0042a694);
      if ((char)uVar3 != '\0') {
        local_1c = (code *)piVar2;
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_24,local_124);
        iVar4 = local_24;
        FUN_00403f28(&local_128,unaff_EDI,(undefined4 *)&DAT_00486e84);
        uVar3 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_128);
        TControl_set_Left((int *)local_1c,uVar3);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_12c,local_124);
        iVar4 = local_12c;
        FUN_00403f28(&local_130,unaff_EDI,(undefined4 *)&DAT_00486e94);
        uVar3 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_130);
        TControl_set_Top((int *)local_1c,uVar3);
      }
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TControl_vmt_000_00421a9c);
      if ((char)uVar3 != '\0') {
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_134,local_124);
        iVar4 = local_134;
        FUN_00403f28(&local_138,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_138);
        FUN_004865c4(iVar4);
        TGroupBox_set_Font((int)piVar2);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_140,local_124);
        iVar4 = local_140;
        FUN_00403f28(&local_144,unaff_EDI,(undefined4 *)"Caption");
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,iVar4,local_144);
        TGroupBox_set_Caption((int)piVar2,local_13c);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_14c,local_124);
        iVar4 = local_14c;
        FUN_00403f28(&local_150,unaff_EDI,(undefined4 *)&DAT_00486ec0);
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,iVar4,local_150);
        FUN_00403cb0(piVar2 + 0x1c,local_148);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_154,local_124);
        iVar4 = local_154;
        FUN_00403f28(&local_158,unaff_EDI,(undefined4 *)"FontSize");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_158);
        uStackY_4c = 0x4868a6;
        uVar1 = MulDiv(iVar4,0x60,0x48);
        iVar4 = -uVar1;
        if (SBORROW4(0,uVar1)) {
          thunk_FUN_00402808(uVar1);
          iVar4 = extraout_EDX;
        }
        TFont_set_Height((int *)piVar2[0x16],iVar4);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_15c,local_124);
        iVar4 = local_15c;
        FUN_00403f28(&local_160,unaff_EDI,(undefined4 *)"FontColor");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_160);
        TFont_set_Color((int *)piVar2[0x16],iVar4,extraout_ECX);
        uVar3 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_004875b8);
        if ((char)uVar3 == '\0') {
          TFont_set_Style((int *)piVar2[0x16],1);
        }
      }
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_00424244);
      if ((char)uVar3 != '\0') {
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_164,local_124);
        iVar4 = local_164;
        FUN_00403f28(&local_168,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_168);
        FUN_004865c4(iVar4);
        TGroupBox_set_Font((int)piVar2);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_170,local_124);
        iVar4 = local_170;
        FUN_00403f28(&local_174,unaff_EDI,(undefined4 *)"Caption");
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,iVar4,local_174);
        TGroupBox_set_Caption((int)piVar2,local_16c);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_178,local_124);
        iVar4 = local_178;
        FUN_00403f28(&local_17c,unaff_EDI,(undefined4 *)"FontSize");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_17c);
        uVar1 = MulDiv(iVar4,0x60,0x48);
        iVar4 = -uVar1;
        if (SBORROW4(0,uVar1)) {
          thunk_FUN_00402808(uVar1);
          iVar4 = extraout_EDX_00;
        }
        TFont_set_Height((int *)piVar2[0x16],iVar4);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_180,local_124);
        iVar4 = local_180;
        FUN_00403f28(&local_184,unaff_EDI,(undefined4 *)"FontColor");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_184);
        TFont_set_Color((int *)piVar2[0x16],iVar4,extraout_ECX_00);
      }
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_004251c4);
      if ((char)uVar3 != '\0') {
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_188,local_124);
        iVar4 = local_188;
        FUN_00403f28(&local_18c,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_18c);
        FUN_004865c4(iVar4);
        TGroupBox_set_Font((int)piVar2);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_194,local_124);
        iVar4 = local_194;
        FUN_00403f28(&local_198,unaff_EDI,(undefined4 *)"Caption");
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,iVar4,local_198);
        TGroupBox_set_Caption((int)piVar2,local_190);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_19c,local_124);
        iVar4 = local_19c;
        FUN_00403f28(&local_1a0,unaff_EDI,(undefined4 *)"FontSize");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_1a0);
        uVar1 = MulDiv(iVar4,0x60,0x48);
        iVar4 = -uVar1;
        if (SBORROW4(0,uVar1)) {
          thunk_FUN_00402808(uVar1);
          iVar4 = extraout_EDX_01;
        }
        TFont_set_Height((int *)piVar2[0x16],iVar4);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_1a4,local_124);
        iVar4 = local_1a4;
        FUN_00403f28(&local_1a8,unaff_EDI,(undefined4 *)"FontColor");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_1a8);
        TFont_set_Color((int *)piVar2[0x16],iVar4,extraout_ECX_01);
      }
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TControl_vmt_000_0046745c);
      if ((char)uVar3 != '\0') {
        TGroupBox_set_Caption((int)piVar2,(uint *)0x0);
      }
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_004222c4);
      if ((char)uVar3 != '\0') {
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_1ac,local_124);
        iVar4 = local_1ac;
        FUN_00403f28(&local_1b0,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_1b0);
        FUN_004865c4(iVar4);
        TGroupBox_set_Font((int)piVar2);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_1b8,local_124);
        iVar4 = local_1b8;
        FUN_00403f28(&local_1bc,unaff_EDI,(undefined4 *)&DAT_00486ec0);
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,iVar4,local_1bc);
        FUN_00403cb0(piVar2 + 0x1c,local_1b4);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_1c0,local_124);
        iVar4 = local_1c0;
        FUN_00403f28(&local_1c4,unaff_EDI,(undefined4 *)"FontSize");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_1c4);
        TFont_set_Size((int *)piVar2[0x16],iVar4);
        FUN_00402ee4(*param_1,local_124);
        FUN_00403e80(&local_1c8,local_124);
        iVar4 = local_1c8;
        FUN_00403f28(&local_1cc,unaff_EDI,(undefined4 *)"FontColor");
        iVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,iVar4,local_1cc);
        TFont_set_Color((int *)piVar2[0x16],iVar4,extraout_ECX_02);
      }
      local_8 = local_8 + 1;
      local_20 = (code *)((int)local_20 + -1);
    } while (local_20 != (code *)0x0);
  }
  *in_FS_OFFSET = local_24;
  local_1c = FUN_00486e67;
  local_20 = (code *)0x486e4f;
  FUN_00403c80(&local_1cc,0x2a);
  local_20 = (code *)0x486e57;
  FUN_00403c5c(&local_24);
  local_20 = (code *)0x486e5f;
  FUN_00403c5c((int *)&stack0xffffffe8);
  return;
}


