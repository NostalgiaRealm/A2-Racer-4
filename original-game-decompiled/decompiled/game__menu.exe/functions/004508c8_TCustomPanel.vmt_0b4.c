
/* ==== TCustomPanel.vmt_0b4 @ 004508c8 ==== 
 * signature: undefined TCustomPanel.vmt_0b4(void)
 * body: 004508c8-00450a10
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomPanel_vmt_0b4(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined *puStack_20;
  tagRECT tStack_1c;
  undefined4 uStack_8;
  
  pcStack_30 = (code *)&stack0xfffffffc;
  puStack_20 = (undefined *)0x0;
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_1c);
  if (*(char *)((int)param_1 + 0x1fa) != '\0') {
    FUN_00450890(*(char *)((int)param_1 + 0x1fa),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    FUN_0044f9ac(param_1[0x7c],&tStack_1c,uStack_8,param_1[0x7f]);
  }
  FUN_0044f9ac(param_1[0x7c],&tStack_1c,param_1[0x18],param_1[0x80]);
  if (*(char *)((int)param_1 + 0x1f9) != '\0') {
    FUN_00450890(*(char *)((int)param_1 + 0x1f9),extraout_EDX_00,extraout_ECX_00,
                 (int)&stack0xfffffffc);
    FUN_0044f9ac(param_1[0x7c],&tStack_1c,uStack_8,param_1[0x7f]);
  }
  piVar1 = (int *)param_1[0x7c];
  TBrush_set_Color((int *)piVar1[5],param_1[0x18]);
  FUN_0041907c(piVar1,&tStack_1c);
  TBrush_set_Style((int *)piVar1[5],'\x01');
  TCanvas_set_Font((int)piVar1);
  LVar2 = FUN_00419354(piVar1,FUN_00450a28);
  uVar3 = (tStack_1c.bottom + tStack_1c.top) - LVar2;
  tStack_1c.top = (int)uVar3 >> 1;
  if (tStack_1c.top < 0) {
    tStack_1c.top = tStack_1c.top + (uint)((uVar3 & 1) != 0);
  }
  tStack_1c.bottom = LVar2 + tStack_1c.top;
  uVar3 = FUN_00430668(param_1,*(uint *)(&DAT_004aaa74 + (uint)*(byte *)((int)param_1 + 0x207) * 4)
                               | 0x44,extraout_ECX_01);
  lprc = &tStack_1c;
  cchText = -1;
  TGroupBox_get_Caption((int)param_1,(int *)&puStack_20);
  lpchText = FUN_004040a0(puStack_20);
  hdc = (HDC)FUN_004194d8(piVar1);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar3);
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_00450a18;
  pcStack_34 = (code *)0x450a10;
  FUN_00403c5c((int *)&puStack_20);
  return;
}


