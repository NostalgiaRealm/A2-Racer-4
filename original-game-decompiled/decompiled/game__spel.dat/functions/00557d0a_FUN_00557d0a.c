
/* ==== FUN_00557d0a @ 00557d0a ==== 
 * signature: undefined __stdcall FUN_00557d0a(undefined * UNRECOVERED_JUMPTABLE)
 * body: 00557d0a-00557d36
 */

void FUN_00557d0a(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00557d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


