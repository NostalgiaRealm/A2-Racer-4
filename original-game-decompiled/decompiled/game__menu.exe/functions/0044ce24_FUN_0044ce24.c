
/* ==== FUN_0044ce24 @ 0044ce24 ==== 
 * signature: undefined __register FUN_0044ce24(int param_1)
 * body: 0044ce24-0044ce5c
 */

void FUN_0044ce24(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
    hWnd = GetLastActivePopup(*(HWND *)(param_1 + 0x24));
    if ((hWnd != (HWND)0x0) && (hWnd != *(HWND *)(param_1 + 0x24))) {
      BVar1 = IsWindowVisible(hWnd);
      if (BVar1 != 0) {
        BVar1 = IsWindowEnabled(hWnd);
        if (BVar1 != 0) {
          SetForegroundWindow(hWnd);
        }
      }
    }
  }
  return;
}


