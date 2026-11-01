
/* ==== KERNEL32.DLL::GetModuleFileNameA @ 10015460 ==== 
 * signature: DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
 * body: 10015460-10015465
 * thunk to: KERNEL32.DLL::GetModuleFileNameA
 */

DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


