
/* ==== TTabStrings.vmt_040 @ 00484290 ==== 
 * signature: undefined __register TTabStrings.vmt_040(int param_1)
 * body: 00484290-004842f3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_040(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  lParam = 0;
  wParam = 0;
  Msg = 0x1309;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8b0,(int *)&local_8);
    FUN_00484278(local_8);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004842fb;
  pcStack_14 = (code *)0x4842f3;
  FUN_00403c5c((int *)&local_8);
  return;
}


