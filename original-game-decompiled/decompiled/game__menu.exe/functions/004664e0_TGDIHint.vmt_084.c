
/* ==== TGDIHint.vmt_084 @ 004664e0 ==== 
 * signature: undefined TGDIHint.vmt_084(void)
 * body: 004664e0-004666af;004666b7-0046677e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDIHint_vmt_084(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  tagRECT *lprc;
  undefined4 uStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  undefined *puStack_30;
  int aiStack_2c [4];
  tagRECT tStack_1c;
  int *piStack_c;
  int *piStack_8;
  
  pcStack_3c = (code *)&stack0xfffffffc;
  puStack_30 = (undefined *)0x0;
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  piVar9 = (int *)0x0;
  pcVar1 = (code *)&stack0xfffffffc;
  piStack_8 = param_1;
  if (param_1[0x4a] != 0) {
    piVar9 = FUN_00466814((int)param_1);
    pcVar1 = pcStack_3c;
  }
  pcStack_3c = pcVar1;
  (**(code **)(*piStack_8 + 0x40))(piStack_8,&tStack_1c);
  if (piVar9 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar9 + 0x1c))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar9 + 0x28))();
      if ((cVar2 != '\0') || (*(char *)(piStack_8[0x4a] + 0x5c) != '\0')) {
        piStack_c = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX);
        uVar11 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffb0;
        uVar6 = FUN_00457194(piStack_c,piVar9[0x23],piVar9[0x10],0x20);
        iVar12 = tStack_1c.bottom - tStack_1c.top;
        if (SBORROW4(tStack_1c.bottom,tStack_1c.top)) {
          thunk_FUN_00402808(uVar6);
          iVar12 = extraout_EDX;
        }
        iVar3 = FUN_00420cac(piVar9[0x10],iVar12);
        piVar5 = aiStack_2c;
        iVar12 = tStack_1c.right - tStack_1c.left;
        if (SBORROW4(tStack_1c.right,tStack_1c.left)) {
          thunk_FUN_00402808((uint)piVar5);
          iVar12 = extraout_EDX_00;
        }
        iVar12 = FUN_00420cac(piVar9[0x23],iVar12);
        FUN_0040f804(tStack_1c.left,tStack_1c.top,iVar12,piVar5,iVar3);
        piVar5 = aiStack_2c;
        piVar4 = (int *)FUN_00456800((int)piStack_c,extraout_EDX_01,extraout_ECX_00);
        FUN_00418f14(piVar4,aiStack_2c,(int *)piStack_8[0x48],piVar5);
        cVar2 = FUN_00454850((int)piStack_c,piVar9,*(char *)(piStack_8[0x4a] + 0x5c),
                             *(char *)(piStack_8[0x4a] + 0x5d));
        uVar7 = extraout_ECX_01;
        uVar8 = extraout_EDX_02;
        if (cVar2 == '\0') {
          piVar5 = (int *)FUN_00456800((int)piStack_c,extraout_EDX_02,extraout_ECX_01);
          FUN_00418f9c(piVar5,0,0,piVar9);
          uVar7 = extraout_ECX_02;
          uVar8 = extraout_EDX_03;
        }
        piVar9 = aiStack_2c;
        piVar5 = (int *)FUN_00456800((int)piStack_c,uVar8,uVar7);
        FUN_00418f14((int *)piStack_8[0x48],aiStack_2c,piVar5,piVar9);
        *in_FS_OFFSET = uVar11;
        FUN_0040c968(&piStack_c);
        return;
      }
      FUN_00418f9c((int *)piStack_8[0x48],0,0,piVar9);
      goto LAB_004666ca;
    }
  }
  piVar9 = (int *)FUN_00467d48(piStack_8[0x4a],5);
  cVar2 = (**(code **)(*piVar9 + 0x1c))();
  if (cVar2 == '\0') {
    FUN_00418f9c((int *)piStack_8[0x48],0,0,piVar9);
  }
  else {
    TBrush_set_Color(*(int **)(piStack_8[0x48] + 0x14),DAT_004ab068);
    FUN_004191b8((int *)piStack_8[0x48],tStack_1c.left,tStack_1c.top,tStack_1c.bottom,
                 tStack_1c.right);
  }
LAB_004666ca:
  TCanvas_set_Font(piStack_8[0x48]);
  TBrush_set_Color(*(int **)(piStack_8[0x48] + 0x14),
                   *(undefined4 *)(*(int *)(piStack_8[0x48] + 0xc) + 0x18));
  uVar6 = TBrush_set_Style(*(int **)(piStack_8[0x48] + 0x14),'\x01');
  bVar10 = SCARRY4(tStack_1c.left,2);
  tStack_1c.left = tStack_1c.left + 2;
  if (bVar10) {
    uVar6 = thunk_FUN_00402808(uVar6);
  }
  bVar10 = SCARRY4(tStack_1c.top,2);
  tStack_1c.top = tStack_1c.top + 2;
  if (bVar10) {
    thunk_FUN_00402808(uVar6);
  }
  uVar6 = FUN_004306a8((int)piStack_8);
  uVar6 = uVar6 | 0x810;
  if ((int)uVar6 < 0) {
    uVar6 = thunk_FUN_00402808(uVar6);
  }
  lprc = &tStack_1c;
  iVar12 = -1;
  TGroupBox_get_Caption((int)piStack_8,(int *)&puStack_30);
  lpchText = FUN_004040a0(puStack_30);
  hdc = (HDC)FUN_004194d8((int *)piStack_8[0x48]);
  DrawTextA(hdc,lpchText,iVar12,lprc,uVar6);
  *in_FS_OFFSET = uStack_44;
  pcStack_3c = FUN_00466786;
  pcStack_40 = (code *)0x46677e;
  FUN_00403c5c((int *)&puStack_30);
  return;
}


