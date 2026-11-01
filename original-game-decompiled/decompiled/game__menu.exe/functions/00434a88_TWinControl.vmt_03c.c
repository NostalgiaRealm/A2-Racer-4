
/* ==== TWinControl.vmt_03c @ 00434a88 ==== 
 * signature: undefined TWinControl.vmt_03c(void)
 * body: 00434a88-00434aa7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_03c(int *param_1,LPPOINT param_2)

{
  HWND hWnd;
  
  param_2->x = 0;
  param_2->y = 0;
  hWnd = (HWND)FUN_004349e0(param_1);
  ClientToScreen(hWnd,param_2);
  return;
}


