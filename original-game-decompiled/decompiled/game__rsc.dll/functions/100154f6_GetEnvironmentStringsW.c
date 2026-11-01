
/* ==== KERNEL32.DLL::GetEnvironmentStringsW @ 100154f6 ==== 
 * signature: LPWCH __stdcall GetEnvironmentStringsW(void)
 * body: 100154f6-100154fb
 * thunk to: KERNEL32.DLL::GetEnvironmentStringsW
 */

LPWCH GetEnvironmentStringsW(void)

{
  LPWCH pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetEnvironmentStringsW();
  return pWVar1;
}


