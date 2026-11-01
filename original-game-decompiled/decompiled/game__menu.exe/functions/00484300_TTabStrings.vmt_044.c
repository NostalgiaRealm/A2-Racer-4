
/* ==== TTabStrings.vmt_044 @ 00484300 ==== 
 * signature: undefined __register TTabStrings.vmt_044(int param_1, WPARAM param_2)
 * body: 00484300-0048438b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_044(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  WPARAM local_14;
  undefined1 local_10;
  byte *local_c;
  undefined4 *local_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (byte *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  lParam = 0;
  Msg = 0x1308;
  wParam = param_2;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_8;
    FUN_00405808((undefined4 *)PTR_PTR_004ab880,(int *)&local_c);
    local_10 = 0;
    local_14 = param_2;
    FUN_00409254(local_c,&local_14,0,(int *)ppuVar2);
    FUN_00484278(local_8);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00484393;
  pcStack_24 = (code *)0x48438b;
  FUN_00403c80((int *)&local_c,2);
  return;
}


