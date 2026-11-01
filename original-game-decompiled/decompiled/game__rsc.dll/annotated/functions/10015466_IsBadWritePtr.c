
/* ==== KERNEL32.DLL::IsBadWritePtr @ 10015466 ==== 
 * signature: BOOL __stdcall IsBadWritePtr(LPVOID lp, UINT_PTR ucb)
 * body: 10015466-1001546b
 * thunk to: KERNEL32.DLL::IsBadWritePtr
 */

BOOL IsBadWritePtr(LPVOID lp,UINT_PTR ucb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadWritePtr(lp,ucb);
  return BVar1;
}


