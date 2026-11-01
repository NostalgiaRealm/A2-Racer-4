
/* ==== TDIB.vmt_014 @ 004563b8 ==== 
 * signature: undefined __register TDIB.vmt_014(int * param_1, int * param_2, int * param_3)
 * body: 004563b8-00456539;00456541-004565fb;0045662c-00456632
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_014(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  HPALETTE hPal;
  HDC pHVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  HDC hdcDest;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  BITMAPINFO *pBVar15;
  UINT UVar16;
  DWORD DVar17;
  undefined4 uVar18;
  BOOL bForceBkgd;
  
  if (param_1[0x1f] < 1) {
    return;
  }
  iVar2 = FUN_0045691c((int)param_1);
  if (0 < iVar2) {
    bForceBkgd = 0;
    hPal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    pHVar3 = (HDC)FUN_004194d8(param_2);
    SelectPalette(pHVar3,hPal,bForceBkgd);
    pHVar3 = (HDC)FUN_004194d8(param_2);
    RealizePalette(pHVar3);
  }
  *in_FS_OFFSET = &stack0xffffffd4;
  iVar2 = 3;
  pHVar3 = (HDC)FUN_004194d8(param_2);
  iVar2 = SetStretchBltMode(pHVar3,iVar2);
  uVar18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc8;
  GdiFlush();
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[9] + 0x42c) == '\0') {
      DVar17 = param_2[8];
      iVar12 = param_1[0x10];
      iVar5 = param_1[0x23];
      iVar14 = 0;
      iVar11 = 0;
      pHVar3 = *(HDC *)(param_1[9] + 0x420);
      iVar9 = param_3[3] - param_3[1];
      iVar6 = *param_3;
      iVar10 = param_3[2] - iVar6;
      iVar8 = param_3[1];
      hdcDest = (HDC)FUN_004194d8(param_2);
      StretchBlt(hdcDest,iVar6,iVar8,iVar10,iVar9,pHVar3,iVar11,iVar14,iVar5,iVar12,DVar17);
    }
    else {
      DVar17 = param_2[8];
      UVar16 = 0;
      pBVar15 = *(BITMAPINFO **)(param_1[9] + 0xc);
      pvVar13 = *(void **)(param_1[9] + 0x440);
      iVar12 = param_1[0x10];
      iVar5 = param_1[0x23];
      iVar14 = 0;
      iVar11 = 0;
      iVar9 = param_3[3] - param_3[1];
      iVar6 = *param_3;
      iVar10 = param_3[2] - iVar6;
      iVar8 = param_3[1];
      pHVar3 = (HDC)FUN_004194d8(param_2);
      StretchDIBits(pHVar3,iVar6,iVar8,iVar10,iVar9,iVar11,iVar14,iVar5,iVar12,pvVar13,pBVar15,
                    UVar16,DVar17);
    }
    *in_FS_OFFSET = uVar18;
    pHVar3 = (HDC)FUN_004194d8(param_2);
    SetStretchBltMode(pHVar3,iVar2);
    return;
  }
  piVar4 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX);
  uVar18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffbc;
  (**(code **)(*piVar4 + 0x40))(piVar4,param_1[0x23]);
  (**(code **)(*piVar4 + 0x34))(piVar4,param_1[0x10]);
  (**(code **)(*piVar4 + 0x40))(piVar4,param_3[2] - *param_3);
  (**(code **)(*piVar4 + 0x34))(piVar4,param_3[3] - param_3[1]);
  DVar17 = 0xcc0020;
  UVar16 = 0;
  pBVar15 = *(BITMAPINFO **)(param_1[9] + 0xc);
  pvVar13 = *(void **)(param_1[9] + 0x440);
  iVar2 = param_1[0x10];
  iVar12 = param_1[0x23];
  iVar11 = 0;
  iVar10 = 0;
  iVar5 = (**(code **)(*piVar4 + 0x20))();
  iVar6 = (**(code **)(*piVar4 + 0x2c))();
  iVar9 = 0;
  iVar8 = 0;
  piVar7 = (int *)FUN_0041df1c(piVar4);
  pHVar3 = (HDC)FUN_004194d8(piVar7);
  StretchDIBits(pHVar3,iVar8,iVar9,iVar6,iVar5,iVar10,iVar11,iVar12,iVar2,pvVar13,pBVar15,UVar16,
                DVar17);
  (**(code **)(*piVar4 + 0x3c))(piVar4,1);
  iVar2 = FUN_00456a14((int)param_1);
  FUN_0041ee30(piVar4,iVar2);
  FUN_0041ee80(piVar4,(char)param_1[0x22]);
  FUN_00419200(param_2,param_3,piVar4);
  *in_FS_OFFSET = uVar18;
  FUN_00402f9c(piVar4);
  return;
}


