
/* ==== FUN_00436818 @ 00436818 ==== 
 * signature: undefined4 __register FUN_00436818(void)
 * body: 00436818-0043683e
 */

undefined4 FUN_00436818(void)

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


