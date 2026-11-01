
/* ==== FUN_004e7910 @ 004e7910 ==== 
 * signature: undefined __fastcall FUN_004e7910(int param_1)
 * body: 004e7910-004e793a
 */

void __fastcall FUN_004e7910(int param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571df8;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004e7934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_FUN_004e7a4c)[*(int *)(param_1 + 8)])(0);
  return;
}


