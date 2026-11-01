
/* ==== KERNEL32.DLL::GetModuleHandleA @ 00406758 ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 00406758-0040675d
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


