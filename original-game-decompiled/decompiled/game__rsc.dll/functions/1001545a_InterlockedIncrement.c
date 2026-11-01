
/* ==== KERNEL32.DLL::InterlockedIncrement @ 1001545a ==== 
 * signature: LONG __stdcall InterlockedIncrement(LONG * lpAddend)
 * body: 1001545a-1001545f
 * thunk to: KERNEL32.DLL::InterlockedIncrement
 */

LONG InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001545a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}


