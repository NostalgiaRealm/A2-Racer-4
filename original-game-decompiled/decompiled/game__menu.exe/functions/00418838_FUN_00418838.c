
/* ==== FUN_00418838 @ 00418838 ==== 
 * signature: int * __register FUN_00418838(int * param_1, char param_2, undefined4 param_3)
 * body: 00418838-00418875
 */

int * FUN_00418838(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_0041766c(DAT_004ac6a4,(byte *)&DAT_004aa5a8);
  param_1[4] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


