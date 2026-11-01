
/* ==== FUN_00440638 @ 00440638 ==== 
 * signature: undefined __register FUN_00440638(int param_1, short param_2)
 * body: 00440638-004406c5
 */

void FUN_00440638(int param_1,short param_2)

{
  POINT Point;
  HWND hWnd;
  DWORD DVar1;
  DWORD DVar2;
  LPARAM lParam;
  uint uVar3;
  HCURSOR hCursor;
  undefined2 extraout_var;
  tagPOINT local_18;
  
  if (param_2 != *(short *)(param_1 + 0x38)) {
    *(short *)(param_1 + 0x38) = param_2;
    if (param_2 == 0) {
      GetCursorPos(&local_18);
      Point.y = local_18.y;
      Point.x = local_18.x;
      hWnd = WindowFromPoint(Point);
      if (hWnd != (HWND)0x0) {
        DVar1 = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
        DVar2 = GetCurrentThreadId();
        if (DVar1 == DVar2) {
          lParam = FUN_004069e8((undefined2 *)&local_18);
          uVar3 = SendMessageA(hWnd,0x84,0,lParam);
          uVar3 = FUN_00406970(uVar3,CONCAT22(extraout_var,0x200));
          SendMessageA(hWnd,0x20,(WPARAM)hWnd,uVar3);
          return;
        }
      }
    }
    hCursor = (HCURSOR)FUN_00440610(param_1,(int)param_2);
    SetCursor(hCursor);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}


