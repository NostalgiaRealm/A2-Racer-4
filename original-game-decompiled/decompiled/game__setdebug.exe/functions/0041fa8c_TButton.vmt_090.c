
/* ==== TButton.vmt_090 @ 0041fa8c ==== 
 * signature: undefined TButton.vmt_090(void)
 * body: 0041fa8c-0041fabd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButton_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  FUN_004278a4(param_1,(int)param_2,"BUTTON");
  param_2[1] = param_2[1] | *(uint *)(&DAT_0044661c + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}


