
/* ==== TCustomEdit.vmt_0b8 @ 004266cc ==== 
 * signature: undefined TCustomEdit.vmt_0b8(void)
 * body: 004266cc-004266f8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TCustomEdit_vmt_0b8(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  int *wParam;
  int *lParam;
  int iStack_c;
  int iStack_8;
  
  wParam = &iStack_c;
  lParam = &iStack_8;
  Msg = 0xb0;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
  return iStack_8 - iStack_c;
}


