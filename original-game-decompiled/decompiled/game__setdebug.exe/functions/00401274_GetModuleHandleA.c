
/* ==== KERNEL32.DLL::GetModuleHandleA @ 00401274 ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 00401274-00401279
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


