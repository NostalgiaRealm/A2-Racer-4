
/* ==== TBitmapImage.vmt_000 @ 0041a76c ==== 
 * signature: undefined TBitmapImage.vmt_000(void)
 * body: 0041a76c-0041a7b6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmapImage_vmt_000(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x14))) {
    FUN_0041a47c(iVar1);
    DeleteObject(*(HGDIOBJ *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0041a47c(*(int *)(param_1 + 0xc));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_004158e4(*(HGDIOBJ *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


