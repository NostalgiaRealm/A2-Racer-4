
/* ==== FUN_00441e84 @ 00441e84 ==== 
 * signature: undefined __register FUN_00441e84(int param_1)
 * body: 00441e84-00441ebc
 */

void FUN_00441e84(int param_1)

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


