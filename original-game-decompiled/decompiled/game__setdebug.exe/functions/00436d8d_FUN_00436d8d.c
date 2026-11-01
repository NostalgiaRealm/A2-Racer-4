
/* ==== FUN_00436d8d @ 00436d8d ==== 
 * signature: undefined FUN_00436d8d(void)
 * body: 00436d8d-00436daa
 */

void FUN_00436d8d(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x436e1f;
  ReleaseDC(*(HWND *)(*(int *)(unaff_EBP + -4) + 0x10),*(HDC *)(unaff_EBP + -0x1c));
  return;
}


