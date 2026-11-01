
/* ==== FUN_00477314 @ 00477314 ==== 
 * signature: undefined FUN_00477314(void)
 * body: 00477314-004775a0
 */

void FUN_00477314(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR lpchText;
  HDC pHVar4;
  LPCSTR pCVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar7;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined *extraout_EDX;
  undefined *extraout_EDX_00;
  undefined *puVar8;
  tagRECT *ptVar9;
  ushort uVar10;
  LONG *pLVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined1 *puStack_4c;
  RECT RStack_3c;
  LONG aLStack_2c [3];
  int iStack_20;
  tagRECT tStack_1c;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  bVar12 = 0;
  puStack_4c = &stack0xfffffffc;
  puStack_c = (undefined *)0x0;
  puStack_50 = &UNK_004775a1;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  piVar1 = (int *)param_1[0x48];
  uStack_8 = param_2;
  uVar2 = TLabel_get_Transparent((int)param_1);
  if ((char)uVar2 == '\0') {
    TBrush_set_Color((int *)piVar1[5],param_1[0x18]);
    TBrush_set_Style((int *)piVar1[5],'\0');
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_3c);
    FUN_0041907c(piVar1,&RStack_3c);
  }
  TBrush_set_Style((int *)piVar1[5],'\x01');
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_1c);
  uVar10 = *(ushort *)((uint)*(byte *)((int)param_1 + 0x12f) * 2 + 0x4ab470) | 0x40 |
           *(ushort *)((uint)*(byte *)(param_1 + 0x4b) * 2 + 0x4ab468);
  uVar2 = (uint)uVar10;
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    ptVar9 = &tStack_1c;
    pLVar11 = aLStack_2c;
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pLVar11 = ptVar9->left;
      ptVar9 = (tagRECT *)((int)ptVar9 + ((uint)bVar12 * -2 + 1) * 4);
      pLVar11 = pLVar11 + (uint)bVar12 * -2 + 1;
    }
    FUN_00403178(param_1,aLStack_2c,uVar2 | 0x400);
    if (*(char *)((int)param_1 + 0x12e) == '\x02') {
      uVar3 = param_1[0xf] - iStack_20;
      if (SBORROW4(param_1[0xf],iStack_20)) {
        uVar3 = thunk_FUN_00402808(uVar3);
      }
      OffsetRect(&tStack_1c,0,uVar3);
    }
    else {
      uVar3 = param_1[0xf] - iStack_20;
      if (SBORROW4(param_1[0xf],iStack_20)) {
        uVar3 = thunk_FUN_00402808(uVar3);
      }
      iVar6 = (int)uVar3 >> 1;
      if (iVar6 < 0) {
        iVar6 = iVar6 + (uint)((uVar3 & 1) != 0);
      }
      OffsetRect(&tStack_1c,0,iVar6);
    }
  }
  (**(code **)(*param_1 + 0x88))(param_1,&puStack_c);
  uVar7 = extraout_ECX;
  if ((uVar10 & 0x400) == 0) goto LAB_00477485;
  if (puStack_c != (undefined *)0x0) {
    if ((char)param_1[0x4c] == '\0') goto LAB_00477485;
    iVar6 = 0;
    puVar8 = puStack_c;
    if (*(int *)(puStack_c + -4) == 0) {
      iVar6 = thunk_FUN_00402808(0);
      uVar7 = extraout_ECX_00;
      puVar8 = extraout_EDX;
    }
    if (puVar8[iVar6] != '&') goto LAB_00477485;
    iVar6 = 1;
    puVar8 = puStack_c;
    if (*(uint *)(puStack_c + -4) < 2) {
      iVar6 = thunk_FUN_00402808(1);
      uVar7 = extraout_ECX_01;
      puVar8 = extraout_EDX_00;
    }
    if (puVar8[iVar6] != '\0') goto LAB_00477485;
  }
  FUN_00403ee4((int *)&puStack_c,(undefined4 *)&UNK_004775b8);
  uVar7 = extraout_ECX_02;
LAB_00477485:
  if ((char)param_1[0x4c] == '\0') {
    uVar2 = uVar2 | 0x800;
  }
  uVar2 = FUN_00430668(param_1,uVar2,uVar7);
  TCanvas_set_Font(param_1[0x48]);
  uVar3 = (**(code **)(*param_1 + 0x4c))();
  if ((char)uVar3 == '\0') {
    OffsetRect(&tStack_1c,1,1);
    uVar3 = TFont_set_Color(*(int **)(param_1[0x48] + 0xc),-0x7fffffec,extraout_ECX_03);
    if ((int)uVar2 < 0) {
      thunk_FUN_00402808(uVar3);
    }
    ptVar9 = &tStack_1c;
    uVar3 = uVar2;
    iVar6 = FUN_00403edc((int)puStack_c);
    lpchText = FUN_004040a0(puStack_c);
    pCVar5 = lpchText;
    pHVar4 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar5,iVar6,ptVar9,uVar3);
    OffsetRect(&tStack_1c,-1,-1);
    uVar3 = TFont_set_Color(*(int **)(param_1[0x48] + 0xc),-0x7ffffff0,extraout_ECX_04);
    if ((int)uVar2 < 0) {
      thunk_FUN_00402808(uVar3);
    }
    ptVar9 = &tStack_1c;
    iVar6 = FUN_00403edc((int)puStack_c);
    pHVar4 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar4,lpchText,iVar6,ptVar9,uVar2);
  }
  else {
    if ((int)uVar2 < 0) {
      thunk_FUN_00402808(uVar3);
    }
    ptVar9 = &tStack_1c;
    iVar6 = FUN_00403edc((int)puStack_c);
    pCVar5 = FUN_004040a0(puStack_c);
    pHVar4 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar4,pCVar5,iVar6,ptVar9,uVar2);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &UNK_004775a8;
  puStack_50 = (undefined *)0x4775a0;
  FUN_00403c5c((int *)&puStack_c);
  return;
}


