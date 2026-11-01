
/* ==== FUN_004dc7d0 @ 004dc7d0 ==== 
 * signature: undefined __stdcall FUN_004dc7d0(int * param_1)
 * body: 004dc7d0-004dc7fc
 */

void FUN_004dc7d0(int *param_1)

{
  int iVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00570b13;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d3f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x004dc7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004dca70)[iVar1 + -0x32])();
  return;
}


