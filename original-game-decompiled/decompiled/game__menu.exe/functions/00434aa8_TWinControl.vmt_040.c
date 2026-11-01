
/* ==== TWinControl.vmt_040 @ 00434aa8 ==== 
 * signature: undefined __register TWinControl.vmt_040(int * param_1, LPRECT param_2)
 * body: 00434aa8-00434abe
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_040(int *param_1,LPRECT param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)FUN_004349e0(param_1);
  GetClientRect(hWnd,param_2);
  return;
}


