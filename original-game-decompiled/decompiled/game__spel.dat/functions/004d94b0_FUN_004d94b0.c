
/* ==== FUN_004d94b0 @ 004d94b0 ==== 
 * signature: undefined __stdcall FUN_004d94b0(int param_1)
 * body: 004d94b0-004d94da
 */

void FUN_004d94b0(int param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005704f0;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d94d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_FUN_004d9770)[*(int *)(param_1 + 8) + -1])();
  return;
}


