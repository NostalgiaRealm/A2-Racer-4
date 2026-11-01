
/* ==== FUN_00412dc8 @ 00412dc8 ==== 
 * signature: int * __register FUN_00412dc8(int * param_1, char param_2, int param_3, undefined4 * param_4, undefined4 * param_5, int param_6, int param_7)
 * body: 00412dc8-00412e1e
 */

int * FUN_00412dc8(int *param_1,char param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                  int param_6,int param_7)

{
  int extraout_ECX;
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
  param_1[1] = param_3;
  param_1[2] = param_7;
  param_1[3] = param_6;
  FUN_00403cb0(param_1 + 4,param_5);
  FUN_00403cb0(param_1 + 5,param_4);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


