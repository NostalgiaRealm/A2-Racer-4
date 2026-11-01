
/* ==== KERNEL32.DLL::GetCommandLineA @ 10015424 ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 10015424-10015429
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


