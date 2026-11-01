
/* ==== FUN_0041e864 @ 0041e864 ==== 
 * signature: undefined FUN_0041e864(void)
 * body: 0041e864-0041e888
 */

void FUN_0041e864(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x41e908;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    DeleteDC(*(HDC *)(unaff_EBP + -0x10));
  }
  FUN_00402794(*(int *)(unaff_EBP + -0x14));
  return;
}


