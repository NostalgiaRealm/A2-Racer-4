
/* ==== KERNEL32.DLL::FreeEnvironmentStringsA @ 100154de ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsA(LPCH param_1)
 * body: 100154de-100154e3
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsA
 */

BOOL FreeEnvironmentStringsA(LPCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsA(param_1);
  return BVar1;
}


