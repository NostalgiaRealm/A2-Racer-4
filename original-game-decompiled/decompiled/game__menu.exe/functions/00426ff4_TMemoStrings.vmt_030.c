
/* ==== TMemoStrings.vmt_030 @ 00426ff4 ==== 
 * signature: undefined TMemoStrings.vmt_030(void)
 * body: 00426ff4-00427042
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMemoStrings_vmt_030(int param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  bVar1 = FUN_00434cdc(*(int *)(param_1 + 0xc));
  if (bVar1) {
    lParam = 0;
    wParam = (param_2 ^ 1) & 0x7f;
    Msg = 0xb;
    hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    SendMessageA(hWnd,Msg,wParam,lParam);
    if (param_2 != 1) {
      FUN_0042f720(*(int *)(param_1 + 0xc),0xb019,0,0);
      FUN_0042ec58(*(int **)(param_1 + 0xc));
    }
  }
  return;
}


