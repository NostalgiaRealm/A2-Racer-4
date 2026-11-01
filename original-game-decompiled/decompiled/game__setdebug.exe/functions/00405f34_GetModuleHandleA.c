
/* ==== KERNEL32.DLL::GetModuleHandleA @ 00405f34 ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 00405f34-00405f39
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


