
/* ==== KERNEL32.DLL::GetProcAddress @ 00401340 ==== 
 * signature: FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * body: 00401340-00401345
 * thunk to: KERNEL32.DLL::GetProcAddress
 */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


