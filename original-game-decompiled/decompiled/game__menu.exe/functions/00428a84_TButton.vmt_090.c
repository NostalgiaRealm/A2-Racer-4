
/* ==== TButton.vmt_090 @ 00428a84 ==== 
 * signature: undefined __register TButton.vmt_090(int * param_1, int * param_2)
 * body: 00428a84-00428ab5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButton_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"BUTTON");
  param_2[1] = param_2[1] | *(uint *)(&DAT_004aa6d0 + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}


