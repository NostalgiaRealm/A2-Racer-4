
/* ==== TComboBoxStrings.vmt_014 @ 00427440 ==== 
 * signature: undefined __register TComboBoxStrings.vmt_014(int param_1)
 * body: 00427440-0042745b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_014(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x146;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


