
/* ==== FUN_00481060 @ 00481060 ==== 
 * signature: undefined __stdcall FUN_00481060(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00481060-004810ff;004812cf-004814b0
 */

void FUN_00481060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_1bc [16];
  undefined1 local_1ac [16];
  undefined1 local_19c [32];
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined1 local_15c [16];
  undefined1 local_14c [16];
  undefined1 local_13c [32];
  undefined1 local_11c [32];
  undefined1 local_fc [16];
  undefined1 local_ec [60];
  undefined **local_b0 [3];
  undefined1 local_a4 [48];
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056c594;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdf8;
  pbVar2 = *(byte **)(param_1 + 4);
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  iVar3 = FUN_004c3d60(pbVar2,(uint *)&DAT_005aa008);
  if ((iVar3 < 4) && (1 < iVar3)) {
    local_8 = 0x10;
    FUN_004875b0(0);
    FUN_004875b0(1);
    if (iVar3 == 3) {
      FUN_004875b0(2);
    }
    ExceptionList = local_10;
    return;
  }
  puVar4 = FUN_004873b0(local_14c);
  local_8 = 0;
  local_74[0] = param_1._3_1_;
  FUN_004028f0(local_74,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_005aa620;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_74,(undefined4 *)&DAT_005aa620,~uVar7 - 1);
  local_8._0_1_ = 1;
  puVar5 = FUN_004873b0(local_1ac);
  local_8._0_1_ = 2;
  local_34[0] = param_1._3_1_;
  FUN_004028f0(local_34,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa628;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_34,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa628,~uVar7 - 1);
  local_8._0_1_ = 3;
  local_54[0] = param_1._3_1_;
  FUN_004028f0(local_54,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_HeadUp_Display_exception_in__005aa654;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_54,(undefined4 *)s_HeadUp_Display_exception_in__005aa654,~uVar7 - 1);
  local_8._0_1_ = 4;
  puVar6 = FUN_0047c9a0(local_16c,local_54,(int)local_34);
  local_8._0_1_ = 5;
  puVar6 = FUN_004796b0(local_ec,puVar6,&DAT_005aa624);
  local_8._0_1_ = 6;
  puVar5 = FUN_0047c9a0(local_fc,puVar6,(int)puVar5);
  local_8._0_1_ = 7;
  puVar5 = FUN_0047c9a0(local_11c,puVar5,(int)local_74);
  local_8._0_1_ = 8;
  puVar5 = FUN_004796b0(local_13c,puVar5,s_Invalid_no_of_X_Y_Z_arguments___005aa600);
  local_8._0_1_ = 9;
  puVar4 = FUN_0047c9a0(local_15c,puVar5,(int)puVar4);
  local_8._0_1_ = 10;
  puVar4 = FUN_004796b0(local_17c,puVar4,s_for_line_005aa5f4);
  local_8._0_1_ = 0xb;
  puVar4 = FUN_0047c9a0(local_19c,puVar4,param_1);
  local_8._0_1_ = 0xc;
  puVar4 = FUN_004796b0(local_1bc,puVar4,&DAT_005aa5f0);
  local_8._0_1_ = 0xd;
  FUN_00558826(local_b0);
  local_8._0_1_ = 0xe;
  FUN_00424980(local_a4,(undefined1 *)((int)&param_1 + 3));
  local_8._0_1_ = 0xf;
  local_b0[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_a4,puVar4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,0xd);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b0,&DAT_0057f730);
}


