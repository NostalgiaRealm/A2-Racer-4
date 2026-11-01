
/* ==== TCustomGDICheckBox.vmt_02c @ 0048febc ==== 
 * signature: undefined TCustomGDICheckBox.vmt_02c(void)
 * body: 0048febc-0048ff0c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomGDICheckBox_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomGDIButton_vmt_02c(param_1,'\0',param_3);
  TControl_set_Width(param_1,0x14);
  TControl_set_Height(param_1,0x14);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


