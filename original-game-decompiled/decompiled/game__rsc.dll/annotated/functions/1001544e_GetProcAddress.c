
/* ==== KERNEL32.DLL::GetProcAddress @ 1001544e ==== 
 * signature: FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * body: 1001544e-10015453
 * thunk to: KERNEL32.DLL::GetProcAddress
 */

FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001544e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


