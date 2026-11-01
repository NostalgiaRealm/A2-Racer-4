
/* ==== FUN_004864c0 @ 004864c0 ==== 
 * signature: undefined __fastcall FUN_004864c0(void * param_1)
 * body: 004864c0-004869d7
 */

void __fastcall FUN_004864c0(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_fd;
  float local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  int local_c0;
  undefined **local_b8 [3];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
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
  pcStack_8 = FUN_0056d24d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479520((void *)((int)param_1 + 0x9c),local_c8,0,*(uint *)((int)param_1 + 0x98));
  local_4 = 0;
  iVar2 = FUN_004871c0((int)param_1);
  fVar8 = FUN_0047e6d0(iVar2);
  if ((float10)0.0 < fVar8) {
    local_fc = (float)((float10)*(float *)((int)param_1 + 0x94) / fVar8);
    iVar2 = FUN_004871d0((int)param_1);
    if (iVar2 == 0) {
      FUN_004869e0(param_1,(int)local_c8,local_fc);
    }
    else if (iVar2 == 1) {
      FUN_00486ad0(param_1,(float)local_c8,local_fc);
    }
    else {
      if (iVar2 != 2) {
        local_f8[0] = local_fd;
        FUN_004028f0(local_f8,'\0');
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_005ab218;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_f8,(undefined4 *)&DAT_005ab218,~uVar6 - 1);
        local_4._0_1_ = 0xf;
        puVar3 = FUN_004873b0(local_3c);
        local_d8[0] = local_fd;
        local_4._0_1_ = 0x10;
        FUN_004028f0(local_d8,'\0');
        uVar6 = 0xffffffff;
        pcVar7 = s_C__Work_A2IV_Game_prog_Hud_PropS_005ab220;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_d8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_PropS_005ab220,~uVar6 - 1);
        local_4._0_1_ = 0x11;
        local_e8[0] = local_fd;
        FUN_004028f0(local_e8,'\0');
        uVar6 = 0xffffffff;
        pcVar7 = s_HeadUp_Display_exception_in__005ab24c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_e8,(undefined4 *)s_HeadUp_Display_exception_in__005ab24c,~uVar6 - 1);
        local_4._0_1_ = 0x12;
        puVar4 = FUN_0047c9a0(local_5c,local_e8,(int)local_d8);
        local_4._0_1_ = 0x13;
        puVar4 = FUN_004796b0(local_7c,puVar4,&DAT_005ab21c);
        local_4._0_1_ = 0x14;
        puVar3 = FUN_0047c9a0(local_8c,puVar4,(int)puVar3);
        local_4._0_1_ = 0x15;
        puVar3 = FUN_0047c9a0(local_2c,puVar3,(int)local_f8);
        local_4._0_1_ = 0x16;
        puVar3 = FUN_004796b0(local_6c,puVar3,s_Invalid_alignment_in_string_005ab1f8);
        local_4._0_1_ = 0x17;
        iVar2 = FUN_0047bc10((int)param_1);
        puVar3 = FUN_0047c9a0(local_4c,puVar3,iVar2);
        local_4._0_1_ = 0x18;
        puVar3 = FUN_004796b0(local_9c,puVar3,&DAT_005ab1f4);
        local_4._0_1_ = 0x19;
        FUN_00558826(local_b8);
        local_4._0_1_ = 0x1a;
        FUN_00424980(local_ac,&local_fd);
        local_4._0_1_ = 0x1b;
        local_b8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(local_ac,puVar3,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0x19);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_b8,&DAT_0057f730);
      }
      FUN_00486c20(param_1,(int)local_c8,local_fc);
    }
    iVar2 = local_c0;
    if (local_c0 < *(int *)((int)param_1 + 0x98)) {
      do {
        iVar5 = FUN_00487200((int)param_1);
        FUN_0047ce40(*(void **)(*(int *)(*(int *)(iVar5 + 4) + 4) + iVar2 * 4),-1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)param_1 + 0x98));
    }
    local_4 = 0xffffffff;
    FUN_004028f0(local_c8,'\x01');
    ExceptionList = local_c;
    return;
  }
  local_d8[0] = local_fd;
  FUN_004028f0(local_d8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_005ab1a0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d8,(undefined4 *)&DAT_005ab1a0,~uVar6 - 1);
  local_4._0_1_ = 1;
  puVar3 = FUN_004873b0(local_1c);
  local_f8[0] = local_fd;
  local_4._0_1_ = 2;
  FUN_004028f0(local_f8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_PropS_005ab1a8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_f8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_PropS_005ab1a8,~uVar6 - 1);
  local_4._0_1_ = 3;
  local_e8[0] = local_fd;
  FUN_004028f0(local_e8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005ab1d4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,(undefined4 *)s_HeadUp_Display_exception_in__005ab1d4,~uVar6 - 1);
  local_4._0_1_ = 4;
  puVar4 = FUN_0047c9a0(local_9c,local_e8,(int)local_f8);
  local_4._0_1_ = 5;
  puVar4 = FUN_004796b0(local_4c,puVar4,&DAT_005ab1a4);
  local_4._0_1_ = 6;
  puVar3 = FUN_0047c9a0(local_6c,puVar4,(int)puVar3);
  local_4._0_1_ = 7;
  puVar3 = FUN_0047c9a0(local_2c,puVar3,(int)local_d8);
  local_4._0_1_ = 8;
  puVar3 = FUN_004796b0(local_8c,puVar3,s_Font_005ab198);
  local_4._0_1_ = 9;
  iVar2 = FUN_004871c0((int)param_1);
  puVar3 = FUN_0047c9a0(local_7c,puVar3,iVar2 + 0x808);
  local_4._0_1_ = 10;
  puVar3 = FUN_004796b0(local_5c,puVar3,s_initialized_incorrectly__All_cha_005ab160);
  local_4._0_1_ = 0xb;
  puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005ab15c);
  local_4._0_1_ = 0xc;
  FUN_00558826(local_b8);
  local_4._0_1_ = 0xd;
  FUN_00424980(local_ac,&local_fd);
  local_4._0_1_ = 0xe;
  local_b8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_ac,puVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b8,&DAT_0057f730);
}


