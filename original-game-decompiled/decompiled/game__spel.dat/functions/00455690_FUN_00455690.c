
/* ==== FUN_00455690 @ 00455690 ==== 
 * signature: undefined __stdcall FUN_00455690(void)
 * body: 00455690-004556c0
 */

void FUN_00455690(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004486a0(5);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (DAT_006fbe28 == 0) {
      DAT_006fbe28 = 1;
      FUN_00448570(5,1000);
      return;
    }
    DAT_006fbe28 = 0;
    FUN_00448570(5,500);
  }
  return;
}


