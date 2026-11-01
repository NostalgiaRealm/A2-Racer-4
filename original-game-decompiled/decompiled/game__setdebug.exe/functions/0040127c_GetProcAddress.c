
/* ==== KERNEL32.DLL::GetProcAddress @ 0040127c ==== 
 * signature: FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * body: 0040127c-00401281
 * thunk to: KERNEL32.DLL::GetProcAddress
 */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040127c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


