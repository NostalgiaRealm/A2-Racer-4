
/* ==== FUN_0044abc8 @ 0044abc8 ==== 
 * signature: undefined4 __register FUN_0044abc8(void)
 * body: 0044abc8-0044abf9
 */

undefined4 FUN_0044abc8(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + -4) != 0) {
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2c);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    iVar1 != *(int *)(*(int *)(in_stack_00000004 + -4) + 0x2c));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2c) != 0);
}


