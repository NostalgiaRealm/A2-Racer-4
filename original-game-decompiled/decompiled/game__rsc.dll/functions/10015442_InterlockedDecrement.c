
/* ==== KERNEL32.DLL::InterlockedDecrement @ 10015442 ==== 
 * signature: LONG __stdcall InterlockedDecrement(LONG * lpAddend)
 * body: 10015442-10015447
 * thunk to: KERNEL32.DLL::InterlockedDecrement
 */

LONG InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}


