
/* ==== TCustomGDIButton.vmt_02c @ 004680ec ==== 
 * signature: int * __register TCustomGDIButton.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004680ec-004681db
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomGDIButton_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControlWrapper_vmt_02c(param_1,'\0',param_3);
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX_00);
  param_1[0x5f] = (int)piVar1;
  FUN_00457194(piVar1,100,0x32,0x20);
  TControl_set_Width(param_1,100);
  TControl_set_Height(param_1,0x32);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  param_1[0x10] = param_1[0x10] & 0xffffff7f;
  piVar1 = TCustomApplicationEvents_vmt_02c((int *)&PTR_TPersistent_vmt_000_00464218,'\x01',param_1)
  ;
  param_1[0x62] = (int)piVar1;
  param_1[100] = 0x3c;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    piVar1 = TDaviTimer_vmt_02c((int *)&PTR_TPersistent_vmt_000_0045adf4,'\x01',param_1);
    param_1[0x61] = (int)piVar1;
    TDaviTimer_set_Interval((int)piVar1,param_1[100],extraout_ECX_01);
    TDaviTimer_set_OnTimer(param_1[0x61],extraout_EDX,extraout_ECX_02,FUN_00468284,param_1);
  }
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


