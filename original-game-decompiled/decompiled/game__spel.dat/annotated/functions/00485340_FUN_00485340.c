
/* ==== FUN_00485340 @ 00485340 ==== 
 * signature: undefined4 * __thiscall FUN_00485340(void * this, undefined4 * param_1)
 * body: 00485340-0048565a
 */

undefined4 * __thiscall FUN_00485340(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_101;
  undefined4 *local_100;
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  void *local_cc;
  undefined1 local_c8 [16];
  undefined **local_b8 [3];
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
  pcStack_8 = FUN_0056cf69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00485170(this,(int)param_1);
  if (iVar2 == 0) {
    local_cc = operator_new(0x818);
    local_4 = 0xd;
    if (local_cc == (void *)0x0) {
      local_100 = (undefined4 *)0x0;
    }
    else {
      local_100 = FUN_0047e390(local_cc,param_1);
    }
    local_4 = 0xffffffff;
    local_fc[0] = local_101;
    FUN_004028f0(local_fc,'\0');
    uVar5 = 0xffffffff;
    pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf54;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_fc,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf54,~uVar5 - 1);
    local_4 = 0xe;
    puVar3 = FUN_004797e0(local_9c,s_Unable_to_create_new_font_005aaf7c,(int)param_1);
    local_4._0_1_ = 0xf;
    FUN_00487bc0((int)local_100,puVar3,(int)local_fc);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    FUN_004028f0(local_9c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_fc,'\x01');
    FUN_004905f0(*(void **)((int)this + 0xc),*(undefined4 **)((int)*(void **)((int)this + 0xc) + 8),
                 &local_100);
    ExceptionList = local_c;
    return local_100;
  }
  local_dc[0] = local_101;
  FUN_004028f0(local_dc,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_005aaf04;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_dc,(undefined4 *)&DAT_005aaf04,~uVar5 - 1);
  local_4 = 0;
  puVar3 = FUN_004873b0(local_8c);
  local_4._0_1_ = 1;
  local_ec[0] = local_101;
  FUN_004028f0(local_ec,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf0c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_ec,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf0c,~uVar5 - 1);
  local_4._0_1_ = 2;
  local_c8[0] = local_101;
  FUN_004028f0(local_c8,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005aaf34;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_c8,(undefined4 *)s_HeadUp_Display_exception_in__005aaf34,~uVar5 - 1);
  local_4._0_1_ = 3;
  puVar4 = FUN_0047c9a0(local_1c,local_c8,(int)local_ec);
  local_4._0_1_ = 4;
  puVar4 = FUN_004796b0(local_6c,puVar4,&DAT_005aaf08);
  local_4._0_1_ = 5;
  puVar3 = FUN_0047c9a0(local_2c,puVar4,(int)puVar3);
  local_4._0_1_ = 6;
  puVar3 = FUN_0047c9a0(local_4c,puVar3,(int)local_dc);
  local_4._0_1_ = 7;
  puVar3 = FUN_004796b0(local_7c,puVar3,s_Trying_to_add_font_with_duplicat_005aaedc);
  local_4._0_1_ = 8;
  puVar3 = FUN_0047c9a0(local_5c,puVar3,(int)param_1);
  local_4._0_1_ = 9;
  puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005aaed8);
  local_4._0_1_ = 10;
  FUN_00558826(local_b8);
  local_4._0_1_ = 0xb;
  FUN_00424980(local_ac,&local_101);
  local_4._0_1_ = 0xc;
  local_b8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_ac,puVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b8,&DAT_0057f730);
}


