
/* ==== KERNEL32.DLL::FindResourceA @ 00406118 ==== 
 * signature: HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
 * body: 00406118-0040611d
 * thunk to: KERNEL32.DLL::FindResourceA
 */

HRSRC __stdcall FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}


