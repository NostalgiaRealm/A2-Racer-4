
/* ==== FUN_00426778 @ 00426778 ==== 
 * signature: undefined FUN_00426778(void)
 * body: 00426778-0042677b
 */

void FUN_00426778(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  lParam = -1;
  wParam = 0;
  Msg = 0xb1;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


