
/* ==== TTabStrings.vmt_030 @ 004847b0 ==== 
 * signature: undefined TTabStrings.vmt_030(void)
 * body: 004847b0-004847f3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_030(int param_1,byte param_2)

{
  int *piVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(piVar1 + 0x86) = param_2;
  lParam = 0;
  wParam = (param_2 ^ 1) & 0x7f;
  Msg = 0xb;
  hWnd = (HWND)FUN_004349e0(piVar1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (param_2 != 1) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
    FUN_00485014(*(int **)(param_1 + 0xc));
  }
  return;
}


