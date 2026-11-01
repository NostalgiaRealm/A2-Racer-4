
/* ==== FUN_004450e0 @ 004450e0 ==== 
 * signature: undefined __stdcall FUN_004450e0(void)
 * body: 004450e0-0044517f
 */

void FUN_004450e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_004447a0(iVar3);
    if (*(int *)(&DAT_006cfa44 + iVar1 * 0x1910) != 0) {
      iVar1 = FUN_004447a0(iVar3);
      *(int *)(&DAT_006cfa4c + iVar1 * 0x1910) = *(int *)(&DAT_006cfa4c + iVar1 * 0x1910) + 1;
      iVar1 = FUN_004447a0(iVar3);
      iVar2 = FUN_004447a0(iVar3);
      if (*(int *)(&DAT_006cfa4c + iVar2 * 0x1910) < *(int *)(&DAT_006cfa48 + iVar1 * 0x1910)) {
        FUN_00444f80(iVar3);
      }
      else {
        FUN_00444ec0(iVar3);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  return;
}


