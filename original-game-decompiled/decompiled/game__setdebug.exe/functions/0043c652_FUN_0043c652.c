
/* ==== FUN_0043c652 @ 0043c652 ==== 
 * signature: undefined FUN_0043c652(void)
 * body: 0043c652-0043c671
 */

void FUN_0043c652(void)

{
  HWND hWnd;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  HDC hDC;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x43c683;
  hDC = *(HDC *)(unaff_EBP + -0x10);
  hWnd = (HWND)FUN_0042a8b4(*(int **)(unaff_EBP + -4));
  ReleaseDC(hWnd,hDC);
  return;
}


