
/* ==== FUN_00484b18 @ 00484b18 ==== 
 * signature: undefined __register FUN_00484b18(int * param_1, int param_2)
 * body: 00484b18-00484b42
 */

void FUN_00484b18(int *param_1,int param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  wParam = 0;
  Msg = 0x1328;
  lParam = param_2;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  return;
}


