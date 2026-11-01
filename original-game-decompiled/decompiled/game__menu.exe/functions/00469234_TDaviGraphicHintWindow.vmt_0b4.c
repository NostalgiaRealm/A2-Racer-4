
/* ==== TDaviGraphicHintWindow.vmt_0b4 @ 00469234 ==== 
 * signature: undefined TDaviGraphicHintWindow.vmt_0b4(void)
 * body: 00469234-004692e4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicHintWindow_vmt_0b4(int *param_1)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined *puStack_18;
  tagRECT tStack_14;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  puStack_18 = (undefined *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00418f9c((int *)param_1[0x7c],0,0,(int *)param_1[0x80]);
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1,&tStack_14);
  bVar2 = SCARRY4(tStack_14.left,2);
  tStack_14.left = tStack_14.left + 2;
  if (bVar2) {
    thunk_FUN_00402808(uVar1);
  }
  (**(code **)(**(int **)(param_1[0x7c] + 0xc) + 8))(*(int **)(param_1[0x7c] + 0xc),param_1[0x81]);
  uVar1 = FUN_004306a8((int)param_1);
  uVar1 = uVar1 | 0x814;
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  lprc = &tStack_14;
  cchText = -1;
  TGroupBox_get_Caption((int)param_1,(int *)&puStack_18);
  lpchText = FUN_004040a0(puStack_18);
  hdc = (HDC)FUN_004194d8((int *)param_1[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004692ec;
  pcStack_24 = (code *)0x4692e4;
  FUN_00403c5c((int *)&puStack_18);
  return;
}


