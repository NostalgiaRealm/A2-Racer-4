
/* ==== FUN_00427924 @ 00427924 ==== 
 * signature: undefined __register FUN_00427924(int * param_1, WPARAM param_2)
 * body: 00427924-0042794c
 */

void FUN_00427924(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  WVar1 = FUN_00427908(param_1);
  if (param_2 != WVar1) {
    lParam = 0;
    Msg = 0x14e;
    hWnd = (HWND)FUN_004349e0(param_1);
    SendMessageA(hWnd,Msg,param_2,lParam);
  }
  return;
}


