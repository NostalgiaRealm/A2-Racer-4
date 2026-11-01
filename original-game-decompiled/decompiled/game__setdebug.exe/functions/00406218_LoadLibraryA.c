
/* ==== KERNEL32.DLL::LoadLibraryA @ 00406218 ==== 
 * signature: HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
 * body: 00406218-0040621d
 * thunk to: KERNEL32.DLL::LoadLibraryA
 */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


