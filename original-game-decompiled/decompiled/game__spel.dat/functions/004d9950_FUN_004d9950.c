
/* ==== FUN_004d9950 @ 004d9950 ==== 
 * signature: undefined __stdcall FUN_004d9950(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 004d9950-004d997b
 */

void FUN_004d9950(undefined4 param_1,undefined4 param_2,int param_3)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00570528;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d9975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_FUN_004d9a54)[param_3 + -1])();
  return;
}


