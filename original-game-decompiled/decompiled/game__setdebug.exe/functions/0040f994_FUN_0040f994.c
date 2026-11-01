
/* ==== FUN_0040f994 @ 0040f994 ==== 
 * signature: byte __register FUN_0040f994(void)
 * body: 0040f994-0040f9e8
 */

byte FUN_0040f994(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x14))();
    bVar2 = 0 < iVar4;
  }
  else {
    bVar2 = 1;
    uVar3 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_vmt_000_0040db8c);
    if ((char)uVar3 != '\0') {
      bVar2 = FUN_0040fa4c(*(int **)(in_stack_00000004 + -8),piVar1);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


