
/* ==== FUN_0047f4c0 @ 0047f4c0 ==== 
 * signature: int __thiscall FUN_0047f4c0(void * this, int param_1)
 * body: 0047f4c0-0047f875
 */

int __thiscall FUN_0047f4c0(void *this,int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_109;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  int local_d0;
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
  pcStack_8 = FUN_0056c13e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_c8,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_Parent_005aa034;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_c8,(undefined4 *)s_Parent_005aa034,~uVar5 - 1);
  local_4 = 0;
  FUN_004877e0(local_d8,param_1,(int)local_c8);
  local_4._0_1_ = 2;
  FUN_004028f0(local_c8,'\x01');
  if (local_d0 != 0) {
    iVar4 = FUN_00484fa0(*(void **)((int)this + 4),local_d8);
    local_108[0] = local_109;
    FUN_004028f0(local_108,'\0');
    uVar5 = 0xffffffff;
    pcVar6 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa3a0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_108,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa3a0,~uVar5 - 1);
    local_4._0_1_ = 0x11;
    puVar2 = FUN_004797e0(local_f8,s_Parent_composite_005aa3e4,(int)local_d8);
    local_4._0_1_ = 0x12;
    puVar2 = FUN_004796b0(local_e8,puVar2,s_not_found_in_overlay_005aa3cc);
    local_4._0_1_ = 0x13;
    FUN_00487bc0(iVar4,puVar2,(int)local_108);
    local_4._0_1_ = 0x12;
    FUN_004028f0(local_e8,'\x01');
    local_4._0_1_ = 0x11;
    FUN_004028f0(local_f8,'\x01');
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(local_108,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_d8,'\x01');
    ExceptionList = local_c;
    return iVar4;
  }
  local_e8[0] = local_109;
  FUN_004028f0(local_e8,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_No_parent_in_ini_file_for_compon_005aa324;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,(undefined4 *)s_No_parent_in_ini_file_for_compon_005aa324,~uVar5 - 1);
  local_f8[0] = local_109;
  local_4._0_1_ = 3;
  FUN_004028f0(local_f8,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_005aa34c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_f8,(undefined4 *)&DAT_005aa34c,~uVar5 - 1);
  local_4._0_1_ = 4;
  puVar2 = FUN_004873b0(local_8c);
  local_4._0_1_ = 5;
  local_108[0] = local_109;
  FUN_004028f0(local_108,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa354;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_108,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa354,~uVar5 - 1);
  local_b8[0] = local_109;
  local_4._0_1_ = 6;
  FUN_004028f0(local_b8,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005aa380;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_b8,(undefined4 *)s_HeadUp_Display_exception_in__005aa380,~uVar5 - 1);
  local_4._0_1_ = 7;
  puVar3 = FUN_0047c9a0(local_1c,local_b8,(int)local_108);
  local_4._0_1_ = 8;
  puVar3 = FUN_004796b0(local_6c,puVar3,&DAT_005aa350);
  local_4._0_1_ = 9;
  puVar2 = FUN_0047c9a0(local_2c,puVar3,(int)puVar2);
  local_4._0_1_ = 10;
  puVar2 = FUN_0047c9a0(local_4c,puVar2,(int)local_f8);
  local_4._0_1_ = 0xb;
  puVar2 = FUN_0047c9a0(local_7c,puVar2,(int)local_e8);
  local_4._0_1_ = 0xc;
  puVar2 = FUN_0047c9a0(local_5c,puVar2,param_1);
  local_4._0_1_ = 0xd;
  puVar2 = FUN_004796b0(local_3c,puVar2,&DAT_005aa320);
  local_4._0_1_ = 0xe;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xf;
  FUN_00424980(local_9c,&local_109);
  local_4._0_1_ = 0x10;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


