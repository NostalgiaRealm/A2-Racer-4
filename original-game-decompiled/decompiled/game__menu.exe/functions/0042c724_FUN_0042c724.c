
/* ==== FUN_0042c724 @ 0042c724 ==== 
 * signature: HWND __register FUN_0042c724(POINT * param_1)
 * body: 0042c724-0042c74f
 */

HWND FUN_0042c724(POINT *param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  
  hWnd = WindowFromPoint(*param_1);
  while ((hWnd != (HWND)0x0 && (uVar1 = FUN_0042c700(hWnd), (char)uVar1 == '\0'))) {
    hWnd = GetParent(hWnd);
  }
  return hWnd;
}


