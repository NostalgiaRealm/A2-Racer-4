
/* ==== FUN_00557d45 @ 00557d45 ==== 
 * signature: undefined __stdcall FUN_00557d45(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * body: 00557d45-00557d4b
 */

void FUN_00557d45(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00557d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


