
/* ==== FUN_0044ac30 @ 0044ac30 ==== 
 * signature: bool __register FUN_0044ac30(void)
 * body: 0044ac30-0044ac54
 */

bool FUN_0044ac30(void)

{
  bool bVar1;
  int in_stack_00000004;
  
  bVar1 = true;
  if (*(int *)(in_stack_00000004 + -4) != 0) {
    bVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x28) !=
            *(int *)(*(int *)(in_stack_00000004 + -4) + 0x28);
  }
  return bVar1;
}


