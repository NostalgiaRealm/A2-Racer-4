
/* ==== TCustomCheckBox.vmt_098 @ 00428e08 ==== 
 * signature: undefined TCustomCheckBox.vmt_098(void)
 * body: 00428e08-00428e30
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomCheckBox_vmt_098(int *param_1)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  TWinControl_vmt_098(param_1);
  lParam = 0;
  wParam = (uint)*(byte *)((int)param_1 + 0x1fa);
  Msg = 0xf1;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


