
/* ==== FUN_0041d6d3 @ 0041d6d3 ==== 
 * signature: undefined FUN_0041d6d3(void)
 * body: 0041d6d3-0041d6dc;0041d6f5-0041d72b
 */

void FUN_0041d6d3(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_0000000c;
  undefined4 uStack00000014;
  
  *in_FS_OFFSET = in_stack_00000000;
  *in_FS_OFFSET = in_stack_0000000c;
  uStack00000014 = 0x41d733;
  DeleteDC(*(HDC *)(unaff_EBP + -0x1c));
  ReleaseDC((HWND)0x0,*(HDC *)(unaff_EBP + -0x18));
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    GetObjectA(*(HANDLE *)(unaff_EBP + -0x10),0x54,*(LPVOID *)(unaff_EBP + 0xc));
  }
  return;
}


