
/* ==== FUN_00557d3e @ 00557d3e ==== 
 * signature: undefined __stdcall FUN_00557d3e(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * body: 00557d3e-00557d44
 */

void FUN_00557d3e(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00557d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


