
/* ==== FUN_00485054 @ 00485054 ==== 
 * signature: undefined __register FUN_00485054(int * param_1)
 * body: 00485054-0048507a
 */

void FUN_00485054(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  
  lParam = param_1[0x85];
  wParam = 0;
  Msg = 0x1329;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_00485014(param_1);
  return;
}


