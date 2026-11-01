
/* ==== FUN_004180e9 @ 004180e9 ==== 
 * signature: undefined FUN_004180e9(void)
 * body: 004180e9-0041819b
 */

void FUN_004180e9(void)

{
  int iVar1;
  HBITMAP pHVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  
  *(int *)(unaff_EBP + -0x14) =
       *(int *)(unaff_EBP + -0x14) + *(int *)(*(int *)(unaff_EBP + -4) + 0x14);
  *(undefined2 *)(*(int *)(unaff_EBP + -4) + 0xe) = 1;
  iVar1 = FUN_004179b8(*(int *)(*(int *)(unaff_EBP + -4) + 4),1,0x20);
  *(int *)(*(int *)(unaff_EBP + -4) + 0x14) = iVar1 * *(int *)(*(int *)(unaff_EBP + -4) + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x20) = 2;
  *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x24) = 2;
  iVar1 = *(int *)(unaff_EBP + -4);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffff;
  pHVar2 = CreateDIBitmap(*(HDC *)(unaff_EBP + -0x10),*(BITMAPINFOHEADER **)(unaff_EBP + -4),4,
                          *(void **)(unaff_EBP + -0x14),
                          (BITMAPINFO *)*(BITMAPINFOHEADER **)(unaff_EBP + -4),0);
  iVar1 = FUN_00417828((int)pHVar2);
  *(int *)(unaff_EBP + -0xc) = iVar1;
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffff4;
  uVar3 = FUN_00417838(*(HANDLE *)(unaff_EBP + -0xc),*(int **)(unaff_EBP + 8),'\x01');
  **(undefined4 **)(unaff_EBP + -8) = uVar3;
  *in_FS_OFFSET = uVar4;
  DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0xc));
  return;
}


