
/* ==== FUN_0043f950 @ 0043f950 ==== 
 * signature: undefined __register FUN_0043f950(void)
 * body: 0043f950-0043f9d0
 */

void FUN_0043f950(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  (**(code **)(**(int **)(in_stack_00000004 + -8) + 8))
            (*(int **)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc));
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + -0xc) + 0x14))();
  *(undefined4 *)(in_stack_00000004 + -0x10) = uVar1;
  iVar2 = (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      uVar1 = (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x18))
                        (*(int **)(in_stack_00000004 + -0x14),iVar4);
      iVar3 = (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x18))
                        (*(int **)(in_stack_00000004 + -0x14),iVar4);
      (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x38))
                (*(int **)(in_stack_00000004 + -8),*(undefined4 *)(iVar3 + 0x24),uVar1);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00403cf4((int *)(in_stack_00000004 + -0x18),*(int *)(in_stack_00000004 + -4));
  return;
}


