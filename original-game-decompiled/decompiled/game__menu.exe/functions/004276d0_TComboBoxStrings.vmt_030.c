
/* ==== TComboBoxStrings.vmt_030 @ 004276d0 ==== 
 * signature: undefined TComboBoxStrings.vmt_030(void)
 * body: 004276d0-00427701
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_030(int param_1,byte param_2)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  wParam = (param_2 ^ 1) & 0x7f;
  Msg = 0xb;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (param_2 != 1) {
    FUN_0042ec58(*(int **)(param_1 + 0xc));
  }
  return;
}


