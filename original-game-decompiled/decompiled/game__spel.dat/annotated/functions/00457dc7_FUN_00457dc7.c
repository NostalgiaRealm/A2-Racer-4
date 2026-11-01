
/* ==== FUN_00457dc7 @ 00457dc7 ==== 
 * signature: undefined4 __stdcall FUN_00457dc7(void)
 * body: 00457dc7-00457dcf
 */

undefined4 FUN_00457dc7(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_006fbab4 < 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < DAT_006fcf90) {
    piVar1 = &DAT_006fce80;
    do {
      if (((*piVar1 + -1 <= DAT_006fba7c) && (DAT_006fba7c <= *piVar1 + 1)) &&
         (DAT_006fb8f8 == piVar1[1] + -1)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < DAT_006fcf90);
  }
  iVar2 = DAT_006fb8f8 + 1;
  (&DAT_006fce80)[DAT_006fcf90 * 2] = DAT_006fba7c;
  (&DAT_006fce84)[DAT_006fcf90 * 2] = iVar2;
  DAT_006fcf90 = DAT_006fcf90 + 1;
  return 1;
}


