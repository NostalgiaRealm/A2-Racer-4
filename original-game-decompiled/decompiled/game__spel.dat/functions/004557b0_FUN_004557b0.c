
/* ==== FUN_004557b0 @ 004557b0 ==== 
 * signature: undefined __stdcall FUN_004557b0(void)
 * body: 004557b0-004557fa
 */

void FUN_004557b0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004486a0(7);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (DAT_006fbe30 == 0) {
      DAT_006fbe30 = 1;
      FUN_00448570(7,1000);
      return;
    }
    DAT_006fbe30 = 0;
    FUN_00448570(7,500);
  }
  return;
}


