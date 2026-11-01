
/* ==== TCustomGDIButton.vmt_07c @ 00468cac ==== 
 * signature: undefined TCustomGDIButton.vmt_07c(void)
 * body: 00468cac-00468cfb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_1[0x5d];
  if (iVar1 != 0) {
    param_5 = *(int *)(iVar1 + 0x40);
    param_4 = *(int *)(iVar1 + 0x44);
  }
  FUN_00457194((int *)param_1[0x5f],param_5,param_4,0x20);
  TControl_vmt_07c(param_1,param_2,param_3,param_4,param_5);
  return;
}


