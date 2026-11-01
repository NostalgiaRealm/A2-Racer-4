
/* ==== TTabStrings.vmt_020 @ 00484550 ==== 
 * signature: undefined __register TTabStrings.vmt_020(int param_1, WPARAM param_2, undefined * param_3)
 * body: 00484550-00484621
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_020(int param_1,WPARAM param_2,undefined *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_50;
  code *pcStack_4c;
  code *pcStack_48;
  undefined *local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  uint local_20 [3];
  undefined *local_14;
  undefined4 local_c;
  
  pcStack_48 = (code *)&stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  pcStack_4c = thunk_FUN_004036bc;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0xc));
  local_20[0] = *(uint *)(&DAT_004ab494 + (uVar1 & 0x7f) * 4) | 3;
  local_14 = FUN_004040a0(param_3);
  local_c = (**(code **)(**(int **)(param_1 + 0xc) + 0xbc))(*(int **)(param_1 + 0xc),param_2);
  lParam = local_20;
  Msg = 0x1306;
  wParam = param_2;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 == 0) {
    ppuVar3 = &local_24;
    FUN_00405808((undefined4 *)PTR_PTR_004ab944,(int *)&local_28);
    local_34 = 0xb;
    local_2c = 0;
    local_38 = param_3;
    local_30 = param_2;
    FUN_00409254(local_28,&local_38,1,(int *)ppuVar3);
    FUN_00484278(local_24);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_50;
  pcStack_48 = FUN_00484629;
  pcStack_4c = (code *)0x484621;
  FUN_00403c80((int *)&local_28,2);
  return;
}


