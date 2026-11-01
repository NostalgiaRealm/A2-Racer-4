
/* ==== KERNEL32.DLL::GetModuleFileNameA @ 00405f2c ==== 
 * signature: DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
 * body: 00405f2c-00405f31
 * thunk to: KERNEL32.DLL::GetModuleFileNameA
 */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


