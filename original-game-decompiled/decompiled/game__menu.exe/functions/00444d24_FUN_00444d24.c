
/* ==== FUN_00444d24 @ 00444d24 ==== 
 * signature: int __register FUN_00444d24(void)
 * body: 00444d24-00444d82
 */

int FUN_00444d24(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int local_8;
  
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -8) + 6);
  FUN_004349e0(*(int **)(*(int *)(in_stack_00000004 + -4) + 4));
  iVar2 = (**(code **)PTR_DAT_004ab630)();
  iVar3 = (int)sVar1;
  if (iVar2 != 0) {
    iVar3 = local_8;
  }
  return iVar3;
}


