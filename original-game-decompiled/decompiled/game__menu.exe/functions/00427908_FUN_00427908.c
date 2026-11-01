
/* ==== FUN_00427908 @ 00427908 ==== 
 * signature: undefined __register FUN_00427908(int * param_1)
 * body: 00427908-00427922
 */

void FUN_00427908(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


