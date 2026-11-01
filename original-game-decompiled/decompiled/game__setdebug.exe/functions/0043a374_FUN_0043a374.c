
/* ==== FUN_0043a374 @ 0043a374 ==== 
 * signature: int __register FUN_0043a374(void)
 * body: 0043a374-0043a3d2
 */

int FUN_0043a374(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int local_8;
  
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -8) + 6);
  FUN_0042a8b4(*(int **)(*(int *)(in_stack_00000004 + -4) + 4));
  iVar2 = (**(code **)PTR_DAT_00446a98)();
  iVar3 = (int)sVar1;
  if (iVar2 != 0) {
    iVar3 = local_8;
  }
  return iVar3;
}


