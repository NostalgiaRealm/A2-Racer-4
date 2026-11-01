
/* ==== TScrollBox.vmt_02c @ 0043b2f0 ==== 
 * signature: undefined TScrollBox.vmt_02c(void)
 * body: 0043b2f0-0043b34b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TScrollBox_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TScrollingWinControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  TControl_set_Width(param_1,0xb9);
  TControl_set_Height(param_1,0x29);
  *(undefined1 *)(param_1 + 0x82) = 1;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


