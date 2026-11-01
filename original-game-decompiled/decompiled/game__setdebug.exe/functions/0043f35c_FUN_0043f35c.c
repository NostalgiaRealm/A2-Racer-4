
/* ==== FUN_0043f35c @ 0043f35c ==== 
 * signature: undefined __register FUN_0043f35c(int * param_1)
 * body: 0043f35c-0043f376
 */

void FUN_0043f35c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xb021;
  hWnd = (HWND)FUN_0042a8b4(param_1);
  PostMessageA(hWnd,Msg,wParam,lParam);
  return;
}


