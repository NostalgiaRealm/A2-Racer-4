
/* ==== TCaptionForm.vmt_02c @ 004a732c ==== 
 * signature: int * __register TCaptionForm.vmt_02c(int * param_1, char param_2, undefined4 param_3)
 * body: 004a732c-004a7375
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCaptionForm_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
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
  TCustomForm_vmt_02c(param_1,'\0',param_3);
  FUN_004865e4(param_1);
  (**(code **)(*param_1 + 0xe0))();
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


