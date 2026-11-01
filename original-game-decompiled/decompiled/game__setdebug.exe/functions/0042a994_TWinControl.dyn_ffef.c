
/* ==== TWinControl.dyn_ffef @ 0042a994 ==== 
 * signature: undefined __register TWinControl.dyn_ffef(int * param_1)
 * body: 0042a994-0042a9d1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffef(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    bVar1 = FUN_0042abb0((int)param_1);
    if (bVar1) {
      uFlags = 0x16;
      cy = param_1[0xf];
      cx = param_1[0xe];
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)FUN_0042a8b4(param_1);
      SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    }
  }
  return;
}


