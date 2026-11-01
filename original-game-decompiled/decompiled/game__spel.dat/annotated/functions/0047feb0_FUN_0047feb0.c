
/* ==== FUN_0047feb0 @ 0047feb0 ==== 
 * signature: undefined __thiscall FUN_0047feb0(void * this, int * param_1)
 * body: 0047feb0-004804f7
 */

void __thiscall FUN_0047feb0(void *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  float10 fVar12;
  float *pfVar13;
  char local_101;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f1;
  char local_f0 [16];
  char local_e0 [16];
  char local_d0 [16];
  char local_c0 [16];
  int local_b0;
  int local_ac;
  undefined **local_a8 [3];
  undefined1 local_9c [16];
  undefined1 local_8c [4];
  byte *local_88;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c344;
  local_c = ExceptionList;
  local_100 = 0.0;
  local_fc = 0.0;
  local_f8 = 0.0;
  ExceptionList = &local_c;
  FUN_004807d0(this,param_1);
  local_d0[0] = local_101;
  FUN_004028f0(local_d0,'\0');
  uVar10 = 0xffffffff;
  pcVar11 = (char *)&DAT_005aa044;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d0,&DAT_005aa044,~uVar10 - 1);
  pfVar13 = &local_100;
  pcVar11 = local_d0;
  local_4 = 0;
  iVar3 = FUN_0047bc10((int)param_1);
  uVar4 = FUN_00480f70(iVar3,(int)pcVar11,(int)pfVar13);
  local_101 = (char)uVar4 == '\0';
  local_4 = 0xffffffff;
  FUN_004028f0(local_d0,'\x01');
  if (local_101 != '\0') {
    ExceptionList = local_c;
    return;
  }
  local_b0 = 0;
  local_ac = 0;
  local_d0[0] = local_101;
  FUN_004028f0(local_d0,'\0');
  uVar10 = 0xffffffff;
  pcVar11 = s_Alignment_005aa0b0;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d0,(undefined4 *)s_Alignment_005aa0b0,~uVar10 - 1);
  pcVar11 = local_d0;
  local_4 = 1;
  iVar3 = FUN_0047bc10((int)param_1);
  FUN_004877e0(local_8c,iVar3,(int)pcVar11);
  local_4._0_1_ = 3;
  FUN_004028f0(local_d0,'\x01');
  pbVar5 = local_88;
  if (local_88 == (byte *)0x0) {
    pbVar5 = &DAT_0057629c;
  }
  iVar6 = get_ini_arguments_online(pbVar5,(uint *)&DAT_005aa484);
  iVar3 = local_b0;
  iVar7 = local_ac;
  if (iVar6 == 2) {
    FUN_004876f0(local_e0,0);
    local_4._0_1_ = 4;
    iVar3 = FUN_00483580((int)local_e0);
    FUN_004876f0(local_f0,1);
    local_4._0_1_ = 5;
    iVar7 = FUN_00483830((int)local_f0);
    local_4._0_1_ = 4;
    FUN_004028f0(local_f0,'\x01');
    local_4._0_1_ = 3;
    FUN_004028f0(local_e0,'\x01');
  }
  local_100 = local_100 / *(float *)((int)this + 0x18);
  local_100 = (local_100 + local_100) - 1.0;
  if (iVar3 == 0) {
    fVar12 = FUN_0047c4d0((int)param_1);
    fVar12 = fVar12 + (float10)local_100;
LAB_00480286:
    local_100 = (float)fVar12;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      local_f0[0] = local_101;
      FUN_004028f0(local_f0,'\0');
      uVar10 = 0xffffffff;
      pcVar11 = &DAT_005aa4a8;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_f0,(undefined4 *)&DAT_005aa4a8,~uVar10 - 1);
      local_4._0_1_ = 6;
      puVar8 = FUN_004873b0(local_7c);
      local_4._0_1_ = 7;
      local_c0[0] = local_101;
      FUN_004028f0(local_c0,'\0');
      uVar10 = 0xffffffff;
      pcVar11 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa4b0;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_c0,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa4b0,~uVar10 - 1);
      local_e0[0] = local_101;
      local_4._0_1_ = 8;
      FUN_004028f0(local_e0,'\0');
      uVar10 = 0xffffffff;
      pcVar11 = s_HeadUp_Display_exception_in__005aa4dc;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_e0,(undefined4 *)s_HeadUp_Display_exception_in__005aa4dc,~uVar10 - 1);
      local_4._0_1_ = 9;
      puVar9 = FUN_0047c9a0(local_1c,local_e0,(int)local_c0);
      local_4._0_1_ = 10;
      puVar9 = FUN_004796b0(local_2c,puVar9,&DAT_005aa4ac);
      local_4._0_1_ = 0xb;
      puVar8 = FUN_0047c9a0(local_4c,puVar9,(int)puVar8);
      local_4._0_1_ = 0xc;
      puVar8 = FUN_0047c9a0(local_6c,puVar8,(int)local_f0);
      local_4._0_1_ = 0xd;
      puVar8 = FUN_004796b0(local_5c,puVar8,s_Unreachable_code_reached_005aa48c);
      local_4._0_1_ = 0xe;
      puVar8 = FUN_004796b0(local_3c,puVar8,&DAT_005aa488);
      local_4._0_1_ = 0xf;
      FUN_00558826(local_a8);
      local_4._0_1_ = 0x10;
      FUN_00424980(local_9c,&local_101);
      local_4._0_1_ = 0x11;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(local_9c,puVar8,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xf);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
    fVar12 = FUN_0047c4d0((int)param_1);
    fVar12 = (float10)local_100 - fVar12;
    goto LAB_00480286;
  }
  local_fc = local_fc / *(float *)((int)this + 0x1c);
  local_fc = 1.0 - (local_fc + local_fc);
  if (iVar7 == 0) {
    fVar12 = FUN_0047c4e0((int)param_1);
    fVar12 = (float10)local_fc - fVar12;
  }
  else {
    if (iVar7 == 1) goto LAB_0048049f;
    if (iVar7 != 2) {
      local_c0[0] = local_101;
      FUN_004028f0(local_c0,'\0');
      uVar10 = 0xffffffff;
      pcVar11 = &DAT_005aa51c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_c0,(undefined4 *)&DAT_005aa51c,~uVar10 - 1);
      local_4._0_1_ = 0x12;
      puVar8 = FUN_004873b0(local_3c);
      local_f0[0] = local_101;
      local_4._0_1_ = 0x13;
      FUN_004028f0(local_f0,'\0');
      uVar10 = 0xffffffff;
      pcVar11 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa524;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_f0,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa524,~uVar10 - 1);
      local_4._0_1_ = 0x14;
      local_e0[0] = local_101;
      FUN_004028f0(local_e0,'\0');
      uVar10 = 0xffffffff;
      pcVar11 = s_HeadUp_Display_exception_in__005aa550;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_e0,(undefined4 *)s_HeadUp_Display_exception_in__005aa550,~uVar10 - 1);
      local_4._0_1_ = 0x15;
      puVar9 = FUN_0047c9a0(local_5c,local_e0,(int)local_f0);
      local_4._0_1_ = 0x16;
      puVar9 = FUN_004796b0(local_6c,puVar9,&DAT_005aa520);
      local_4._0_1_ = 0x17;
      puVar8 = FUN_0047c9a0(local_4c,puVar9,(int)puVar8);
      local_4._0_1_ = 0x18;
      puVar8 = FUN_0047c9a0(local_2c,puVar8,(int)local_c0);
      local_4._0_1_ = 0x19;
      puVar8 = FUN_004796b0(local_1c,puVar8,s_Unreachable_code_reached_005aa500);
      local_4._0_1_ = 0x1a;
      puVar8 = FUN_004796b0(local_7c,puVar8,&DAT_005aa4fc);
      local_4._0_1_ = 0x1b;
      FUN_00558826(local_a8);
      local_4._0_1_ = 0x1c;
      FUN_00424980(local_9c,&local_f1);
      local_4._0_1_ = 0x1d;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(local_9c,puVar8,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0x1b);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
    fVar12 = FUN_0047c4e0((int)param_1);
    fVar12 = fVar12 + (float10)local_fc;
  }
  local_fc = (float)fVar12;
LAB_0048049f:
  local_f8 = local_f8 / *(float *)((int)this + 0x18);
  FUN_0047bc50(param_1,&local_100);
  if (local_88 != (byte *)0x0) {
    bVar2 = local_88[-1];
    if ((bVar2 == 0) || (bVar2 == 0xff)) {
      FUN_0054b339(local_88 + -1);
    }
    else {
      local_88[-1] = bVar2 - 1;
    }
  }
  ExceptionList = local_c;
  return;
}


