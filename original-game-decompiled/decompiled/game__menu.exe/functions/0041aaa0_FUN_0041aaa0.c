
/* ==== FUN_0041aaa0 @ 0041aaa0 ==== 
 * signature: uint __register FUN_0041aaa0(void)
 * body: 0041aaa0-0041aaf6
 */

uint FUN_0041aaa0(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    uVar3 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x1c))();
    return uVar3 ^ 1;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_00416f48);
  if (((char)uVar2 != '\0') &&
     (uVar2 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x18))
                        (*(int **)(in_stack_00000004 + -8),piVar1), (char)uVar2 != '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


