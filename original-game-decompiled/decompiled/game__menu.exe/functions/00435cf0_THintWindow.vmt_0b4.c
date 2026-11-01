
/* ==== THintWindow.vmt_0b4 @ 00435cf0 ==== 
 * signature: undefined THintWindow.vmt_0b4(void)
 * body: 00435cf0-00435d7d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THintWindow_vmt_0b4(int *param_1)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
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
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_14);
  tStack_14.left = tStack_14.left + 2;
  tStack_14.top = tStack_14.top + 2;
  TFont_set_Color(*(int **)(param_1[0x7c] + 0xc),-0x7fffffe9,extraout_ECX);
  uVar1 = FUN_004306a8((int)param_1);
  uVar1 = uVar1 | 0x810;
  lprc = &tStack_14;
  cchText = -1;
  TGroupBox_get_Caption((int)param_1,(int *)&puStack_18);
  lpchText = FUN_004040a0(puStack_18);
  hdc = (HDC)FUN_004194d8((int *)param_1[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00435d85;
  pcStack_24 = (code *)0x435d7d;
  FUN_00403c5c((int *)&puStack_18);
  return;
}


