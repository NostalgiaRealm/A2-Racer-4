
/* ==== FUN_0040a9f4 @ 0040a9f4 ==== 
 * signature: int * __register FUN_0040a9f4(int * param_1, char param_2, undefined4 * param_3)
 * body: 0040a9f4-0040aa2d
 */

int * FUN_0040a9f4(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
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
  FUN_00405298(param_3,param_1 + 1);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


