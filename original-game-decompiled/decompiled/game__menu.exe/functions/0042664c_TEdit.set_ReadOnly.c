
/* ==== TEdit.set_ReadOnly @ 0042664c ==== 
 * signature: undefined TEdit.set_ReadOnly(void)
 * body: 0042664c-00426686
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_ReadOnly(int *param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(byte *)((int)param_1 + 0x1f6)) {
    *(byte *)((int)param_1 + 0x1f6) = param_2;
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      lParam = 0;
      wParam = (uint)param_2;
      Msg = 0xcf;
      hWnd = (HWND)FUN_004349e0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}


