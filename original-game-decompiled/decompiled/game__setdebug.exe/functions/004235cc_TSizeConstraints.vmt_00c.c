
/* ==== TSizeConstraints.vmt_00c @ 004235cc ==== 
 * signature: int * __register TSizeConstraints.vmt_00c(int * param_1, char param_2, int param_3)
 * body: 004235cc-00423607
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TSizeConstraints_vmt_00c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  param_1[1] = param_3;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


