
/* ==== KERNEL32.DLL::LoadLibraryA @ 004067f8 ==== 
 * signature: HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
 * body: 004067f8-004067fd
 * thunk to: KERNEL32.DLL::LoadLibraryA
 */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


