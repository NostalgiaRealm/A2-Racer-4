
/* ==== FUN_004227e4 @ 004227e4 ==== 
 * signature: HWND __register FUN_004227e4(POINT * param_1)
 * body: 004227e4-0042280f
 */

HWND FUN_004227e4(POINT *param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  
  hWnd = WindowFromPoint(*param_1);
  while ((hWnd != (HWND)0x0 && (uVar1 = FUN_004227c0(hWnd), (char)uVar1 == '\0'))) {
    hWnd = GetParent(hWnd);
  }
  return hWnd;
}


