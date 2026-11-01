
/* ==== FUN_00483030 @ 00483030 ==== 
 * signature: undefined4 __cdecl FUN_00483030(int param_1)
 * body: 00483030-004832a6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004832a7-004832af
 */

undefined4 __cdecl FUN_00483030(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 local_d9;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [3];
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
  pcStack_8 = FUN_0056ca6f;
  local_c = ExceptionList;
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &local_c;
  iVar3 = __strcmpi(pcVar2,s_Fixed_005aa0ec);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,s_Proportional_005aa0f4);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  local_c8[0] = local_d9;
  FUN_004028f0(local_c8,'\0');
  uVar6 = 0xffffffff;
  pcVar2 = &DAT_005aa9d8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_c8,(undefined4 *)&DAT_005aa9d8,~uVar6 - 1);
  local_4 = 0;
  puVar4 = FUN_004873b0(local_6c);
  local_4._0_1_ = 1;
  local_b8[0] = local_d9;
  FUN_004028f0(local_b8,'\0');
  uVar6 = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa9e0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_b8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa9e0,~uVar6 - 1);
  local_4._0_1_ = 2;
  local_d8[0] = local_d9;
  FUN_004028f0(local_d8,'\0');
  uVar6 = 0xffffffff;
  pcVar2 = s_HeadUp_Display_exception_in__005aaa0c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d8,(undefined4 *)s_HeadUp_Display_exception_in__005aaa0c,~uVar6 - 1);
  local_4._0_1_ = 3;
  puVar5 = FUN_0047c9a0(local_1c,local_d8,(int)local_b8);
  local_4._0_1_ = 4;
  puVar5 = FUN_004796b0(local_8c,puVar5,&DAT_005aa9dc);
  local_4._0_1_ = 5;
  puVar4 = FUN_0047c9a0(local_2c,puVar5,(int)puVar4);
  local_4._0_1_ = 6;
  puVar4 = FUN_0047c9a0(local_4c,puVar4,(int)local_c8);
  local_4._0_1_ = 7;
  puVar4 = FUN_004796b0(local_7c,puVar4,s_Unknown_string_type_005aa9c0);
  local_4._0_1_ = 8;
  puVar4 = FUN_0047c9a0(local_5c,puVar4,param_1);
  local_4._0_1_ = 9;
  puVar4 = FUN_004796b0(local_3c,puVar4,&DAT_005aa9bc);
  local_4._0_1_ = 10;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xb;
  FUN_00424980(local_9c,&local_d9);
  local_4._0_1_ = 0xc;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


