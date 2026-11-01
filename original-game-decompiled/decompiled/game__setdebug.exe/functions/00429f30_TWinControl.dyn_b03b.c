
/* ==== TWinControl.dyn_b03b @ 00429f30 ==== 
 * signature: undefined TWinControl.dyn_b03b(void)
 * body: 00429f30-00429f5f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b03b(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    uFlags = 0x37;
    cy = 0;
    cx = 0;
    Y = 0;
    X = 0;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)FUN_0042a8b4(param_1);
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  }
  return;
}


