
/* ==== KERNEL32.DLL::GetModuleHandleA @ 004064ec ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 004064ec-004064f1
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


