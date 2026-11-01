
/* ==== FUN_00409990 @ 00409990 ==== 
 * signature: undefined __register FUN_00409990(void)
 * body: 00409990-004099c7
 */

void FUN_00409990(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x13) == '\0') {
    FUN_004097dc((short *)(in_stack_00000004 + -0xe),(ushort *)(in_stack_00000004 + -0x10),
                 (short *)(in_stack_00000004 + -0x12),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x13) = 1;
  }
  return;
}


