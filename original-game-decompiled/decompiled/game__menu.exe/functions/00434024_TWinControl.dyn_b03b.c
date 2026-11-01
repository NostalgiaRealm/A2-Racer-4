
/* ==== TWinControl.dyn_b03b @ 00434024 ==== 
 * signature: undefined __register TWinControl.dyn_b03b(int * param_1)
 * body: 00434024-00434053
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
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    uFlags = 0x37;
    cy = 0;
    cx = 0;
    Y = 0;
    X = 0;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)FUN_004349e0(param_1);
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  }
  return;
}


