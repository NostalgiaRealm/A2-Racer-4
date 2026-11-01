
/* ==== FUN_0042658c @ 0042658c ==== 
 * signature: undefined __register FUN_0042658c(int * param_1, byte param_2)
 * body: 0042658c-004265c1
 */

void FUN_0042658c(int *param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    lParam = 0;
    wParam = (uint)param_2;
    Msg = 0xb9;
    hWnd = (HWND)FUN_004349e0(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
    return;
  }
  *(byte *)((int)param_1 + 0x1fd) = param_2;
  return;
}


