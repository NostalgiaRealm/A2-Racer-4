
/* ==== FUN_0048302a @ 0048302a ==== 
 * signature: undefined4 __stdcall FUN_0048302a(int param_1)
 * body: 0048302a-0048302f
 */

undefined4 FUN_0048302a(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 uStack_d9;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined **appuStack_a8 [3];
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
  pcStack_8 = FUN_0056ca6f;
  pvStack_c = ExceptionList;
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &pvStack_c;
  iVar3 = __strcmpi(pcVar2,s_Fixed_005aa0ec);
  if (iVar3 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,s_Proportional_005aa0f4);
  if (iVar3 == 0) {
    ExceptionList = pvStack_c;
    return 1;
  }
  auStack_c8[0] = uStack_d9;
  FUN_004028f0(auStack_c8,'\0');
  uVar6 = 0xffffffff;
  pcVar2 = &DAT_005aa9d8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_c8,(undefined4 *)&DAT_005aa9d8,~uVar6 - 1);
  uStack_4 = 0;
  puVar4 = FUN_004873b0(auStack_6c);
  uStack_4._0_1_ = 1;
  auStack_b8[0] = uStack_d9;
  FUN_004028f0(auStack_b8,'\0');
  uVar6 = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa9e0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_b8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa9e0,~uVar6 - 1);
  uStack_4._0_1_ = 2;
  auStack_d8[0] = uStack_d9;
  FUN_004028f0(auStack_d8,'\0');
  uVar6 = 0xffffffff;
  pcVar2 = s_HeadUp_Display_exception_in__005aaa0c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_d8,(undefined4 *)s_HeadUp_Display_exception_in__005aaa0c,~uVar6 - 1);
  uStack_4._0_1_ = 3;
  puVar5 = FUN_0047c9a0(auStack_1c,auStack_d8,(int)auStack_b8);
  uStack_4._0_1_ = 4;
  puVar5 = FUN_004796b0(auStack_8c,puVar5,&DAT_005aa9dc);
  uStack_4._0_1_ = 5;
  puVar4 = FUN_0047c9a0(auStack_2c,puVar5,(int)puVar4);
  uStack_4._0_1_ = 6;
  puVar4 = FUN_0047c9a0(auStack_4c,puVar4,(int)auStack_c8);
  uStack_4._0_1_ = 7;
  puVar4 = FUN_004796b0(auStack_7c,puVar4,s_Unknown_string_type_005aa9c0);
  uStack_4._0_1_ = 8;
  puVar4 = FUN_0047c9a0(auStack_5c,puVar4,param_1);
  uStack_4._0_1_ = 9;
  puVar4 = FUN_004796b0(auStack_3c,puVar4,&DAT_005aa9bc);
  uStack_4._0_1_ = 10;
  FUN_00558826(appuStack_a8);
  uStack_4._0_1_ = 0xb;
  FUN_00424980(auStack_9c,&uStack_d9);
  uStack_4._0_1_ = 0xc;
  appuStack_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(auStack_9c,puVar4,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_a8,&DAT_0057f730);
}


