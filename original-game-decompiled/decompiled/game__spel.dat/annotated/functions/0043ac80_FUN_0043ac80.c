
/* ==== FUN_0043ac80 @ 0043ac80 ==== 
 * signature: undefined4 __stdcall FUN_0043ac80(void)
 * body: 0043ac80-0043ad37
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043ac80(void)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_0059a0f8 == 0xffffffff) {
    DAT_0059a0f8 = GetTickCount();
  }
  DVar1 = GetTickCount();
  if (DVar1 - DAT_0059a0f8 < 0x5dc) {
    return 0;
  }
  if (DAT_006c35d0 == 0) {
    if (DAT_006fb8d0 != 0) {
      FUN_0043fdd0(1);
    }
    DAT_006c35d0 = 1;
    _DAT_0071277c = 5;
  }
  iVar2 = FUN_004c5e40(0x1b);
  if (iVar2 == 0) {
    iVar2 = FUN_004c5e40(0xd);
    if (iVar2 == 0) {
      iVar2 = FUN_004c5e40(0x20);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  do {
    do {
      do {
        iVar2 = FUN_004c5e40(0x1b);
      } while (iVar2 != 0);
      iVar2 = FUN_004c5e40(0xd);
    } while (iVar2 != 0);
    iVar2 = FUN_004c5e40(0x20);
  } while (iVar2 != 0);
  return 1;
}


