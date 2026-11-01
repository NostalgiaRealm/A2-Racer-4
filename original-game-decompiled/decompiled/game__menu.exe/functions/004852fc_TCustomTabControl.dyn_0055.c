
/* ==== TCustomTabControl.dyn_0055 @ 004852fc ==== 
 * signature: undefined TCustomTabControl.dyn_0055(void)
 * body: 004852fc-0048531f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_0055(int *param_1,UINT *param_2)

{
  HWND hWnd;
  UINT UVar1;
  UINT Msg;
  UINT wParam;
  
  UVar1 = param_2[2];
  wParam = param_2[1];
  Msg = *param_2;
  hWnd = (HWND)FUN_004349e0(param_1);
  UVar1 = DefWindowProcA(hWnd,Msg,wParam,UVar1);
  param_2[3] = UVar1;
  return;
}


