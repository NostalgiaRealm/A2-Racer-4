
/* ==== TComboBoxStrings.vmt_044 @ 00427640 ==== 
 * signature: undefined TComboBoxStrings.vmt_044(void)
 * body: 00427640-0042765e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_044(int param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x144;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}


