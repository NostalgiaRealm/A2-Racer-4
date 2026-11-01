
/* ==== FUN_00484e98 @ 00484e98 ==== 
 * signature: undefined __register FUN_00484e98(int * param_1, WPARAM param_2)
 * body: 00484e98-00484eb5
 */

void FUN_00484e98(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x130c;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}


