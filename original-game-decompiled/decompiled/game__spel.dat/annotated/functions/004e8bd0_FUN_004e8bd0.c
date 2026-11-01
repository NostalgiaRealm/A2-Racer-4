
/* ==== FUN_004e8bd0 @ 004e8bd0 ==== 
 * signature: undefined __stdcall FUN_004e8bd0(undefined4 param_1, int param_2)
 * body: 004e8bd0-004e8c03
 */

void FUN_004e8bd0(undefined4 param_1,int param_2)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  pcStack_10 = FUN_00571f1e;
  pvStack_14 = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004e8bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_14;
  (*(code *)(&PTR_FUN_004e92e0)[param_2])();
  return;
}


