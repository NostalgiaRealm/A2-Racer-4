
/* ==== TComboBoxStrings.vmt_00c @ 0042745c ==== 
 * signature: undefined __register TComboBoxStrings.vmt_00c(int param_1, WPARAM param_2, int * param_3)
 * body: 0042745c-0042749d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_00c(int param_1,WPARAM param_2,int *param_3)

{
  HWND hWnd;
  uint uVar1;
  UINT Msg;
  int *lParam;
  int aiStack_100c [1024];
  
  lParam = aiStack_100c;
  Msg = 0x148;
  aiStack_100c[0] = param_1;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  uVar1 = SendMessageA(hWnd,Msg,param_2,(LPARAM)lParam);
  if (uVar1 == 0xffffffff) {
    uVar1 = 0;
  }
  FUN_00403d44(param_3,aiStack_100c,uVar1);
  return;
}


