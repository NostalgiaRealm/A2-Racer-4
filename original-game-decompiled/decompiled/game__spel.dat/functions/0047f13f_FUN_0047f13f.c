
/* ==== FUN_0047f13f @ 0047f13f ==== 
 * signature: undefined __fastcall FUN_0047f13f(void * param_1)
 * body: 0047f13f-0047f13f
 */

void __fastcall FUN_0047f13f(void *param_1)

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
  undefined1 uStack_12d;
  int iStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [16];
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
  pcStack_8 = FUN_0056c078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iStack_12c = FUN_004c3cd0(s_Elements_005aa018,s_Count_005aa084);
  iVar8 = 0;
  if (0 < iStack_12c) {
    do {
      auStack_118[0] = uStack_12d;
      FUN_004028f0(auStack_118,'\0');
      uVar7 = 0xffffffff;
      pcVar9 = s_Elements_005aa018;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_118,(undefined4 *)s_Elements_005aa018,~uVar7 - 1);
      uStack_4 = 0;
      puVar2 = FUN_004873b0(auStack_bc);
      uStack_4._0_1_ = 1;
      FUN_004877e0((undefined1 *)&uStack_128,(int)auStack_118,(int)puVar2);
      uStack_4._0_1_ = 4;
      FUN_004028f0(auStack_bc,'\x01');
      uStack_4._0_1_ = 3;
      FUN_004028f0(auStack_118,'\x01');
      if (iStack_120 == 0) {
        puVar2 = FUN_004873b0(auStack_1c);
        uStack_4._0_1_ = 5;
        auStack_f8[0] = uStack_12d;
        FUN_004028f0(auStack_f8,'\0');
        uVar7 = 0xffffffff;
        pcVar9 = &DAT_005aa2cc;
        goto code_r0x0047f2dc;
      }
      pvVar3 = (void *)FUN_0047f4c0(param_1,(int)&uStack_128);
      piVar4 = FUN_0047fc10(param_1,&uStack_128,pvVar3);
      FUN_0047fd20(piVar4);
      FUN_0047f880(piVar4);
      uStack_4 = 0xffffffff;
      if (iStack_124 != 0) {
        cVar1 = *(char *)(iStack_124 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((LPVOID)(iStack_124 + -1));
        }
        else {
          *(char *)(iStack_124 + -1) = cVar1 + -1;
        }
      }
      iVar8 = iVar8 + 1;
      iStack_124 = 0;
      iStack_120 = 0;
      uStack_11c = 0;
    } while (iVar8 < iStack_12c);
  }
  ExceptionList = pvStack_c;
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 == '\0') break;
code_r0x0047f2dc:
    if (uVar7 == 0) break;
  }
  FUN_00402940(auStack_f8,(undefined4 *)&DAT_005aa2cc,~uVar7 - 1);
  uStack_4._0_1_ = 6;
  puVar5 = FUN_004873b0(auStack_ac);
  uStack_4._0_1_ = 7;
  auStack_108[0] = uStack_12d;
  FUN_004028f0(auStack_108,'\0');
  uVar7 = 0xffffffff;
  pcVar9 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa2d4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_108,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa2d4,~uVar7 - 1);
  uStack_4._0_1_ = 8;
  auStack_e8[0] = uStack_12d;
  FUN_004028f0(auStack_e8,'\0');
  uVar7 = 0xffffffff;
  pcVar9 = s_HeadUp_Display_exception_in__005aa300;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_e8,(undefined4 *)s_HeadUp_Display_exception_in__005aa300,~uVar7 - 1);
  uStack_4._0_1_ = 9;
  puVar6 = FUN_0047c9a0(auStack_8c,auStack_e8,(int)auStack_108);
  uStack_4._0_1_ = 10;
  puVar6 = FUN_004796b0(auStack_4c,puVar6,&DAT_005aa2d0);
  uStack_4._0_1_ = 0xb;
  puVar5 = FUN_0047c9a0(auStack_6c,puVar6,(int)puVar5);
  uStack_4._0_1_ = 0xc;
  puVar5 = FUN_0047c9a0(auStack_2c,puVar5,(int)auStack_f8);
  uStack_4._0_1_ = 0xd;
  puVar5 = FUN_004796b0(auStack_9c,puVar5,s_Overlay_heading_005aa2b8);
  uStack_4._0_1_ = 0xe;
  puVar2 = FUN_0047c9a0(auStack_7c,puVar5,(int)puVar2);
  uStack_4._0_1_ = 0xf;
  puVar2 = FUN_004796b0(auStack_5c,puVar2,s_not_found_005aa2ac);
  uStack_4._0_1_ = 0x10;
  puVar2 = FUN_004796b0(auStack_3c,puVar2,&DAT_005aa2a8);
  uStack_4._0_1_ = 0x11;
  FUN_00558826(appuStack_d8);
  uStack_4._0_1_ = 0x12;
  FUN_00424980(auStack_cc,&uStack_12d);
  uStack_4._0_1_ = 0x13;
  appuStack_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(auStack_cc,puVar2,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_d8,&DAT_0057f730);
}


