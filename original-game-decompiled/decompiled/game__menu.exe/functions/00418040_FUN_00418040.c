
/* ==== FUN_00418040 @ 00418040 ==== 
 * signature: int * __register FUN_00418040(int * param_1, char param_2, undefined4 param_3)
 * body: 00418040-00418093
 */

int * FUN_00418040(int *param_1,char param_2,undefined4 param_3)

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
  DAT_004aa378 = 0;
  iVar1 = FUN_0041766c(DAT_004ac69c,(byte *)&DAT_004aa378);
  param_1[4] = iVar1;
  param_1[6] = -0x7ffffff8;
  param_1[7] = DAT_004ac658;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


