
/* ==== TCustomCheckBox.vmt_090 @ 00428dac ==== 
 * signature: undefined __register TCustomCheckBox.vmt_090(int * param_1, int * param_2)
 * body: 00428dac-00428dfc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomCheckBox_vmt_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_vmt_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"BUTTON");
  uVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_004aa6d8 + (uint)*(byte *)(param_1 + 0x7e) * 4 + (uVar1 & 0x7f) * 8) |
               param_2[1] | 5U;
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


