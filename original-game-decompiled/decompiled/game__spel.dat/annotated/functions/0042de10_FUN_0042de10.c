
/* ==== FUN_0042de10 @ 0042de10 ==== 
 * signature: undefined __stdcall FUN_0042de10(void)
 * body: 0042de10-0042de43
 */

void FUN_0042de10(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_005d2ab0) {
    piVar2 = &DAT_005973c8;
    do {
      FUN_004a71e0(DAT_006fb8ac - *piVar2);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x16;
    } while (iVar1 < DAT_005d2ab0);
  }
  return;
}


