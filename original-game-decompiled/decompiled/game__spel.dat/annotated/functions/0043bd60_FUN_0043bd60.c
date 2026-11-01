
/* ==== FUN_0043bd60 @ 0043bd60 ==== 
 * signature: undefined4 __stdcall FUN_0043bd60(void)
 * body: 0043bd60-0043be4b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043bd60(void)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = (DAT_005b23bc & DAT_006c39ec) * 4;
  FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3530 * 0x178),
               *(float *)(iVar1 + DAT_0073b578) * _DAT_006c39e4,DAT_006c39f8,
               *(float *)(iVar1 + DAT_0073b530) * _DAT_006c39e4);
  DAT_006c39ec = DAT_006c39ec + DAT_006c39f0;
  if (DAT_0059a194 == 0xffffffff) {
    DAT_0059a194 = GetTickCount();
  }
  DVar2 = GetTickCount();
  if (DVar2 - DAT_0059a194 < 1000) {
    return 0;
  }
  iVar1 = FUN_004c5e40(0x1b);
  if (iVar1 == 0) {
    iVar1 = FUN_004c5e40(0xd);
    if (iVar1 == 0) {
      iVar1 = FUN_004c5e40(0x20);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


