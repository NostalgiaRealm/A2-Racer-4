
/* ==== FUN_0041b67c @ 0041b67c ==== 
 * signature: undefined __register FUN_0041b67c(int param_1)
 * body: 0041b67c-0041b6de
 */

void FUN_0041b67c(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  BOOL BVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (1 < *(int *)(iVar1 + 4)) {
    FUN_0041b8b0(param_1);
    if (*(char *)(iVar1 + 0x71) == '\0') {
      pHVar2 = *(HPALETTE *)(iVar1 + 0x10);
    }
    else {
      pHVar2 = (HPALETTE)0x0;
    }
    FUN_0041b320(param_1,*(HBITMAP *)(iVar1 + 8),pHVar2,(undefined4 *)(iVar1 + 0x18));
    return;
  }
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
    if (*(HGDIOBJ *)(iVar1 + 0x14) != (HGDIOBJ)0x0) {
      BVar3 = DeleteObject(*(HGDIOBJ *)(iVar1 + 0x14));
      if (BVar3 == 0) {
        FUN_00417780();
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}


