
/* ==== FUN_00484b6c @ 00484b6c ==== 
 * signature: undefined __register FUN_00484b6c(int * param_1)
 * body: 00484b6c-00484b86
 */

void FUN_00484b6c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x130b;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


