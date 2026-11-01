
/* ==== FUN_00455052 @ 00455052 ==== 
 * signature: undefined __stdcall FUN_00455052(void)
 * body: 00455052-004550bd
 */

void FUN_00455052(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int unaff_retaddr;
  
  bVar1 = FUN_004486a0(unaff_retaddr);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (DAT_005a3ab4 == 0) {
      FUN_00448570(1,5000);
      DAT_005a3ab4 = 3;
    }
    else {
      if (DAT_005a3ab4 == 2) {
        FUN_00448570(1,5000);
        DAT_005a3ab4 = 0;
        return;
      }
      if (DAT_005a3ab4 == 3) {
        FUN_00448570(1,500);
        DAT_005a3ab4 = 2;
        return;
      }
    }
  }
  return;
}


