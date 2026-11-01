
/* ==== TCustomEdit.vmt_0bc @ 00426688 ==== 
 * signature: undefined TCustomEdit.vmt_0bc(void)
 * body: 00426688-004266aa
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomEdit_vmt_0bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  UINT Msg;
  undefined4 *wParam;
  LPARAM lParam;
  undefined4 uStack_8;
  
  wParam = &uStack_8;
  lParam = 0;
  Msg = 0xb0;
  uStack_8 = param_3;
  hWnd = (HWND)FUN_004349e0(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,lParam);
  return uStack_8;
}


