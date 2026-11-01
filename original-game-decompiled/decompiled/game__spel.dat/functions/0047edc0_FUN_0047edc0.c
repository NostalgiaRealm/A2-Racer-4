
/* ==== FUN_0047edc0 @ 0047edc0 ==== 
 * signature: undefined __fastcall FUN_0047edc0(void * param_1)
 * body: 0047edc0-0047f13e
 */

void __fastcall FUN_0047edc0(void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_12d;
  int local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8 [3];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
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
  pcStack_8 = FUN_0056bfbd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_12c = FUN_004c3cd0(s_Composites_005aa00c,s_Count_005aa084);
  iVar8 = 0;
  if (0 < local_12c) {
    do {
      local_118[0] = local_12d;
      FUN_004028f0(local_118,'\0');
      uVar7 = 0xffffffff;
      pcVar9 = s_Composites_005aa00c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_118,(undefined4 *)s_Composites_005aa00c,~uVar7 - 1);
      local_4 = 0;
      puVar2 = FUN_004873b0(local_bc);
      local_4._0_1_ = 1;
      FUN_004877e0((undefined1 *)&local_128,(int)local_118,(int)puVar2);
      local_4._0_1_ = 4;
      FUN_004028f0(local_bc,'\x01');
      local_4._0_1_ = 3;
      FUN_004028f0(local_118,'\x01');
      if (local_120 == 0) {
        puVar2 = FUN_004873b0(local_1c);
        local_4._0_1_ = 5;
        local_f8[0] = local_12d;
        FUN_004028f0(local_f8,'\0');
        uVar7 = 0xffffffff;
        pcVar9 = &DAT_005aa254;
        goto code_r0x0047ef5d;
      }
      pvVar3 = (void *)FUN_0047f4c0(param_1,(int)&local_128);
      piVar4 = FUN_00484610(*(void **)((int)param_1 + 4),pvVar3,&local_128);
      FUN_0047feb0(param_1,piVar4);
      FUN_0047f880(piVar4);
      local_4 = 0xffffffff;
      if (local_124 != 0) {
        cVar1 = *(char *)(local_124 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((LPVOID)(local_124 + -1));
        }
        else {
          *(char *)(local_124 + -1) = cVar1 + -1;
        }
      }
      iVar8 = iVar8 + 1;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
    } while (iVar8 < local_12c);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 == '\0') break;
code_r0x0047ef5d:
    if (uVar7 == 0) break;
  }
  FUN_00402940(local_f8,(undefined4 *)&DAT_005aa254,~uVar7 - 1);
  local_4._0_1_ = 6;
  puVar5 = FUN_004873b0(local_ac);
  local_4._0_1_ = 7;
  local_108[0] = local_12d;
  FUN_004028f0(local_108,'\0');
  uVar7 = 0xffffffff;
  pcVar9 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa25c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_108,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa25c,~uVar7 - 1);
  local_4._0_1_ = 8;
  local_e8[0] = local_12d;
  FUN_004028f0(local_e8,'\0');
  uVar7 = 0xffffffff;
  pcVar9 = s_HeadUp_Display_exception_in__005aa288;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,(undefined4 *)s_HeadUp_Display_exception_in__005aa288,~uVar7 - 1);
  local_4._0_1_ = 9;
  puVar6 = FUN_0047c9a0(local_8c,local_e8,(int)local_108);
  local_4._0_1_ = 10;
  puVar6 = FUN_004796b0(local_4c,puVar6,&DAT_005aa258);
  local_4._0_1_ = 0xb;
  puVar5 = FUN_0047c9a0(local_6c,puVar6,(int)puVar5);
  local_4._0_1_ = 0xc;
  puVar5 = FUN_0047c9a0(local_2c,puVar5,(int)local_f8);
  local_4._0_1_ = 0xd;
  puVar5 = FUN_004796b0(local_9c,puVar5,s_Overlay_heading_005aa240);
  local_4._0_1_ = 0xe;
  puVar2 = FUN_0047c9a0(local_7c,puVar5,(int)puVar2);
  local_4._0_1_ = 0xf;
  puVar2 = FUN_004796b0(local_5c,puVar2,s_not_found_005aa234);
  local_4._0_1_ = 0x10;
  puVar2 = FUN_004796b0(local_3c,puVar2,&DAT_005aa230);
  local_4._0_1_ = 0x11;
  FUN_00558826(local_d8);
  local_4._0_1_ = 0x12;
  FUN_00424980(local_cc,&local_12d);
  local_4._0_1_ = 0x13;
  local_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_cc,puVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_d8,&DAT_0057f730);
}


