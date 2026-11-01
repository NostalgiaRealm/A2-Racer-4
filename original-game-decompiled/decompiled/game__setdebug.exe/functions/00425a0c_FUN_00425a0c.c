
/* ==== FUN_00425a0c @ 00425a0c ==== 
 * signature: undefined4 __register FUN_00425a0c(void)
 * body: 00425a0c-00425a3a
 */

undefined4 FUN_00425a0c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(iVar1 + 0x4e) != *(char *)(*(int *)(in_stack_00000004 + -8) + 0x4e));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(undefined1 *)(*(int *)(in_stack_00000004 + -8) + 0x4e));
}


