
/* ==== FUN_0043c610 @ 0043c610 ==== 
 * signature: int __stdcall FUN_0043c610(void)
 * body: 0043c610-0043c634
 */

int FUN_0043c610(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00712108) {
    piVar2 = &DAT_00709f10;
    do {
      if (*piVar2 == 1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd0;
    } while (iVar1 < DAT_00712108);
  }
  return -1;
}


