
/* ==== TTabStrings.vmt_00c @ 0048439c ==== 
 * signature: undefined TTabStrings.vmt_00c(void)
 * body: 0048439c-00484483
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_00c(int param_1,WPARAM param_2,int *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_1048;
  code *pcStack_1044;
  code *pcStack_1040;
  WPARAM WStack_1030;
  undefined1 uStack_102c;
  byte *pbStack_1028;
  undefined4 *puStack_1024;
  char acStack_1020 [28];
  int iStack_1004;
  uint auStack_20 [3];
  char *pcStack_14;
  undefined4 uStack_10;
  
  pcStack_1040 = (code *)&stack0xfffffffc;
  puStack_1024 = (undefined4 *)0x0;
  pbStack_1028 = (byte *)0x0;
  pcStack_1044 = thunk_FUN_004036bc;
  uStack_1048 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1048;
  iStack_1004 = param_1;
  uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0xc));
  auStack_20[0] = *(uint *)(&DAT_004ab48c + (uVar1 & 0x7f) * 4) | 1;
  pcStack_14 = acStack_1020;
  uStack_10 = 0x1000;
  lParam = auStack_20;
  Msg = 0x1305;
  wParam = param_2;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 == 0) {
    ppuVar3 = &puStack_1024;
    FUN_00405808((undefined4 *)PTR_PTR_004ab830,(int *)&pbStack_1028);
    uStack_102c = 0;
    WStack_1030 = param_2;
    FUN_00409254(pbStack_1028,&WStack_1030,0,(int *)ppuVar3);
    FUN_00484278(puStack_1024);
  }
  FUN_00403e8c(param_3,acStack_1020,0x1000);
  *in_FS_OFFSET = uStack_1048;
  pcStack_1040 = FUN_0048448b;
  pcStack_1044 = (code *)0x484483;
  FUN_00403c80((int *)&pbStack_1028,2);
  return;
}


