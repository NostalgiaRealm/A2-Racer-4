
/* ==== FUN_00449d0c @ 00449d0c ==== 
 * signature: undefined __register FUN_00449d0c(int * param_1)
 * body: 00449d0c-00449d26
 */

void FUN_00449d0c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xb021;
  hWnd = (HWND)FUN_004349e0(param_1);
  PostMessageA(hWnd,Msg,wParam,lParam);
  return;
}


