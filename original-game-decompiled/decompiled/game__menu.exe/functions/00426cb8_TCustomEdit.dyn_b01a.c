
/* ==== TCustomEdit.dyn_b01a @ 00426cb8 ==== 
 * signature: undefined TCustomEdit.dyn_b01a(void)
 * body: 00426cb8-00426cf2
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomEdit_dyn_b01a(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int nIndex;
  
  if (((char)param_1[0x7e] != '\0') && ((*(byte *)(param_1 + 0x11) & 1) == 0)) {
    nIndex = -0x10;
    hWnd = (HWND)FUN_004349e0(param_1);
    uVar1 = GetWindowLongA(hWnd,nIndex);
    param_3 = extraout_ECX;
    if ((uVar1 & 4) == 0) {
      FUN_0042677c(param_1);
      param_3 = extraout_ECX_00;
    }
  }
  TWinControl_dyn_b01a(param_1,param_2,param_3);
  return;
}


