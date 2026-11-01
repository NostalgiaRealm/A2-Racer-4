
/* ==== TCustomEdit.dyn_0030 @ 00426bfc ==== 
 * signature: undefined TCustomEdit.dyn_0030(void)
 * body: 00426bfc-00426c3a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomEdit_dyn_0030(int *param_1)

{
  HWND pHVar1;
  uint uVar2;
  UINT Msg;
  WPARAM wParam;
  int nIndex;
  LPARAM lParam;
  
  (**(code **)(*param_1 + -0x10))();
  if (*PTR_DAT_004ab7d4 != '\0') {
    nIndex = -0x10;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    uVar2 = GetWindowLongA(pHVar1,nIndex);
    if ((uVar2 & 4) == 0) {
      lParam = 0;
      wParam = 3;
      Msg = 0xd3;
      pHVar1 = (HWND)FUN_004349e0(param_1);
      SendMessageA(pHVar1,Msg,wParam,lParam);
    }
  }
  return;
}


