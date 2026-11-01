
/* ==== FUN_0040ea48 @ 0040ea48 ==== 
 * signature: undefined __register FUN_0040ea48(int * param_1, char param_2, int param_3, int param_4, int param_5)
 * body: 0040ea48-0040ea7c
 */

void FUN_0040ea48(int *param_1,char param_2,int param_3,int param_4,int param_5)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffec,in_stack_fffffff0);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_4;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffec;
  }
  return;
}


