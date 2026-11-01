
/* ==== TCustomComboBox.dyn_0001 @ 00427c3c ==== 
 * signature: undefined TCustomComboBox.dyn_0001(void)
 * body: 00427c3c-00427c5e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomComboBox_dyn_0001(int *param_1)

{
  HWND hWnd;
  LPCSTR lpString;
  
  (**(code **)(*param_1 + -0x10))();
  if (param_1[0x15] != 0) {
    lpString = (LPCSTR)param_1[0x15];
    hWnd = (HWND)FUN_004349e0(param_1);
    SetWindowTextA(hWnd,lpString);
  }
  return;
}


