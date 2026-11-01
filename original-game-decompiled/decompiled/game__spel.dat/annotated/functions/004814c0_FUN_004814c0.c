
/* ==== FUN_004814c0 @ 004814c0 ==== 
 * signature: undefined __stdcall FUN_004814c0(void)
 * body: 004814c0-004817fe
 */

void FUN_004814c0(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_131;
  void *local_130;
  int local_12c;
  undefined1 local_128 [16];
  undefined4 local_118 [2];
  int local_110;
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
  pcStack_8 = FUN_0056c64f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_12c = read_ini_value_setting(s_Fonts_005aa024,s_Count_005aa084);
  uVar2 = local_131;
  iVar7 = 0;
  if (0 < local_12c) {
    do {
      local_128[0] = uVar2;
      FUN_004028f0(local_128,'\0');
      uVar6 = 0xffffffff;
      pcVar8 = s_Fonts_005aa024;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_128,(undefined4 *)s_Fonts_005aa024,~uVar6 - 1);
      local_4 = 0;
      puVar3 = FUN_004873b0(local_bc);
      local_4._0_1_ = 1;
      FUN_004877e0((undefined1 *)local_118,(int)local_128,(int)puVar3);
      local_4._0_1_ = 4;
      FUN_004028f0(local_bc,'\x01');
      local_4._0_1_ = 3;
      FUN_004028f0(local_128,'\x01');
      if (local_110 == 0) {
        puVar3 = FUN_004873b0(local_ac);
        local_108[0] = local_131;
        local_4._0_1_ = 5;
        FUN_004028f0(local_108,'\0');
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_005aa714;
        goto code_r0x0048161d;
      }
      FUN_00481800(local_130,local_118);
      local_4 = 0xffffffff;
      FUN_004028f0(local_118,'\x01');
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_12c);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    if (cVar1 == '\0') break;
code_r0x0048161d:
    if (uVar6 == 0) break;
  }
  FUN_00402940(local_108,(undefined4 *)&DAT_005aa714,~uVar6 - 1);
  local_4._0_1_ = 6;
  puVar4 = FUN_004873b0(local_1c);
  local_4._0_1_ = 7;
  local_f8[0] = local_131;
  FUN_004028f0(local_f8,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa71c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_f8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa71c,~uVar6 - 1);
  local_e8[0] = local_131;
  local_4._0_1_ = 8;
  FUN_004028f0(local_e8,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_HeadUp_Display_exception_in__005aa748;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,(undefined4 *)s_HeadUp_Display_exception_in__005aa748,~uVar6 - 1);
  local_4._0_1_ = 9;
  puVar5 = FUN_0047c9a0(local_8c,local_e8,(int)local_f8);
  local_4._0_1_ = 10;
  puVar5 = FUN_004796b0(local_4c,puVar5,&DAT_005aa718);
  local_4._0_1_ = 0xb;
  puVar4 = FUN_0047c9a0(local_6c,puVar5,(int)puVar4);
  local_4._0_1_ = 0xc;
  puVar4 = FUN_0047c9a0(local_2c,puVar4,(int)local_108);
  local_4._0_1_ = 0xd;
  puVar4 = FUN_004796b0(local_9c,puVar4,s_Overlay_heading_005aa700);
  local_4._0_1_ = 0xe;
  puVar3 = FUN_0047c9a0(local_7c,puVar4,(int)puVar3);
  local_4._0_1_ = 0xf;
  puVar3 = FUN_004796b0(local_5c,puVar3,s_not_found_005aa6f4);
  local_4._0_1_ = 0x10;
  puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005aa6f0);
  local_4._0_1_ = 0x11;
  FUN_00558826(local_d8);
  local_4._0_1_ = 0x12;
  FUN_00424980(local_cc,&local_131);
  local_4._0_1_ = 0x13;
  local_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_cc,puVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_d8,&DAT_0057f730);
}


