
/* ==== FUN_0042789c @ 0042789c ==== 
 * signature: bool __register FUN_0042789c(int * param_1)
 * body: 0042789c-004278bc
 */

bool FUN_0042789c(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x157;
  hWnd = (HWND)FUN_004349e0(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1 != 0;
}


