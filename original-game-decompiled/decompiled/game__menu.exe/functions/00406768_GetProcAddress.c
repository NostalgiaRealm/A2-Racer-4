
/* ==== KERNEL32.DLL::GetProcAddress @ 00406768 ==== 
 * signature: FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * body: 00406768-0040676d
 * thunk to: KERNEL32.DLL::GetProcAddress
 */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


