
/* ==== TComboBox.set_MaxLength @ 00427950 ==== 
 * signature: undefined TComboBox.set_MaxLength(void)
 * body: 00427950-0042798c
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TComboBox_set_MaxLength(int *param_1,WPARAM param_2)

{
  bool bVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 != param_1[0x80]) {
    param_1[0x80] = param_2;
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      lParam = 0;
      Msg = 0x141;
      hWnd = (HWND)FUN_004349e0(param_1);
      SendMessageA(hWnd,Msg,param_2,lParam);
    }
  }
  return;
}


