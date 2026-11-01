
/* ==== KERNEL32.DLL::InterlockedDecrement @ 004013f0 ==== 
 * signature: LONG __stdcall InterlockedDecrement(LONG * lpAddend)
 * body: 004013f0-004013f5
 * thunk to: KERNEL32.DLL::InterlockedDecrement
 */

LONG __stdcall InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}


