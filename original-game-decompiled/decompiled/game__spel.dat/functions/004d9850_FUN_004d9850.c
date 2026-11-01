
/* ==== FUN_004d9850 @ 004d9850 ==== 
 * signature: undefined __stdcall FUN_004d9850(undefined4 param_1, int param_2)
 * body: 004d9850-004d987a
 */

void FUN_004d9850(undefined4 param_1,int param_2)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00570508;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_FUN_004d9938)[param_2 + -1])(0);
  return;
}


