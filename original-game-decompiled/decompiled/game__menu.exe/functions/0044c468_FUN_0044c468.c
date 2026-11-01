
/* ==== FUN_0044c468 @ 0044c468 ==== 
 * signature: undefined __register FUN_0044c468(int param_1)
 * body: 0044c468-0044c4d0
 */

void FUN_0044c468(int param_1)

{
  HWND hWnd;
  int iVar1;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if (((*(int *)(DAT_004ac7d4 + 0x24) != 0) && (0 < *(int *)(param_1 + 0x84))) &&
     (*(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1, *(int *)(param_1 + 0x84) == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 8) + -1;
    if (-1 < iVar1) {
      do {
        uFlags = 0x13;
        cy = 0;
        cx = 0;
        Y = 0;
        X = 0;
        hWndInsertAfter = (HWND)0xffffffff;
        hWnd = (HWND)FUN_004102b0(*(undefined4 **)(param_1 + 0x80),iVar1);
        SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
  }
  return;
}


