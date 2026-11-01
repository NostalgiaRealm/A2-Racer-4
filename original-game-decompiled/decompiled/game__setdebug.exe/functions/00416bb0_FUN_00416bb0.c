
/* ==== FUN_00416bb0 @ 00416bb0 ==== 
 * signature: int * __register FUN_00416bb0(int * param_1, char param_2, undefined4 param_3)
 * body: 00416bb0-00416bed
 */

int * FUN_00416bb0(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_004159e4(DAT_0044769c,(byte *)&DAT_00446584);
  param_1[4] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


