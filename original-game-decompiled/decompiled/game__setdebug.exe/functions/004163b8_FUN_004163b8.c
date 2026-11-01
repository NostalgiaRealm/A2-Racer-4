
/* ==== FUN_004163b8 @ 004163b8 ==== 
 * signature: int * __register FUN_004163b8(int * param_1, char param_2, undefined4 param_3)
 * body: 004163b8-0041640b
 */

int * FUN_004163b8(int *param_1,char param_2,undefined4 param_3)

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
  DAT_00446354 = 0;
  iVar1 = FUN_004159e4(DAT_00447694,(byte *)&DAT_00446354);
  param_1[4] = iVar1;
  param_1[6] = -0x7ffffff8;
  param_1[7] = DAT_00447650;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


