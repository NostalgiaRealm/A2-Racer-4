
/* ==== KERNEL32.DLL::FatalAppExitA @ 100154a2 ==== 
 * signature: void __stdcall FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
 * body: 100154a2-100154a7
 * thunk to: KERNEL32.DLL::FatalAppExitA
 */

void FatalAppExitA(UINT uAction,LPCSTR lpMessageText)

{
                    /* WARNING: Could not recover jumptable at 0x100154a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FatalAppExitA(uAction,lpMessageText);
  return;
}


