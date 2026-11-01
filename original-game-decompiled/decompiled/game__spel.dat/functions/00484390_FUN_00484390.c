
/* ==== FUN_00484390 @ 00484390 ==== 
 * signature: int * __thiscall FUN_00484390(void * this, void * param_1, undefined4 * param_2)
 * body: 00484390-00484600
 */

int * __thiscall FUN_00484390(void *this,void *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_dd;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  void *local_ac;
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
  pcStack_8 = FUN_0056cd29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_ac = operator_new(0x50);
  local_4 = 0;
  if (local_ac == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0047cb20(local_ac,param_2);
  }
  local_4 = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    FUN_00484890(this,param_1,piVar2);
    ExceptionList = local_c;
    return piVar2;
  }
  local_bc[0] = local_dd;
  FUN_004028f0(local_bc,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_005aac24;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_bc,(undefined4 *)&DAT_005aac24,~uVar5 - 1);
  local_4 = 1;
  puVar3 = FUN_004873b0(local_1c);
  local_4._0_1_ = 2;
  local_dc[0] = local_dd;
  FUN_004028f0(local_dc,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aac2c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_dc,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aac2c,~uVar5 - 1);
  local_4._0_1_ = 3;
  local_cc[0] = local_dd;
  FUN_004028f0(local_cc,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005aac54;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_cc,(undefined4 *)s_HeadUp_Display_exception_in__005aac54,~uVar5 - 1);
  local_4._0_1_ = 4;
  puVar4 = FUN_0047c9a0(local_8c,local_cc,(int)local_dc);
  local_4._0_1_ = 5;
  puVar4 = FUN_004796b0(local_6c,puVar4,&DAT_005aac28);
  local_4._0_1_ = 6;
  puVar3 = FUN_0047c9a0(local_2c,puVar4,(int)puVar3);
  local_4._0_1_ = 7;
  puVar3 = FUN_0047c9a0(local_4c,puVar3,(int)local_bc);
  local_4._0_1_ = 8;
  puVar3 = FUN_004796b0(local_7c,puVar3,s_Unable_to_create_CHudElement_005aac04);
  local_4._0_1_ = 9;
  puVar3 = FUN_0047c9a0(local_5c,puVar3,(int)param_2);
  local_4._0_1_ = 10;
  puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005aac00);
  local_4._0_1_ = 0xb;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xc;
  FUN_00424980(local_9c,&local_dd);
  local_4._0_1_ = 0xd;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


