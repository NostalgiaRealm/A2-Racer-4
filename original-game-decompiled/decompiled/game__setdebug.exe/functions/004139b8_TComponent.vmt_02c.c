
/* ==== TComponent.vmt_02c @ 004139b8 ==== 
 * signature: int * __register TComponent.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004139b8-004139fc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TComponent_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  if (param_3 != (int *)0x0) {
    FUN_00413b80(param_3,param_1,param_3);
  }
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


