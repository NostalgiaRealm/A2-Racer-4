
/* ==== TComboBoxStrings.vmt_018 @ 004274a0 ==== 
 * signature: undefined TComboBoxStrings.vmt_018(void)
 * body: 004274a0-00427505
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_018(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  byte *pbStack_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  pbStack_8 = (byte *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = 0;
  Msg = 0x150;
  wParam = param_2;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == -1) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab930,(int *)&pbStack_8);
    FUN_004115b0(param_1,pbStack_8,param_2);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0042750d;
  pcStack_1c = (code *)0x427505;
  FUN_00403c5c((int *)&pbStack_8);
  return;
}


