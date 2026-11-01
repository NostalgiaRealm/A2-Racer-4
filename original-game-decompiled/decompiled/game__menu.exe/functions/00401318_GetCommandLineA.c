
/* ==== KERNEL32.DLL::GetCommandLineA @ 00401318 ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 00401318-0040131d
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


