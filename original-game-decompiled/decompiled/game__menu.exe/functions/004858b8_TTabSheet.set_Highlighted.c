
/* ==== TTabSheet.set_Highlighted @ 004858b8 ==== 
 * signature: undefined __register TTabSheet.set_Highlighted(int param_1, byte param_2)
 * body: 004858b8-004858f6
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TTabSheet_set_Highlighted(int param_1,byte param_2)

{
  uint lParam;
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  
  if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
    lParam = FUN_00407070((uint)param_2,0);
    wParam = FUN_004855fc(param_1);
    Msg = 0x1333;
    hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 500));
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  *(byte *)(param_1 + 0x1fa) = param_2;
  return;
}


