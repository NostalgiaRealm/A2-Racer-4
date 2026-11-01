
/* ==== KERNEL32.DLL::InterlockedDecrement @ 0040132c ==== 
 * signature: LONG __stdcall InterlockedDecrement(LONG * lpAddend)
 * body: 0040132c-00401331
 * thunk to: KERNEL32.DLL::InterlockedDecrement
 */

LONG __stdcall InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040132c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}


