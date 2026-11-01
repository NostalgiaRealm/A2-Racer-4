
/* ==== FUN_00484890 @ 00484890 ==== 
 * signature: undefined __thiscall FUN_00484890(void * this, void * param_1, int * param_2)
 * body: 00484890-00484aef
 */

void __thiscall FUN_00484890(void *this,void *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
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
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ce3f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0047bc10((int)param_2);
  iVar2 = FUN_00484dd0(this,iVar2);
  if (iVar2 == 0) {
    iVar2 = *param_2;
    iVar5 = FUN_0047bde0((int)param_1);
    (**(code **)(iVar2 + 0x28))(iVar5);
    FUN_0047c1d0(param_1,param_2);
    ExceptionList = pvStack_10;
    return;
  }
  local_c8[0] = local_d9;
  FUN_004028f0(local_c8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_005aad0c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_c8,(undefined4 *)&DAT_005aad0c,~uVar6 - 1);
  local_4 = 0;
  puVar3 = FUN_004873b0(local_6c);
  local_4._0_1_ = 1;
  local_b8[0] = local_d9;
  FUN_004028f0(local_b8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aad14;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_b8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aad14,~uVar6 - 1);
  local_4._0_1_ = 2;
  local_d8[0] = local_d9;
  FUN_004028f0(local_d8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005aad3c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d8,(undefined4 *)s_HeadUp_Display_exception_in__005aad3c,~uVar6 - 1);
  local_4._0_1_ = 3;
  puVar4 = FUN_0047c9a0(local_1c,local_d8,(int)local_b8);
  local_4._0_1_ = 4;
  puVar4 = FUN_004796b0(local_8c,puVar4,&DAT_005aad10);
  local_4._0_1_ = 5;
  puVar3 = FUN_0047c9a0(local_2c,puVar4,(int)puVar3);
  local_4._0_1_ = 6;
  puVar3 = FUN_0047c9a0(local_4c,puVar3,(int)local_c8);
  local_4._0_1_ = 7;
  puVar3 = FUN_004796b0(local_7c,puVar3,s_Component_name_already_exists__005aacec);
  local_4._0_1_ = 8;
  iVar2 = FUN_0047bc10((int)param_2);
  puVar3 = FUN_0047c9a0(local_5c,puVar3,iVar2);
  local_4._0_1_ = 9;
  puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005aace8);
  local_4._0_1_ = 10;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xb;
  FUN_00424980(local_9c,&local_d9);
  local_4._0_1_ = 0xc;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


