
/* ==== KERNEL32.DLL::FreeEnvironmentStringsW @ 100154e4 ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsW(LPWCH param_1)
 * body: 100154e4-100154e9
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsW
 */

BOOL FreeEnvironmentStringsW(LPWCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsW(param_1);
  return BVar1;
}


