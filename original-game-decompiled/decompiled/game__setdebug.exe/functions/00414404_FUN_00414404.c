
/* ==== FUN_00414404 @ 00414404 ==== 
 * signature: int * __register FUN_00414404(int * param_1, char param_2, int param_3, undefined1 param_4)
 * body: 00414404-0041444b
 */

int * FUN_00414404(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


