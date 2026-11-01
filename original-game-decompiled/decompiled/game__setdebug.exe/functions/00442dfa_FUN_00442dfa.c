
/* ==== FUN_00442dfa @ 00442dfa ==== 
 * signature: undefined FUN_00442dfa(void)
 * body: 00442dfa-00442e21
 */

void FUN_00442dfa(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x442e29;
  if (*(HGDIOBJ *)(unaff_EBP + -0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x18));
  }
  if (*(HGDIOBJ *)(unaff_EBP + -0x1c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x1c));
  }
  return;
}


