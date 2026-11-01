
/* ==== FUN_100029d0 @ 100029d0 ==== 
 * signature: undefined __cdecl FUN_100029d0(uint param_1)
 * body: 100029d0-10002a55
 */

void __cdecl FUN_100029d0(uint param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_10031ac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_100073f0(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10007490(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


