
/* ==== FUN_0047f8b0 @ 0047f8b0 ==== 
 * signature: undefined __stdcall FUN_0047f8b0(int * param_1)
 * body: 0047f8b0-0047fc0c
 */

void FUN_0047f8b0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 local_129;
  undefined1 local_128 [4];
  char *local_124;
  undefined1 local_118 [16];
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
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c1f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_118,'\0');
  uVar6 = 0xffffffff;
  pcVar3 = s_Visible_005aa074;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_118,(undefined4 *)s_Visible_005aa074,~uVar6 - 1);
  puVar4 = local_118;
  local_4 = 0;
  iVar2 = FUN_0047bc10((int)param_1);
  FUN_004877e0(local_128,iVar2,(int)puVar4);
  local_4._0_1_ = 2;
  FUN_004028f0(local_118,'\x01');
  pcVar3 = local_124;
  if (local_124 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar2 = __strcmpi(pcVar3,&DAT_005aa3f8);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x20))(1);
  }
  else {
    if (local_124 == (char *)0x0) {
      local_124 = "";
    }
    iVar2 = __strcmpi(local_124,s_false_005aa400);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x20))(0);
    }
    else {
      uVar6 = FUN_00483e70(local_128,&DAT_007126d0);
      if (uVar6 != 0) {
        local_f8[0] = local_129;
        FUN_004028f0(local_f8,'\0');
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_005aa430;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_f8,(undefined4 *)&DAT_005aa430,~uVar6 - 1);
        local_4._0_1_ = 3;
        puVar4 = FUN_004873b0(local_2c);
        local_4._0_1_ = 4;
        local_108[0] = local_129;
        FUN_004028f0(local_108,'\0');
        uVar6 = 0xffffffff;
        pcVar3 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa438;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_108,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa438,~uVar6 - 1)
        ;
        local_4._0_1_ = 5;
        local_e8[0] = local_129;
        FUN_004028f0(local_e8,'\0');
        uVar6 = 0xffffffff;
        pcVar3 = s_HeadUp_Display_exception_in__005aa464;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_e8,(undefined4 *)s_HeadUp_Display_exception_in__005aa464,~uVar6 - 1);
        local_4._0_1_ = 6;
        puVar5 = FUN_0047c9a0(local_1c,local_e8,(int)local_108);
        local_4._0_1_ = 7;
        puVar5 = FUN_004796b0(local_bc,puVar5,&DAT_005aa434);
        local_4._0_1_ = 8;
        puVar4 = FUN_0047c9a0(local_8c,puVar5,(int)puVar4);
        local_4._0_1_ = 9;
        puVar4 = FUN_0047c9a0(local_4c,puVar4,(int)local_f8);
        local_4._0_1_ = 10;
        puVar4 = FUN_004796b0(local_6c,puVar4,s_Invalid_Visible_value_for_005aa414);
        local_4._0_1_ = 0xb;
        iVar2 = FUN_0047bc10((int)param_1);
        puVar4 = FUN_0047c9a0(local_ac,puVar4,iVar2);
        local_4._0_1_ = 0xc;
        puVar4 = FUN_004796b0(local_9c,puVar4,&DAT_005aa410);
        local_4._0_1_ = 0xd;
        puVar4 = FUN_0047c9a0(local_7c,puVar4,(int)local_128);
        local_4._0_1_ = 0xe;
        puVar4 = FUN_004796b0(local_5c,puVar4,&DAT_005aa40c);
        local_4._0_1_ = 0xf;
        puVar4 = FUN_004796b0(local_3c,puVar4,&DAT_005aa408);
        local_4._0_1_ = 0x10;
        FUN_00558826(local_d8);
        local_4._0_1_ = 0x11;
        FUN_00424980(local_cc,&local_129);
        local_4._0_1_ = 0x12;
        local_d8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(local_cc,puVar4,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0x10);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_d8,&DAT_0057f730);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_004028f0(local_128,'\x01');
  ExceptionList = pvStack_c;
  return;
}


