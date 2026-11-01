
/* ==== TBaseDragControlObject.vmt_024 @ 00422070 ==== 
 * signature: undefined __register TBaseDragControlObject.vmt_024(int * param_1, char param_2, int param_3)
 * body: 00422070-00422092
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBaseDragControlObject_vmt_024(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[0xe] = param_3;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


