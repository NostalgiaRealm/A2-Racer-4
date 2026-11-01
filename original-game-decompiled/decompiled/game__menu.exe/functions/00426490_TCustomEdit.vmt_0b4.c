
/* ==== TCustomEdit.vmt_0b4 @ 00426490 ==== 
 * signature: undefined TCustomEdit.vmt_0b4(void)
 * body: 00426490-004264ad
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_0b4(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0xc5;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}


