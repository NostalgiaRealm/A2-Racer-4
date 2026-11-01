
/* ==== TTabStrings.vmt_054 @ 004846d0 ==== 
 * signature: undefined TTabStrings.vmt_054(void)
 * body: 004846d0-004847a1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_054(int param_1,WPARAM param_2,undefined *param_3)

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
  undefined *puStack_38;
  undefined1 uStack_34;
  WPARAM WStack_30;
  undefined1 uStack_2c;
  byte *pbStack_28;
  undefined4 *puStack_24;
  uint auStack_20 [3];
  undefined *puStack_14;
  undefined4 uStack_c;
  
  pcStack_48 = (code *)&stack0xfffffffc;
  puStack_24 = (undefined4 *)0x0;
  pbStack_28 = (byte *)0x0;
  pcStack_4c = thunk_FUN_004036bc;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0xc));
  auStack_20[0] = *(uint *)(&DAT_004ab49c + (uVar1 & 0x7f) * 4) | 3;
  puStack_14 = FUN_004040a0(param_3);
  uStack_c = (**(code **)(**(int **)(param_1 + 0xc) + 0xbc))(*(int **)(param_1 + 0xc),param_2);
  lParam = auStack_20;
  Msg = 0x1307;
  wParam = param_2;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 < 0) {
    ppuVar3 = &puStack_24;
    FUN_00405808((undefined4 *)PTR_PTR_004ab944,(int *)&pbStack_28);
    uStack_34 = 0xb;
    uStack_2c = 0;
    puStack_38 = param_3;
    WStack_30 = param_2;
    FUN_00409254(pbStack_28,&puStack_38,1,(int *)ppuVar3);
    FUN_00484278(puStack_24);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_50;
  pcStack_48 = FUN_004847a9;
  pcStack_4c = (code *)0x4847a1;
  FUN_00403c80((int *)&pbStack_28,2);
  return;
}


