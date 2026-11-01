
/* ==== TCustomGDIGraphic.vmt_084 @ 00463d6c ==== 
 * signature: undefined TCustomGDIGraphic.vmt_084(void)
 * body: 00463d6c-00463f1c;00463f24-00463f28
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_084(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  LPCSTR lpchText;
  HDC hdc;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar5;
  UINT format;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  tagRECT tStack_18;
  int *piStack_8;
  
  piVar2 = param_1 + 0x50;
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + 1;
  piStack_8 = param_1;
  if (SCARRY4(iVar3,1)) {
    puStack_20 = (undefined1 *)0x463d87;
    thunk_FUN_00402808((uint)param_1);
  }
  if ((char)piStack_8[0x4a] != '\0') {
    return;
  }
  *(undefined1 *)(piStack_8 + 0x4a) = 1;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x40))(piStack_8,&tStack_18);
  piVar2 = FUN_00463cb4(piStack_8);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x28))();
      if ((cVar1 == '\0') && ((char)piStack_8[0x4f] == '\0')) {
        FUN_00418f9c((int *)piStack_8[0x48],0,0,piVar2);
      }
      else {
        ptVar5 = &tStack_18;
        piVar4 = (int *)FUN_00456800(piStack_8[0x4c],extraout_EDX,extraout_ECX);
        FUN_00418f14(piVar4,&tStack_18.left,(int *)piStack_8[0x48],&ptVar5->left);
        cVar1 = FUN_00454850(piStack_8[0x4c],piVar2,(char)piStack_8[0x4f],
                             *(char *)((int)piStack_8 + 0x13d));
        if (cVar1 == '\0') {
          piVar4 = (int *)FUN_00456800(piStack_8[0x4c],extraout_EDX_00,extraout_ECX_00);
          FUN_00418f9c(piVar4,0,0,piVar2);
        }
        FUN_00418f9c((int *)piStack_8[0x48],0,0,(int *)piStack_8[0x4c]);
      }
      goto LAB_00463ed8;
    }
  }
  if ((*(byte *)(piStack_8 + 8) & 0x10) != 0) {
    TBrush_set_Style(*(int **)(piStack_8[0x48] + 0x14),'\x01');
    format = 0x25;
    ptVar5 = &tStack_18;
    iVar3 = FUN_00403edc(piStack_8[2]);
    lpchText = FUN_004040a0((undefined *)piStack_8[2]);
    hdc = (HDC)FUN_004194d8((int *)piStack_8[0x48]);
    DrawTextA(hdc,lpchText,iVar3,ptVar5,format);
  }
LAB_00463ed8:
  if ((*(byte *)(piStack_8 + 8) & 0x10) != 0) {
    TBrush_set_Style(*(int **)(piStack_8[0x48] + 0x14),'\0');
    FUN_00419048((int *)piStack_8[0x48],&tStack_18);
  }
  *in_FS_OFFSET = uStack_28;
  *(undefined1 *)(piStack_8 + 0x4a) = 0;
  return;
}


