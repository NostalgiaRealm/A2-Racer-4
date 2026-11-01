
/* ==== KERNEL32.DLL::IsBadReadPtr @ 1001546c ==== 
 * signature: BOOL __stdcall IsBadReadPtr(void * lp, UINT_PTR ucb)
 * body: 1001546c-10015471
 * thunk to: KERNEL32.DLL::IsBadReadPtr
 */

BOOL IsBadReadPtr(void *lp,UINT_PTR ucb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001546c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadReadPtr(lp,ucb);
  return BVar1;
}


