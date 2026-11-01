
/* ==== FUN_0042c664 @ 0042c664 ==== 
 * signature: undefined4 __register FUN_0042c664(void)
 * body: 0042c664-0042c68a
 */

undefined4 FUN_0042c664(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x14);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return 1;
}


