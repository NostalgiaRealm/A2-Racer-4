
/* ==== TWinControl.dyn_ffef @ 00434ac0 ==== 
 * signature: undefined __register TWinControl.dyn_ffef(int * param_1)
 * body: 00434ac0-00434afd
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
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      uFlags = 0x16;
      cy = param_1[0xf];
      cx = param_1[0xe];
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)FUN_004349e0(param_1);
      SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    }
  }
  return;
}


