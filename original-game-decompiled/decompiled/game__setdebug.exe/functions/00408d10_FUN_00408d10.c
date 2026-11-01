
/* ==== FUN_00408d10 @ 00408d10 ==== 
 * signature: undefined __register FUN_00408d10(void)
 * body: 00408d10-00408d47
 */

void FUN_00408d10(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x13) == '\0') {
    FUN_00408bd8((short *)(in_stack_00000004 + -0xe),(ushort *)(in_stack_00000004 + -0x10),
                 (short *)(in_stack_00000004 + -0x12),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x13) = 1;
  }
  return;
}


