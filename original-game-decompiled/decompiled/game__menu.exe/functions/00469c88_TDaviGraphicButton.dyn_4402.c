
/* ==== TDaviGraphicButton.dyn_4402 @ 00469c88 ==== 
 * signature: undefined TDaviGraphicButton.dyn_4402(void)
 * body: 00469c88-00469cd4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicButton_dyn_4402(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  HRGN hRgn;
  BOOL bRedraw;
  
  bVar1 = FUN_00434cdc((int)param_1);
  if ((bVar1) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    bRedraw = -1;
    hRgn = (HRGN)0x0;
    hWnd = (HWND)FUN_004349e0(param_1);
    SetWindowRgn(hWnd,hRgn,bRedraw);
  }
  param_1[0x85] = 0;
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],0x18,0x68);
  (**(code **)(*param_1 + 0x74))();
  return;
}


