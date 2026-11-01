
/* ==== FUN_0044df86 @ 0044df86 ==== 
 * signature: undefined FUN_0044df86(void)
 * body: 0044df86-0044dfad
 */

void FUN_0044df86(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x44dfb5;
  if (*(HGDIOBJ *)(unaff_EBP + -0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x18));
  }
  if (*(HGDIOBJ *)(unaff_EBP + -0x1c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x1c));
  }
  return;
}


