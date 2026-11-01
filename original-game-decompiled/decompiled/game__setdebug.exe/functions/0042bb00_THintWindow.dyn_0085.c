
/* ==== THintWindow.dyn_0085 @ 0042bb00 ==== 
 * signature: undefined THintWindow.dyn_0085(void)
 * body: 0042bb00-0042bb72
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void THintWindow_dyn_0085(int *param_1)

{
  HWND pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  HDC hDC;
  tagRECT tStack_1c;
  HDC pHStack_c;
  int *piStack_8;
  
  piStack_8 = param_1;
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  pHStack_c = GetWindowDC(pHVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  FUN_0040e5ac(0,0,piStack_8[0xe],&tStack_1c.left,piStack_8[0xf]);
  DrawEdge(pHStack_c,&tStack_1c,1,0xf);
  *in_FS_OFFSET = uVar2;
  hDC = pHStack_c;
  pHVar1 = (HWND)FUN_0042a8b4(piStack_8);
  ReleaseDC(pHVar1,hDC);
  return;
}


