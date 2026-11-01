
/* ==== FUN_0043da80 @ 0043da80 ==== 
 * signature: int __stdcall FUN_0043da80(void)
 * body: 0043da80-0043da9e
 */

int FUN_0043da80(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_006c4330;
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    piVar2 = piVar2 + 0x4b;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x6c9538);
  return -1;
}


