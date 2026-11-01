
/* ==== TOleControl.vmt_06c @ 00470af4 ==== 
 * signature: undefined TOleControl.vmt_06c(void)
 * body: 00470af4-00470bdb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  if (((0xbcff < *param_2) && (*param_2 < 0xbd09)) && (param_1[0x86] != 0)) {
    FUN_004349e0(param_1);
    GetMessageTime();
    iVar1 = (**(code **)(*(int *)param_1[0x86] + 0x14))();
    param_3 = extraout_ECX;
    if (iVar1 == 0) {
      param_2[3] = 1;
      return;
    }
  }
  if (*param_2 == 0xb008) {
    if ((*(char *)((int)param_1 + 0x49) != '\0') && (param_1[0x82] != 0)) {
      (**(code **)(*(int *)param_1[0x82] + 0x14))();
      (**(code **)(*(int *)param_1[0x82] + 0x14))();
      param_3 = extraout_ECX_00;
    }
  }
  else if (((*param_2 == 0xb009) && (*(char *)((int)param_1 + 0x4a) != '\0')) &&
          (param_1[0x82] != 0)) {
    (**(code **)(*(int *)param_1[0x82] + 0x14))();
    param_3 = extraout_ECX_01;
  }
  TWinControl_vmt_06c(param_1,param_2,param_3);
  return;
}


