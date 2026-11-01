
/* ==== TWinControl.vmt_040 @ 0042a97c ==== 
 * signature: undefined __register TWinControl.vmt_040(int * param_1, LPRECT param_2)
 * body: 0042a97c-0042a992
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_040(int *param_1,LPRECT param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)FUN_0042a8b4(param_1);
  GetClientRect(hWnd,param_2);
  return;
}


