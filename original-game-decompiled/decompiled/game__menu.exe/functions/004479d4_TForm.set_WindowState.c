
/* ==== TForm.set_WindowState @ 004479d4 ==== 
 * signature: undefined __register TForm.set_WindowState(int * param_1, byte param_2)
 * body: 004479d4-00447a12
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
    nCmdShow = *(int *)(&DAT_004aa9c4 + (uint)param_2 * 4);
    hWnd = (HWND)FUN_004349e0(param_1);
    ShowWindow(hWnd,nCmdShow);
  }
  return;
}


