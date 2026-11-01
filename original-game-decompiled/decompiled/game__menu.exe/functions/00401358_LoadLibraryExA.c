
/* ==== KERNEL32.DLL::LoadLibraryExA @ 00401358 ==== 
 * signature: HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
 * body: 00401358-0040135d
 * thunk to: KERNEL32.DLL::LoadLibraryExA
 */

HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExA(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}


