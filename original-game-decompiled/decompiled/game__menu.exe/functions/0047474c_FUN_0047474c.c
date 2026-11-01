
/* ==== FUN_0047474c @ 0047474c ==== 
 * signature: int __register FUN_0047474c(int param_1, byte param_2)
 * body: 0047474c-00474c4a;00474c71-00474c86;00474ca5-00474cad
 */

int FUN_0047474c(int param_1,byte param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  HPALETTE pHVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  HDC pHVar10;
  HDC pHVar11;
  undefined4 uVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int iVar13;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  byte bVar14;
  undefined4 *in_FS_OFFSET;
  int iVar15;
  int x1;
  int iVar16;
  int y1;
  DWORD DVar17;
  COLORREF CVar18;
  undefined4 uStack_60;
  undefined4 uStack_54;
  code *pcStack_50;
  undefined1 *puStack_4c;
  int local_3c [4];
  RECT local_2c;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  byte local_9;
  int local_8;
  
  local_9 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x20) < 3)) {
    local_9 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc + (uint)local_9 * 4);
  if (iVar2 != -1) {
    return iVar2;
  }
  puStack_4c = (undefined1 *)0x47478e;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  puStack_4c = (undefined1 *)0x47479b;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  if (iVar2 == 0 && iVar3 == 0) {
    return -1;
  }
  puStack_4c = (undefined1 *)0x4747ae;
  iVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
  iVar2 = iVar2 / (int)(uint)*(byte *)(local_8 + 0x20);
  puStack_4c = (undefined1 *)0x4747c7;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  uVar12 = extraout_ECX;
  if (*(int *)(local_8 + 8) == 0) {
    if (DAT_004ab458 == (int *)0x0) {
      puStack_4c = (undefined1 *)0x4747e7;
      DAT_004ab458 = FUN_0047443c((int *)&DAT_004742a8,'\x01',extraout_ECX);
    }
    puStack_4c = (undefined1 *)0x4747fa;
    piVar4 = FUN_004744b0((int)DAT_004ab458,iVar2,iVar3);
    *(int **)(local_8 + 8) = piVar4;
    uVar12 = extraout_ECX_00;
  }
  puStack_4c = (undefined1 *)0x47480c;
  local_10 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',uVar12);
  pcStack_50 = thunk_FUN_004036bc;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x40))(local_10,iVar2);
  (**(code **)(*local_10 + 0x34))(local_10,iVar3);
  uStack_60 = 0x474841;
  FUN_0040f7e8(0,0,iVar2,&local_2c.left,iVar3);
  iVar5 = FUN_0041df1c(local_10);
  TBrush_set_Color(*(int **)(iVar5 + 0x14),0x8000000f);
  pHVar6 = (HPALETTE)(**(code **)(**(int **)(local_8 + 4) + 0x24))();
  pHVar6 = FUN_0041d740(pHVar6);
  (**(code **)(*local_10 + 0x38))(local_10,pHVar6);
  bVar14 = local_9;
  if (*(char *)(local_8 + 0x20) <= (char)local_9) {
    bVar14 = 0;
  }
  piVar4 = local_3c;
  iVar5 = bVar14 + 1;
  piVar8 = piVar4;
  iVar16 = iVar3;
  if (SCARRY4((uint)bVar14,1)) {
    uStack_60 = 0x474890;
    piVar4 = (int *)thunk_FUN_00402808((uint)piVar4);
    iVar5 = extraout_ECX_01;
  }
  iVar13 = (int)((longlong)iVar5 * (longlong)iVar2);
  if ((longlong)iVar13 != (longlong)iVar5 * (longlong)iVar2) {
    uStack_60 = 0x47489a;
    thunk_FUN_00402808((uint)piVar4);
    iVar13 = extraout_ECX_02;
  }
  uVar1 = (longlong)(int)(uint)bVar14 * (longlong)iVar2;
  if ((longlong)(int)(uint)uVar1 != uVar1) {
    uStack_60 = 0x4748a7;
    uVar7 = thunk_FUN_00402808((uint)uVar1);
    uVar1 = (ulonglong)uVar7;
    iVar13 = extraout_ECX_03;
  }
  uStack_60 = 0x4748ae;
  FUN_0040f7e8((int)uVar1,0,iVar13,piVar8,iVar16);
  if (local_9 != 0) {
    if (local_9 == 1) {
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      uStack_60 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_60;
      local_18 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_04);
      local_14 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_05);
      (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 4));
      (**(code **)(*local_14 + 0x68))(local_14,1);
      if (*(byte *)(local_8 + 0x20) < 2) {
        (**(code **)(*local_18 + 8))(local_18,*(undefined4 *)(local_8 + 4));
        (**(code **)(*local_18 + 0x68))(local_18,1);
        iVar5 = FUN_0041df1c(local_18);
        TBrush_set_Color(*(int **)(iVar5 + 0x14),0);
        (**(code **)(*local_18 + 0x40))(local_18,iVar2);
        uVar12 = FUN_0041dfd0((int)local_18);
        if ((char)uVar12 != '\0') {
          iVar5 = FUN_0041df1c(local_18);
          TFont_set_Color(*(int **)(iVar5 + 0xc),0xffffff,extraout_ECX_06);
          FUN_0041ecdc(local_18,0);
          iVar5 = FUN_0041df1c(local_18);
          TBrush_set_Color(*(int **)(iVar5 + 0x14),0xffffff);
        }
        FUN_0041ecdc(local_18,1);
        piVar4 = (int *)FUN_0041df1c(local_10);
        TBrush_set_Color((int *)piVar4[5],0x8000000f);
        FUN_0041907c(piVar4,&local_2c);
        TBrush_set_Color((int *)piVar4[5],0x80000014);
        CVar18 = 0;
        pHVar10 = (HDC)FUN_004194d8(piVar4);
        SetTextColor(pHVar10,CVar18);
        CVar18 = 0xffffff;
        pHVar10 = (HDC)FUN_004194d8(piVar4);
        SetBkColor(pHVar10,CVar18);
        DVar17 = 0xe20746;
        y1 = 0;
        x1 = 0;
        piVar8 = (int *)FUN_0041df1c(local_18);
        pHVar10 = (HDC)FUN_004194d8(piVar8);
        iVar15 = 1;
        iVar13 = 1;
        iVar5 = iVar2;
        iVar16 = iVar3;
        pHVar11 = (HDC)FUN_004194d8(piVar4);
        BitBlt(pHVar11,iVar13,iVar15,iVar5,iVar16,pHVar10,x1,y1,DVar17);
        TBrush_set_Color((int *)piVar4[5],0x80000010);
        CVar18 = 0;
        pHVar10 = (HDC)FUN_004194d8(piVar4);
        SetTextColor(pHVar10,CVar18);
        CVar18 = 0xffffff;
        pHVar10 = (HDC)FUN_004194d8(piVar4);
        SetBkColor(pHVar10,CVar18);
        DVar17 = 0xe20746;
        iVar15 = 0;
        iVar13 = 0;
        piVar8 = (int *)FUN_0041df1c(local_18);
        pHVar10 = (HDC)FUN_004194d8(piVar8);
        iVar16 = 0;
        iVar5 = 0;
        pHVar11 = (HDC)FUN_004194d8(piVar4);
        BitBlt(pHVar11,iVar5,iVar16,iVar2,iVar3,pHVar10,iVar13,iVar15,DVar17);
      }
      else {
        local_1c = (int *)FUN_0041df1c(local_10);
        piVar4 = local_3c;
        piVar8 = (int *)FUN_0041df1c(local_14);
        FUN_00418f14(local_1c,&local_2c.left,piVar8,piVar4);
        FUN_0041ecdc(local_18,1);
        (**(code **)(*local_18 + 0x40))(local_18,iVar2);
        (**(code **)(*local_18 + 0x34))(local_18,iVar3);
        iVar5 = FUN_0041df1c(local_14);
        TBrush_set_Color(*(int **)(iVar5 + 0x14),0xffffff);
        piVar4 = local_3c;
        piVar8 = (int *)FUN_0041df1c(local_14);
        piVar9 = (int *)FUN_0041df1c(local_18);
        FUN_00418f14(piVar9,&local_2c.left,piVar8,piVar4);
        TBrush_set_Color((int *)local_1c[5],0x80000014);
        pHVar10 = (HDC)FUN_004194d8(local_1c);
        SetTextColor(pHVar10,0);
        SetBkColor(pHVar10,0xffffff);
        DVar17 = 0xe20746;
        iVar16 = 0;
        iVar5 = 0;
        piVar4 = (int *)FUN_0041df1c(local_18);
        pHVar11 = (HDC)FUN_004194d8(piVar4);
        BitBlt(pHVar10,0,0,iVar2,iVar3,pHVar11,iVar5,iVar16,DVar17);
        iVar5 = FUN_0041df1c(local_14);
        TBrush_set_Color(*(int **)(iVar5 + 0x14),0x808080);
        piVar4 = local_3c;
        piVar8 = (int *)FUN_0041df1c(local_14);
        piVar9 = (int *)FUN_0041df1c(local_18);
        FUN_00418f14(piVar9,&local_2c.left,piVar8,piVar4);
        TBrush_set_Color((int *)local_1c[5],0x80000010);
        pHVar10 = (HDC)FUN_004194d8(local_1c);
        SetTextColor(pHVar10,0);
        SetBkColor(pHVar10,0xffffff);
        DVar17 = 0xe20746;
        iVar16 = 0;
        iVar5 = 0;
        piVar4 = (int *)FUN_0041df1c(local_18);
        pHVar11 = (HDC)FUN_004194d8(piVar4);
        BitBlt(pHVar10,0,0,iVar2,iVar3,pHVar11,iVar5,iVar16,DVar17);
      }
      *in_FS_OFFSET = uStack_60;
      FUN_00402f9c(local_14);
      iVar2 = FUN_00402f9c(local_18);
      return iVar2;
    }
    if (1 < (byte)(local_9 - 2)) goto LAB_00474c71;
  }
  piVar4 = local_3c;
  piVar8 = (int *)FUN_0041df1c(*(int **)(local_8 + 4));
  uStack_60 = 0x4748d8;
  piVar9 = (int *)FUN_0041df1c(local_10);
  FUN_00418f14(piVar9,&local_2c.left,piVar8,piVar4);
  if (*(char *)(*(int *)(local_8 + 4) + 0x30) == '\x01') {
    uVar7 = FUN_004743d8(*(int **)(local_8 + 8),local_10,*(int *)(local_8 + 0x1c));
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar7;
  }
  else {
    uVar7 = FUN_004743d8(*(int **)(local_8 + 8),local_10,0x20000000);
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar7;
  }
LAB_00474c71:
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_00474c8e;
  pcStack_50 = (code *)0x474c86;
  iVar2 = FUN_00402f9c(local_10);
  return iVar2;
}


