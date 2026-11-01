
/* ==== FUN_004878f0 @ 004878f0 ==== 
 * signature: undefined __cdecl FUN_004878f0(int param_1, int param_2, int param_3)
 * body: 004878f0-00487ba1;00487ba4-00487bba
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00487ba2-00487ba3
 */

void __cdecl FUN_004878f0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [28];
  undefined1 local_10c [16];
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
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
  pcStack_8 = FUN_0056d3fc;
  local_c = ExceptionList;
  if ((param_2 <= param_1) && (param_1 <= param_3)) {
    return;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_004873b0(local_6c);
  local_4 = 0;
  puVar3 = FUN_004873b0(local_1c);
  local_4._0_1_ = 1;
  puVar4 = FUN_004873b0(local_ec);
  local_4._0_1_ = 2;
  FUN_004028f0(local_148,'\0');
  uVar8 = 0xffffffff;
  pcVar9 = &DAT_005ab32c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)&DAT_005ab32c,~uVar8 - 1);
  local_4._0_1_ = 3;
  puVar5 = FUN_004873b0(local_4c);
  local_4._0_1_ = 4;
  FUN_004028f0(local_158,'\0');
  uVar8 = 0xffffffff;
  pcVar9 = s_C__Work_A2IV_Game_prog_Hud_Utils_005ab334;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Utils_005ab334,~uVar8 - 1);
  local_4._0_1_ = 5;
  FUN_004028f0(local_138,'\0');
  uVar8 = 0xffffffff;
  pcVar9 = s_HeadUp_Display_exception_in__005ab35c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_138,(undefined4 *)s_HeadUp_Display_exception_in__005ab35c,~uVar8 - 1);
  local_4._0_1_ = 6;
  puVar6 = FUN_0047c9a0(local_cc,local_138,(int)local_158);
  local_4._0_1_ = 7;
  puVar6 = FUN_004796b0(local_10c,puVar6,&DAT_005ab330);
  local_4._0_1_ = 8;
  puVar5 = FUN_0047c9a0(local_ac,puVar6,(int)puVar5);
  local_4._0_1_ = 9;
  puVar5 = FUN_0047c9a0(local_2c,puVar5,(int)local_148);
  local_4._0_1_ = 10;
  puVar5 = FUN_004796b0(local_8c,puVar5,s_Illegal_value_005ab31c);
  local_4._0_1_ = 0xb;
  puVar4 = FUN_0047c9a0(local_fc,puVar5,(int)puVar4);
  local_4._0_1_ = 0xc;
  puVar4 = FUN_004796b0(local_dc,puVar4,s_for_range___005ab30c);
  local_4._0_1_ = 0xd;
  puVar3 = FUN_0047c9a0(local_bc,puVar4,(int)puVar3);
  local_4._0_1_ = 0xe;
  puVar3 = FUN_004796b0(local_9c,puVar3,&DAT_005ab308);
  local_4._0_1_ = 0xf;
  puVar2 = FUN_0047c9a0(local_7c,puVar3,(int)puVar2);
  local_4._0_1_ = 0x10;
  puVar2 = FUN_004796b0(local_5c,puVar2,&DAT_005ab304);
  local_4._0_1_ = 0x11;
  puVar7 = (undefined4 *)FUN_004796b0(local_3c,puVar2,&DAT_005ab300);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_00483c10(local_128,puVar7);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_128,&DAT_0057f730);
}


