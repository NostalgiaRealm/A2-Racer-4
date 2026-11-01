
/* ==== TTabStrings.vmt_024 @ 00484630 ==== 
 * signature: undefined TTabStrings.vmt_024(void)
 * body: 00484630-004846bf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabStrings_vmt_024(int param_1,WPARAM param_2,undefined4 param_3)

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
  WPARAM WStack_30;
  undefined1 uStack_2c;
  byte *pbStack_28;
  undefined4 *puStack_24;
  undefined4 auStack_20 [6];
  undefined4 uStack_8;
  
  pcStack_3c = (code *)&stack0xfffffffc;
  puStack_24 = (undefined4 *)0x0;
  pbStack_28 = (byte *)0x0;
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  auStack_20[0] = 8;
  lParam = auStack_20;
  Msg = 0x1306;
  wParam = param_2;
  uStack_8 = param_3;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 == 0) {
    ppuVar2 = &puStack_24;
    FUN_00405808((undefined4 *)PTR_PTR_004ab640,(int *)&pbStack_28);
    uStack_2c = 0;
    WStack_30 = param_2;
    FUN_00409254(pbStack_28,&WStack_30,0,(int *)ppuVar2);
    FUN_00484278(puStack_24);
  }
  *in_FS_OFFSET = uStack_44;
  pcStack_3c = FUN_004846c7;
  pcStack_40 = (code *)0x4846bf;
  FUN_00403c80((int *)&pbStack_28,2);
  return;
}


