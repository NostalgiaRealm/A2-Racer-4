
/* ==== TForm.set_WindowState @ 0043d024 ==== 
 * signature: undefined __register TForm.set_WindowState(int * param_1, byte param_2)
 * body: 0043d024-0043d062
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_WindowState(int *param_1,byte param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  if (((param_2 != *(byte *)((int)param_1 + 0x213)) &&
      (*(byte *)((int)param_1 + 0x213) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) &&
     ((char)param_1[0x5a] != '\0')) {
    nCmdShow = *(int *)(&DAT_004468f0 + (uint)param_2 * 4);
    hWnd = (HWND)FUN_0042a8b4(param_1);
    ShowWindow(hWnd,nCmdShow);
  }
  return;
}


