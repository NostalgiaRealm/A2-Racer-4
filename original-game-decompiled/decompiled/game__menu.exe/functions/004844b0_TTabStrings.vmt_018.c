
/* ==== TTabStrings.vmt_018 @ 004844b0 ==== 
 * signature: undefined __register TTabStrings.vmt_018(int param_1, WPARAM param_2)
 * body: 004844b0-0048453f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_018(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  undefined4 local_20 [7];
  
  pcStack_3c = (code *)&stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_20[0] = 8;
  lParam = local_20;
  Msg = 0x1305;
  wParam = param_2;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_24;
    FUN_00405808((undefined4 *)PTR_PTR_004ab85c,(int *)&local_28);
    local_2c = 0;
    local_30 = param_2;
    FUN_00409254(local_28,&local_30,0,(int *)ppuVar2);
    FUN_00484278(local_24);
  }
  *in_FS_OFFSET = uStack_44;
  pcStack_3c = FUN_00484547;
  pcStack_40 = (code *)0x48453f;
  FUN_00403c80((int *)&local_28,2);
  return;
}


