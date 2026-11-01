
/* ==== TComboBoxStrings.vmt_040 @ 00427660 ==== 
 * signature: undefined __register TComboBoxStrings.vmt_040(int param_1)
 * body: 00427660-004276c3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_040(int param_1)

{
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  uint *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  TGroupBox_get_Caption(*(int *)(param_1 + 0xc),(int *)&local_8);
  lParam = 0;
  wParam = 0;
  Msg = 0x14b;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  TGroupBox_set_Caption(*(int *)(param_1 + 0xc),local_8);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x80))();
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004276cb;
  pcStack_14 = (code *)0x4276c3;
  FUN_00403c5c((int *)&local_8);
  return;
}


