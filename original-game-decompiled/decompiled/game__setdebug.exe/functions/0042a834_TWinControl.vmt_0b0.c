
/* ==== TWinControl.vmt_0b0 @ 0042a834 ==== 
 * signature: undefined TWinControl.vmt_0b0(void)
 * body: 0042a834-0042a86b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_0b0(int *param_1)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0043d9ac(piVar1,param_1,extraout_ECX);
    return;
  }
  if (param_1[0x59] == 0) {
    FUN_00439edc(param_1);
  }
  else {
    hWnd = (HWND)FUN_0042a8b4(param_1);
    SetFocus(hWnd);
  }
  return;
}


