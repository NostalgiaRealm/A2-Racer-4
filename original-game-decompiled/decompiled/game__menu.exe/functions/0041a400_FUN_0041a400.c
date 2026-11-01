
/* ==== FUN_0041a400 @ 0041a400 ==== 
 * signature: undefined FUN_0041a400(void)
 * body: 0041a400-0041a5c3
 */

void FUN_0041a400(void)

{
  BITMAPINFOHEADER *pBVar1;
  BYTE *lpbANDbits;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  HICON pHVar6;
  undefined2 extraout_var;
  int unaff_EBP;
  int iVar7;
  BYTE *lpbXORbits;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_c;
  code *pcStack_8;
  
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iVar2 = FUN_0041a274((uint)*(ushort *)(*(int *)(unaff_EBP + -0x10) + 2));
  *(int *)(unaff_EBP + -0x20) = iVar2;
  iVar2 = *(int *)(unaff_EBP + -0xc) + -1;
  if (0 < iVar2) {
    iVar7 = 1;
    do {
      iVar3 = FUN_0041a274((uint)*(ushort *)(*(int *)(unaff_EBP + -0x10) + 2 + iVar7 * 0x10));
      if ((iVar3 <= *(int *)(unaff_EBP + -0x1c)) && (*(int *)(unaff_EBP + -0x20) <= iVar3)) {
        pcStack_8 = (code *)0x41a459;
        uVar4 = FUN_0041a280((byte *)(*(int *)(unaff_EBP + -0x10) +
                                     *(int *)(unaff_EBP + -0x24) * 0x10),
                             (byte *)(*(int *)(unaff_EBP + -0x10) + iVar7 * 0x10),
                             *(int *)(unaff_EBP + -0x10),unaff_EBP);
        if ((char)uVar4 != '\0') {
          *(int *)(unaff_EBP + -0x24) = iVar7;
          *(int *)(unaff_EBP + -0x20) = iVar3;
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x24) * 0x10;
  **(uint **)(unaff_EBP + 8) = (uint)**(byte **)(unaff_EBP + -0x40);
  *(uint *)(*(int *)(unaff_EBP + 8) + 4) = (uint)*(byte *)(*(int *)(unaff_EBP + -0x40) + 1);
  puVar5 = FUN_0040816c(*(uint *)(*(int *)(unaff_EBP + -0x40) + 8));
  *(undefined4 **)(unaff_EBP + -0x2c) = puVar5;
  pcStack_8 = thunk_FUN_004036bc;
  uStack_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c;
  (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))
            (*(int **)(unaff_EBP + -4),
             *(int *)(*(int *)(unaff_EBP + -0x40) + 0xc) -
             (*(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 0x10)),CONCAT22(extraout_var,1));
  pBVar1 = *(BITMAPINFOHEADER **)(unaff_EBP + -0x2c);
  (**(code **)(**(int **)(unaff_EBP + -4) + 4))
            (*(int **)(unaff_EBP + -4),pBVar1,*(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 8));
  FUN_0041a0b8(pBVar1,(undefined4 *)(unaff_EBP + -0x34),unaff_EBP + -0x38,*(int **)(unaff_EBP + 8));
  GetObjectA(*(HANDLE *)(unaff_EBP + -0x38),0x18,(LPVOID)(unaff_EBP + -0x70));
  GetObjectA(*(HANDLE *)(unaff_EBP + -0x34),0x18,(LPVOID)(unaff_EBP + -0x58));
  iVar2 = *(int *)(unaff_EBP + -100) * *(int *)(unaff_EBP + -0x68) *
          (uint)*(ushort *)(unaff_EBP + -0x60);
  *(uint *)(unaff_EBP + -0x3c) =
       *(int *)(unaff_EBP + -0x4c) * *(int *)(unaff_EBP + -0x50) *
       (uint)*(ushort *)(unaff_EBP + -0x48);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x3c) + iVar2;
  puVar5 = FUN_0040816c(*(uint *)(unaff_EBP + -0x18));
  *(undefined4 **)(unaff_EBP + -0x30) = puVar5;
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffe4;
  lpbANDbits = *(BYTE **)(unaff_EBP + -0x30);
  lpbXORbits = (BYTE *)(*(int *)(unaff_EBP + -0x30) + iVar2);
  GetBitmapBits(*(HBITMAP *)(unaff_EBP + -0x38),iVar2,lpbANDbits);
  GetBitmapBits(*(HBITMAP *)(unaff_EBP + -0x34),*(LONG *)(unaff_EBP + -0x3c),lpbXORbits);
  DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x34));
  DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x38));
  pHVar6 = CreateIcon(DAT_004ac4dc,**(int **)(unaff_EBP + 8),*(int *)(*(int *)(unaff_EBP + 8) + 4),
                      *(BYTE *)(unaff_EBP + -0x48),*(BYTE *)(unaff_EBP + -0x46),lpbANDbits,
                      lpbXORbits);
  **(undefined4 **)(unaff_EBP + -8) = pHVar6;
  if (**(int **)(unaff_EBP + -8) == 0) {
    FUN_00419828();
  }
  *in_FS_OFFSET = uVar4;
  FUN_00402794(*(int *)(unaff_EBP + -0x30));
  return;
}


