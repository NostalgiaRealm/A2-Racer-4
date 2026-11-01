
/* ==== FUN_004814b1 @ 004814b1 ==== 
 * signature: undefined __stdcall FUN_004814b1(void)
 * body: 004814b1-004814bf
 */

void FUN_004814b1(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 uStack_131;
  void *pvStack_130;
  int iStack_12c;
  undefined1 auStack_128 [16];
  undefined4 auStack_118 [2];
  int iStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined **appuStack_d8 [3];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056c64f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iStack_12c = FUN_004c3cd0(s_Fonts_005aa024,s_Count_005aa084);
  uVar2 = uStack_131;
  iVar7 = 0;
  if (0 < iStack_12c) {
    do {
      auStack_128[0] = uVar2;
      FUN_004028f0(auStack_128,'\0');
      uVar6 = 0xffffffff;
      pcVar8 = s_Fonts_005aa024;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_128,(undefined4 *)s_Fonts_005aa024,~uVar6 - 1);
      uStack_4 = 0;
      puVar3 = FUN_004873b0(auStack_bc);
      uStack_4._0_1_ = 1;
      FUN_004877e0((undefined1 *)auStack_118,(int)auStack_128,(int)puVar3);
      uStack_4._0_1_ = 4;
      FUN_004028f0(auStack_bc,'\x01');
      uStack_4._0_1_ = 3;
      FUN_004028f0(auStack_128,'\x01');
      if (iStack_110 == 0) {
        puVar3 = FUN_004873b0(auStack_ac);
        auStack_108[0] = uStack_131;
        uStack_4._0_1_ = 5;
        FUN_004028f0(auStack_108,'\0');
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_005aa714;
        goto code_r0x0048161d;
      }
      FUN_00481800(pvStack_130,auStack_118);
      uStack_4 = 0xffffffff;
      FUN_004028f0(auStack_118,'\x01');
      iVar7 = iVar7 + 1;
    } while (iVar7 < iStack_12c);
  }
  ExceptionList = pvStack_c;
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    if (cVar1 == '\0') break;
code_r0x0048161d:
    if (uVar6 == 0) break;
  }
  FUN_00402940(auStack_108,(undefined4 *)&DAT_005aa714,~uVar6 - 1);
  uStack_4._0_1_ = 6;
  puVar4 = FUN_004873b0(auStack_1c);
  uStack_4._0_1_ = 7;
  auStack_f8[0] = uStack_131;
  FUN_004028f0(auStack_f8,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa71c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_f8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa71c,~uVar6 - 1);
  auStack_e8[0] = uStack_131;
  uStack_4._0_1_ = 8;
  FUN_004028f0(auStack_e8,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_HeadUp_Display_exception_in__005aa748;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_e8,(undefined4 *)s_HeadUp_Display_exception_in__005aa748,~uVar6 - 1);
  uStack_4._0_1_ = 9;
  puVar5 = FUN_0047c9a0(auStack_8c,auStack_e8,(int)auStack_f8);
  uStack_4._0_1_ = 10;
  puVar5 = FUN_004796b0(auStack_4c,puVar5,&DAT_005aa718);
  uStack_4._0_1_ = 0xb;
  puVar4 = FUN_0047c9a0(auStack_6c,puVar5,(int)puVar4);
  uStack_4._0_1_ = 0xc;
  puVar4 = FUN_0047c9a0(auStack_2c,puVar4,(int)auStack_108);
  uStack_4._0_1_ = 0xd;
  puVar4 = FUN_004796b0(auStack_9c,puVar4,s_Overlay_heading_005aa700);
  uStack_4._0_1_ = 0xe;
  puVar3 = FUN_0047c9a0(auStack_7c,puVar4,(int)puVar3);
  uStack_4._0_1_ = 0xf;
  puVar3 = FUN_004796b0(auStack_5c,puVar3,s_not_found_005aa6f4);
  uStack_4._0_1_ = 0x10;
  puVar3 = FUN_004796b0(auStack_3c,puVar3,&DAT_005aa6f0);
  uStack_4._0_1_ = 0x11;
  FUN_00558826(appuStack_d8);
  uStack_4._0_1_ = 0x12;
  FUN_00424980(auStack_cc,&uStack_131);
  uStack_4._0_1_ = 0x13;
  appuStack_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(auStack_cc,puVar3,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_d8,&DAT_0057f730);
}


