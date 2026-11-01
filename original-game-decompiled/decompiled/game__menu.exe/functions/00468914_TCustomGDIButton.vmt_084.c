
/* ==== TCustomGDIButton.vmt_084 @ 00468914 ==== 
 * signature: undefined TCustomGDIButton.vmt_084(void)
 * body: 00468914-00468c7b;00468c83-00468c9d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_084(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint format;
  uint uVar4;
  LPCSTR pCVar5;
  HDC pHVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar8;
  LONG *pLVar9;
  tagRECT *ptVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  undefined4 uStack_74;
  code *pcStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  code *pcStack_64;
  code *pcStack_60;
  RECT RStack_50;
  undefined *puStack_40;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  undefined *puStack_30;
  int iStack_2c;
  tagRECT tStack_28;
  int aiStack_18 [4];
  int *piStack_8;
  
  bVar11 = 0;
  pcStack_60 = (code *)&stack0xfffffffc;
  puStack_6c = &stack0xfffffffc;
  puStack_40 = (undefined *)0x0;
  iStack_3c = 0;
  puStack_38 = (undefined *)0x0;
  iStack_34 = 0;
  puStack_30 = (undefined *)0x0;
  iStack_2c = 0;
  pcStack_64 = thunk_FUN_004036bc;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  piStack_8 = param_1;
  if ((char)param_1[0x5c] == '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    pcStack_70 = thunk_FUN_004036bc;
    uStack_74 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_74;
    (**(code **)(*param_1 + 200))();
    piVar8 = (int *)0x0;
    if (piStack_8[0x5d] != 0) {
      piVar8 = FUN_00468d10((int)piStack_8);
    }
    (**(code **)(*piStack_8 + 0x40))(piStack_8,aiStack_18);
    if ((piVar8 == (int *)0x0) || (cVar1 = (**(code **)(*piVar8 + 0x1c))(), cVar1 != '\0')) {
      (**(code **)(*piStack_8 + 0xc0))(piStack_8,piStack_8[0x48],aiStack_18);
    }
    else {
      cVar1 = (**(code **)(*piVar8 + 0x28))();
      if ((cVar1 == '\0') && (*(char *)(piStack_8[0x5d] + 0x5c) == '\0')) {
        FUN_00418f9c((int *)piStack_8[0x48],0,0,piVar8);
      }
      else {
        piVar3 = aiStack_18;
        piVar2 = (int *)FUN_00456800(piStack_8[0x5f],extraout_EDX,extraout_ECX);
        FUN_00418f14(piVar2,aiStack_18,(int *)piStack_8[0x48],piVar3);
        cVar1 = FUN_00454850(piStack_8[0x5f],piVar8,*(char *)(piStack_8[0x5d] + 0x5c),
                             *(char *)(piStack_8[0x5d] + 0x5d));
        if (cVar1 == '\0') {
          piVar3 = (int *)FUN_00456800(piStack_8[0x5f],extraout_EDX_00,extraout_ECX_00);
          FUN_00418f9c(piVar3,0,0,piVar8);
        }
        FUN_00418f9c((int *)piStack_8[0x48],0,0,(int *)piStack_8[0x5f]);
      }
    }
    if (piStack_8[0x5d] == 0) {
      TCanvas_set_Font(piStack_8[0x48]);
      format = 0x25;
      piVar8 = aiStack_18;
      ptVar10 = &tStack_28;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->left = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        ptVar10 = (tagRECT *)((int)ptVar10 + ((uint)bVar11 * -2 + 1) * 4);
      }
    }
    else {
      TCanvas_set_Font(piStack_8[0x48]);
      format = FUN_00467f70(piStack_8[0x5d]);
      pLVar9 = (LONG *)(*(int *)(piStack_8[0x5d] + 0x68) + 0x10);
      ptVar10 = &tStack_28;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->left = *pLVar9;
        pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
        ptVar10 = (tagRECT *)((int)ptVar10 + ((uint)bVar11 * -2 + 1) * 4);
      }
      uVar4 = tStack_28.right - tStack_28.left;
      if (SBORROW4(tStack_28.right,tStack_28.left)) {
        uVar4 = thunk_FUN_00402808(uVar4);
      }
      if (((int)uVar4 < 1) || ((int)uVar4 < 1)) {
        piVar8 = aiStack_18;
        ptVar10 = &tStack_28;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          ptVar10->left = *piVar8;
          piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
          ptVar10 = (tagRECT *)((int)ptVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
      }
    }
    TBrush_set_Style(*(int **)(piStack_8[0x48] + 0x14),'\x01');
    cVar1 = (**(code **)(*piStack_8 + 0x4c))();
    if (cVar1 == '\0') {
      OffsetRect(&tStack_28,1,1);
      TFont_set_Color(*(int **)(piStack_8[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
      ptVar10 = &tStack_28;
      uVar4 = format;
      TGroupBox_get_Caption((int)piStack_8,&iStack_2c);
      iVar7 = FUN_00403edc(iStack_2c);
      TGroupBox_get_Caption((int)piStack_8,(int *)&puStack_30);
      pCVar5 = FUN_004040a0(puStack_30);
      pHVar6 = (HDC)FUN_004194d8((int *)piStack_8[0x48]);
      DrawTextA(pHVar6,pCVar5,iVar7,ptVar10,uVar4);
      OffsetRect(&tStack_28,-1,-1);
      TFont_set_Color(*(int **)(piStack_8[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
      ptVar10 = &tStack_28;
      TGroupBox_get_Caption((int)piStack_8,&iStack_34);
      iVar7 = FUN_00403edc(iStack_34);
      TGroupBox_get_Caption((int)piStack_8,(int *)&puStack_38);
      pCVar5 = FUN_004040a0(puStack_38);
      pHVar6 = (HDC)FUN_004194d8((int *)piStack_8[0x48]);
      DrawTextA(pHVar6,pCVar5,iVar7,ptVar10,format);
    }
    else {
      ptVar10 = &tStack_28;
      TGroupBox_get_Caption((int)piStack_8,&iStack_3c);
      iVar7 = FUN_00403edc(iStack_3c);
      TGroupBox_get_Caption((int)piStack_8,(int *)&puStack_40);
      pCVar5 = FUN_004040a0(puStack_40);
      pHVar6 = (HDC)FUN_004194d8((int *)piStack_8[0x48]);
      DrawTextA(pHVar6,pCVar5,iVar7,ptVar10,format);
    }
    if ((*(byte *)(piStack_8 + 8) & 0x10) != 0) {
      TBrush_set_Style(*(int **)(piStack_8[0x48] + 0x14),'\0');
      (**(code **)(*piStack_8 + 0x40))(piStack_8,&RStack_50);
      FUN_00419048((int *)piStack_8[0x48],&RStack_50);
    }
    *in_FS_OFFSET = uStack_74;
    *(undefined1 *)(piStack_8 + 0x5c) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_68;
  pcStack_60 = FUN_00468ca5;
  pcStack_64 = (code *)0x468c9d;
  FUN_00403c80((int *)&puStack_40,6);
  return;
}


