
/* ==== FUN_0040b764 @ 0040b764 ==== 
 * signature: int * __register FUN_0040b764(int * param_1, char param_2, undefined4 * param_3, int param_4)
 * body: 0040b764-0040b7a9
 */

int * FUN_0040b764(int *param_1,char param_2,undefined4 *param_3,int param_4)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00403cb0(param_1 + 1,param_3);
  param_1[2] = param_4;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


