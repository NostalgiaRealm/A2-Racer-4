
/* ==== TWinControl.vmt_0b0 @ 00434960 ==== 
 * signature: undefined TWinControl.vmt_0b0(void)
 * body: 00434960-00434997
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_0b0(int *param_1)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0044835c(piVar1,param_1,extraout_ECX);
    return;
  }
  if (param_1[0x59] == 0) {
    FUN_0044488c(param_1);
  }
  else {
    hWnd = (HWND)FUN_004349e0(param_1);
    SetFocus(hWnd);
  }
  return;
}


