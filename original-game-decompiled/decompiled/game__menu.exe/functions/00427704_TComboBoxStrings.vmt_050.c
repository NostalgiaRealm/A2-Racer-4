
/* ==== TComboBoxStrings.vmt_050 @ 00427704 ==== 
 * signature: undefined TComboBoxStrings.vmt_050(void)
 * body: 00427704-00427729
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_050(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  lParam = FUN_004040a0(param_2);
  wParam = 0xffffffff;
  Msg = 0x158;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  return;
}


