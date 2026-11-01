
/* ==== FUN_00485660 @ 00485660 ==== 
 * signature: undefined4 __thiscall FUN_00485660(void * this, void * param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 00485660-00485d09
 */

undefined4 __thiscall
FUN_00485660(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uStack_1b0;
  int *local_1ac;
  undefined1 local_1a8 [16];
  void *local_198;
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined **local_174 [3];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [28];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d111;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00485d50(this,(int)param_2);
  if (iVar2 != 0) {
    local_184[0] = uStack_1b0._3_1_;
    FUN_004028f0(local_184,'\0');
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_005aafc8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_184,(undefined4 *)&DAT_005aafc8,~uVar6 - 1);
    local_4 = 0;
    puVar3 = FUN_004873b0(local_d8);
    local_4._0_1_ = 1;
    local_194[0] = uStack_1b0._3_1_;
    FUN_004028f0(local_194,'\0');
    uVar6 = 0xffffffff;
    pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aafd0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_194,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aafd0,~uVar6 - 1);
    local_4._0_1_ = 2;
    local_1a8[0] = uStack_1b0._3_1_;
    FUN_004028f0(local_1a8,'\0');
    uVar6 = 0xffffffff;
    pcVar7 = s_HeadUp_Display_exception_in__005aaff8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1a8,(undefined4 *)s_HeadUp_Display_exception_in__005aaff8,~uVar6 - 1);
    local_4._0_1_ = 3;
    puVar4 = FUN_0047c9a0(local_c8,local_1a8,(int)local_194);
    local_4._0_1_ = 4;
    puVar4 = FUN_004796b0(local_b8,puVar4,&DAT_005aafcc);
    local_4._0_1_ = 5;
    puVar3 = FUN_0047c9a0(local_f8,puVar4,(int)puVar3);
    local_4._0_1_ = 6;
    puVar3 = FUN_0047c9a0(local_128,puVar3,(int)local_184);
    local_4._0_1_ = 7;
    puVar3 = FUN_004796b0(local_118,puVar3,s_Trying_to_add_string_with_duplic_005aaf9c);
    local_4._0_1_ = 8;
    puVar3 = FUN_0047c9a0(local_108,puVar3,(int)param_2);
    local_4._0_1_ = 9;
    puVar3 = FUN_004796b0(local_e8,puVar3,&DAT_005aaf98);
    local_4._0_1_ = 10;
    FUN_00558826(local_174);
    local_4._0_1_ = 0xb;
    FUN_00424980(local_168,(undefined1 *)((int)&uStack_1b0 + 3));
    local_4._0_1_ = 0xc;
    local_174[0] = &PTR_FUN_00576b14;
    FUN_004093c0(local_168,puVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_174,&DAT_0057f730);
  }
  if (param_5 == 0) {
    local_198 = operator_new(0xac);
    local_4 = 0xd;
    if (local_198 != (void *)0x0) {
      local_1ac = FUN_0047d710(local_198,param_2,param_3,param_4,2);
      goto LAB_00485af4;
    }
  }
  else {
    if (param_5 != 1) {
      local_194[0] = uStack_1b0._3_1_;
      FUN_004028f0(local_194,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005ab038;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_194,(undefined4 *)&DAT_005ab038,~uVar6 - 1);
      local_4 = 0xf;
      puVar3 = FUN_004873b0(local_e8);
      local_4._0_1_ = 0x10;
      local_184[0] = uStack_1b0._3_1_;
      FUN_004028f0(local_184,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab040;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_184,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005ab040,~uVar6 - 1);
      local_4._0_1_ = 0x11;
      local_1a8[0] = uStack_1b0._3_1_;
      FUN_004028f0(local_1a8,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = s_HeadUp_Display_exception_in__005ab068;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_1a8,(undefined4 *)s_HeadUp_Display_exception_in__005ab068,~uVar6 - 1);
      local_4._0_1_ = 0x12;
      puVar4 = FUN_0047c9a0(local_108,local_1a8,(int)local_184);
      local_4._0_1_ = 0x13;
      puVar4 = FUN_004796b0(local_118,puVar4,&DAT_005ab03c);
      local_4._0_1_ = 0x14;
      puVar3 = FUN_0047c9a0(local_128,puVar4,(int)puVar3);
      local_4._0_1_ = 0x15;
      puVar3 = FUN_0047c9a0(local_f8,puVar3,(int)local_194);
      local_4._0_1_ = 0x16;
      puVar3 = FUN_004796b0(local_b8,puVar3,s_Unknown_string_type_for_005ab01c);
      local_4._0_1_ = 0x17;
      puVar3 = FUN_0047c9a0(local_c8,puVar3,(int)param_2);
      local_4._0_1_ = 0x18;
      puVar3 = FUN_004796b0(local_d8,puVar3,&DAT_005ab018);
      local_4._0_1_ = 0x19;
      FUN_00558826(local_174);
      local_4._0_1_ = 0x1a;
      FUN_00424980(local_168,(undefined1 *)((int)&uStack_1b0 + 3));
      local_4._0_1_ = 0x1b;
      local_174[0] = &PTR_FUN_00576b14;
      FUN_004093c0(local_168,puVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0x19);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_174,&DAT_0057f730);
    }
    local_198 = operator_new(0xac);
    local_4 = 0xe;
    if (local_198 != (void *)0x0) {
      local_1ac = FUN_004862e0(local_198,param_2,param_3,param_4,0);
      goto LAB_00485af4;
    }
  }
  local_1ac = (int *)0x0;
LAB_00485af4:
  local_4 = 0xffffffff;
  if (local_1ac != (int *)0x0) {
    FUN_00484890(this,param_1,local_1ac);
    (**(code **)(*local_1ac + 0x44))(this);
    FUN_004ecea0((void *)((int)this + 0x10),&uStack_1b0);
    ExceptionList = pvStack_10;
    return uStack_1b0;
  }
  local_148[0] = uStack_1b0._3_1_;
  FUN_004028f0(local_148,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_005ab0b4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,(undefined4 *)&DAT_005ab0b4,~uVar6 - 1);
  local_4 = 0x1c;
  puVar3 = FUN_004873b0(local_3c);
  local_4._0_1_ = 0x1d;
  local_158[0] = uStack_1b0._3_1_;
  FUN_004028f0(local_158,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab0bc;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005ab0bc,~uVar6 - 1);
  local_4._0_1_ = 0x1e;
  local_138[0] = uStack_1b0._3_1_;
  FUN_004028f0(local_138,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005ab0e4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_138,(undefined4 *)s_HeadUp_Display_exception_in__005ab0e4,~uVar6 - 1);
  local_4._0_1_ = 0x1f;
  puVar4 = FUN_0047c9a0(local_8c,local_138,(int)local_158);
  local_4._0_1_ = 0x20;
  puVar4 = FUN_004796b0(local_1c,puVar4,&DAT_005ab0b8);
  local_4._0_1_ = 0x21;
  puVar3 = FUN_0047c9a0(local_6c,puVar4,(int)puVar3);
  local_4._0_1_ = 0x22;
  puVar3 = FUN_0047c9a0(local_2c,puVar3,(int)local_148);
  local_4._0_1_ = 0x23;
  puVar3 = FUN_004796b0(local_4c,puVar3,s_Unable_to_create_new_overlay_str_005ab08c);
  local_4._0_1_ = 0x24;
  puVar3 = FUN_0047c9a0(local_7c,puVar3,(int)param_2);
  local_4._0_1_ = 0x25;
  puVar5 = (undefined4 *)FUN_004796b0(local_5c,puVar3,&DAT_005ab088);
  local_4 = CONCAT31(local_4._1_3_,0x26);
  FUN_00483c10(local_a8,puVar5);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


