
/* ==== KERNEL32.DLL::GetEnvironmentStrings @ 100154f0 ==== 
 * signature: LPCH __stdcall GetEnvironmentStrings(void)
 * body: 100154f0-100154f5
 * thunk to: KERNEL32.DLL::GetEnvironmentStrings
 */

LPCH GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}


