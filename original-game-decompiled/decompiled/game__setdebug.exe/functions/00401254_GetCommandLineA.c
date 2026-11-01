
/* ==== KERNEL32.DLL::GetCommandLineA @ 00401254 ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 00401254-00401259
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


