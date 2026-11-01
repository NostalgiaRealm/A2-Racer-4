
/* ==== FUN_0040fc84 @ 0040fc84 ==== 
 * signature: undefined __register FUN_0040fc84(int * param_1, char param_2, int param_3, int param_4, int param_5)
 * body: 0040fc84-0040fcb8
 */

void FUN_0040fc84(int *param_1,char param_2,int param_3,int param_4,int param_5)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffec,in_stack_fffffff0);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_4;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffec;
  }
  return;
}


