
/* ==== KERNEL32.DLL::FindResourceA @ 004066e8 ==== 
 * signature: HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
 * body: 004066e8-004066ed
 * thunk to: KERNEL32.DLL::FindResourceA
 */

HRSRC __stdcall FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}


