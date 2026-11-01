
/* ==== FUN_0042677c @ 0042677c ==== 
 * signature: undefined __register FUN_0042677c(int * param_1)
 * body: 0042677c-00426796
 */

void FUN_0042677c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = -1;
  wParam = 0;
  Msg = 0xb1;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


