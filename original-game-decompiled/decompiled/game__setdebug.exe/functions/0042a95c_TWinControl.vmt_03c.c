
/* ==== TWinControl.vmt_03c @ 0042a95c ==== 
 * signature: undefined TWinControl.vmt_03c(void)
 * body: 0042a95c-0042a97b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_03c(int *param_1,LPPOINT param_2)

{
  HWND hWnd;
  
  param_2->x = 0;
  param_2->y = 0;
  hWnd = (HWND)FUN_0042a8b4(param_1);
  ClientToScreen(hWnd,param_2);
  return;
}


