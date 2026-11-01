
/* ==== TCustomEdit.vmt_0c8 @ 004266ac ==== 
 * signature: undefined TCustomEdit.vmt_0c8(void)
 * body: 004266ac-004266c8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_0c8(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM lParam;
  
  Msg = 0xb1;
  lParam = param_2;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}


