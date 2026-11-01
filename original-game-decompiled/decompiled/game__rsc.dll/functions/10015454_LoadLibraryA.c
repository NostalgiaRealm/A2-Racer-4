
/* ==== KERNEL32.DLL::LoadLibraryA @ 10015454 ==== 
 * signature: HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
 * body: 10015454-10015459
 * thunk to: KERNEL32.DLL::LoadLibraryA
 */

HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


