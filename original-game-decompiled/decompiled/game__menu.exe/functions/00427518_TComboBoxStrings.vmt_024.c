
/* ==== TComboBoxStrings.vmt_024 @ 00427518 ==== 
 * signature: undefined TComboBoxStrings.vmt_024(void)
 * body: 00427518-00427539
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_024(int param_1,WPARAM param_2,LPARAM param_3)

{
  HWND hWnd;
  UINT Msg;
  
  Msg = 0x151;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,param_2,param_3);
  return;
}


