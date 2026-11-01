
/* ==== FUN_0041bf00 @ 0041bf00 ==== 
 * signature: undefined FUN_0041bf00(void)
 * body: 0041bf00-0041bf24
 */

void FUN_0041bf00(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x41bfa4;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    DeleteDC(*(HDC *)(unaff_EBP + -0x10));
  }
  FUN_004026d0(*(int *)(unaff_EBP + -0x14));
  return;
}


