
/* ==== KERNEL32.DLL::GetModuleFileNameA @ 00401330 ==== 
 * signature: DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
 * body: 00401330-00401335
 * thunk to: KERNEL32.DLL::GetModuleFileNameA
 */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


