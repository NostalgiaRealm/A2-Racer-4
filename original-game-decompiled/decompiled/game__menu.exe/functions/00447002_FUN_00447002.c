
/* ==== FUN_00447002 @ 00447002 ==== 
 * signature: undefined FUN_00447002(void)
 * body: 00447002-00447021
 */

void FUN_00447002(void)

{
  HWND hWnd;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  HDC hDC;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x447033;
  hDC = *(HDC *)(unaff_EBP + -0x10);
  hWnd = (HWND)FUN_004349e0(*(int **)(unaff_EBP + -4));
  ReleaseDC(hWnd,hDC);
  return;
}


