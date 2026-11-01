
/* ==== FUN_00481b90 @ 00481b90 ==== 
 * signature: undefined __stdcall FUN_00481b90(int param_1, byte param_2, void * param_3)
 * body: 00481b90-00481f00;00481f02-00481ff2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00481f01-00481f01
 */

void FUN_00481b90(int param_1,byte param_2,void *param_3)

{
  char cVar1;
  float fVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_119;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
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
  pcStack_8 = FUN_0056c779;
  local_c = ExceptionList;
  pbVar3 = *(byte **)(param_1 + 4);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_004c3d60(pbVar3,(uint *)&DAT_005aa008);
  if (4 < iVar4) {
    puVar5 = FUN_004876f0(local_d8,0);
    local_4 = 0x15;
    FUN_004796b0(local_b8,puVar5,&DAT_005aa804);
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_004028f0(local_d8,'\x01');
    local_118 = (float)FUN_004c3ec0(1);
    local_114 = (float)(int)local_118;
    local_118 = (float)FUN_004c3ec0(2);
    local_10c = (float)(int)local_118;
    local_118 = (float)FUN_004c3ec0(3);
    local_110 = (float)(int)local_118;
    iVar4 = FUN_004c3ec0(4);
    fVar2 = local_110;
    local_118 = (float)iVar4;
    uVar7 = FUN_00482960(local_114,local_10c,local_110,local_118,(int)local_b8);
    FUN_0047e6f0(param_3,param_2,uVar7,fVar2);
    local_4 = 0xffffffff;
    FUN_004028f0(local_b8,'\x01');
    ExceptionList = local_c;
    return;
  }
  puVar5 = FUN_004873b0(local_7c);
  local_4 = 0;
  puVar5 = FUN_004797e0(local_8c,s_Wrong_number_of_arguments___005aa780,(int)puVar5);
  local_4._0_1_ = 1;
  FUN_004796b0(local_c8,puVar5,s___in_character_005aa770);
  local_4._0_1_ = 4;
  FUN_004028f0(local_8c,'\x01');
  local_4._0_1_ = 3;
  FUN_004028f0(local_7c,'\x01');
  FUN_0047eab0(local_c8,1,param_2);
  puVar5 = FUN_004873b0(local_d8);
  local_4._0_1_ = 5;
  puVar5 = FUN_004797e0(local_e8,&DAT_005aa7a8,(int)puVar5);
  local_4._0_1_ = 6;
  puVar5 = FUN_004796b0(local_108,puVar5,s___in_font_005aa79c);
  local_4._0_1_ = 7;
  puVar5 = FUN_0047c9a0(local_f8,puVar5,(int)param_3 + 0x808);
  local_4._0_1_ = 8;
  FUN_00483d90(local_c8,(int)puVar5,0,0xffffffff);
  local_4._0_1_ = 7;
  FUN_004028f0(local_f8,'\x01');
  local_4._0_1_ = 6;
  FUN_004028f0(local_108,'\x01');
  local_4._0_1_ = 5;
  FUN_004028f0(local_e8,'\x01');
  local_4._0_1_ = 3;
  FUN_004028f0(local_d8,'\x01');
  local_f8[0] = local_119;
  FUN_004028f0(local_f8,'\0');
  uVar8 = 0xffffffff;
  pcVar9 = &DAT_005aa7b0;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_f8,(undefined4 *)&DAT_005aa7b0,~uVar8 - 1);
  local_4._0_1_ = 9;
  puVar5 = FUN_004873b0(local_d8);
  local_e8[0] = local_119;
  local_4._0_1_ = 10;
  FUN_004028f0(local_e8,'\0');
  uVar8 = 0xffffffff;
  pcVar9 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa7b8;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa7b8,~uVar8 - 1);
  local_4._0_1_ = 0xb;
  local_108[0] = local_119;
  FUN_004028f0(local_108,'\0');
  uVar8 = 0xffffffff;
  pcVar9 = s_HeadUp_Display_exception_in__005aa7e4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_108,(undefined4 *)s_HeadUp_Display_exception_in__005aa7e4,~uVar8 - 1);
  local_4._0_1_ = 0xc;
  puVar6 = FUN_0047c9a0(local_4c,local_108,(int)local_e8);
  local_4._0_1_ = 0xd;
  puVar6 = FUN_004796b0(local_1c,puVar6,&DAT_005aa7b4);
  local_4._0_1_ = 0xe;
  puVar5 = FUN_0047c9a0(local_6c,puVar6,(int)puVar5);
  local_4._0_1_ = 0xf;
  puVar5 = FUN_0047c9a0(local_2c,puVar5,(int)local_f8);
  local_4._0_1_ = 0x10;
  puVar5 = FUN_0047c9a0(local_5c,puVar5,(int)local_c8);
  local_4._0_1_ = 0x11;
  puVar5 = FUN_004796b0(local_3c,puVar5,&DAT_005aa7ac);
  local_4._0_1_ = 0x12;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0x13;
  FUN_00424980(local_9c,&local_119);
  local_4._0_1_ = 0x14;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar5,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x12);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


