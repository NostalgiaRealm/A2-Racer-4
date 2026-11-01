
/* ==== FUN_004dc520 @ 004dc520 ==== 
 * signature: undefined __stdcall FUN_004dc520(int * param_1)
 * body: 004dc520-004dc54c
 */

void FUN_004dc520(int *param_1)

{
  int iVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00570aa2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d3f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x004dc546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004dc6f8)[iVar1 + -0x3b])();
  return;
}


