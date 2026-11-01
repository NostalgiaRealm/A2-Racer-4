
/* ==== KERNEL32.DLL::GetModuleFileNameA @ 004064e4 ==== 
 * signature: DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
 * body: 004064e4-004064e9
 * thunk to: KERNEL32.DLL::GetModuleFileNameA
 */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


