
/* ==== TButton.vmt_02c @ 00428970 ==== 
 * signature: int * __register TButton.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00428970-004289cd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TButton_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TButtonControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xe0;
  TControl_set_Width(param_1,0x4b);
  TControl_set_Height(param_1,0x19);
  TGroupBox_set_TabStop((int)param_1,'\x01');
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


