
/* ==== FUN_0044c3b0 @ 0044c3b0 ==== 
 * signature: undefined __register FUN_0044c3b0(int param_1, undefined1 param_2)
 * body: 0044c3b0-0044c457
 */

void FUN_0044c3b0(int param_1,undefined1 param_2)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  HWND local_10;
  undefined1 local_c;
  
  if (*(int *)(DAT_004ac7d4 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
      local_10 = *(HWND *)(param_1 + 0x24);
      local_c = param_2;
      EnumWindows(FUN_0044c340,(LPARAM)&local_10);
      if (*(int *)(*(int *)(param_1 + 0x80) + 8) != 0) {
        local_10 = GetWindow(local_10,3);
        uVar1 = GetWindowLongA(local_10,-0x14);
        if ((uVar1 & 8) != 0) {
          local_10 = (HWND)0xfffffffe;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 8) + -1;
        if (-1 < iVar2) {
          do {
            uFlags = 0x13;
            cy = 0;
            cx = 0;
            Y = 0;
            X = 0;
            hWndInsertAfter = local_10;
            hWnd = (HWND)FUN_004102b0(*(undefined4 **)(param_1 + 0x80),iVar2);
            SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
      }
    }
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  return;
}


