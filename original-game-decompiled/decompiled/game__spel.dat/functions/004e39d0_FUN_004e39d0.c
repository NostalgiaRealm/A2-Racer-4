
/* ==== FUN_004e39d0 @ 004e39d0 ==== 
 * signature: undefined __stdcall FUN_004e39d0(int * param_1)
 * body: 004e39d0-004e39f8
 */

void FUN_004e39d0(int *param_1)

{
  uint uVar1;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005718d5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d4610(param_1);
                    /* WARNING: Could not recover jumptable at 0x004e39f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e3c38)[uVar1])();
  return;
}


