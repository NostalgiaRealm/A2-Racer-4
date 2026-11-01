
/* ==== TScrollingWinControl.vmt_02c @ 00445490 ==== 
 * signature: int * __register TScrollingWinControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00445490-004454f7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TScrollingWinControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControl_vmt_02c(param_1,'\0',param_3);
  piVar1 = FUN_0044490c((int *)&PTR_TPersistent_vmt_000_00441cd8,'\x01',(int)param_1,0);
  param_1[0x7c] = (int)piVar1;
  piVar1 = FUN_0044490c((int *)&PTR_TPersistent_vmt_000_00441cd8,'\x01',(int)param_1,1);
  param_1[0x7d] = (int)piVar1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


