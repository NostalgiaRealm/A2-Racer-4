
/* ==== FUN_004cc550 @ 004cc550 ==== 
 * signature: undefined4 __stdcall FUN_004cc550(void)
 * body: 004cc550-004cc57e
 */

undefined4 FUN_004cc550(void)

{
  int iVar1;
  
  if (DAT_00740d50 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_005b5ea8) {
    do {
      FUN_004cbf30(iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_005b5ea8);
  }
  return 0;
}


