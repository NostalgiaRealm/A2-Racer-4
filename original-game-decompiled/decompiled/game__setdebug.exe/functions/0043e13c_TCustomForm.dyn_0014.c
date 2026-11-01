
/* ==== TCustomForm.dyn_0014 @ 0043e13c ==== 
 * signature: undefined TCustomForm.dyn_0014(void)
 * body: 0043e13c-0043e170
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0014(int *param_1,undefined4 *param_2)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = (HWND)FUN_0042a8b4(param_1);
  BVar1 = IsIconic(hWnd);
  if (BVar1 == 0) {
    TWinControl_dyn_0014(param_1,param_2);
    return;
  }
  *param_2 = 0x27;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


