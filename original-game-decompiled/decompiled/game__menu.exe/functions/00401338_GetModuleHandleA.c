
/* ==== KERNEL32.DLL::GetModuleHandleA @ 00401338 ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 00401338-0040133d
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


