
/* ==== USER32.DLL::SetWindowsHookExA @ 00406ff0 ==== 
 * signature: HHOOK __stdcall SetWindowsHookExA(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
 * body: 00406ff0-00406ff5
 * thunk to: USER32.DLL::SetWindowsHookExA
 */

HHOOK __stdcall SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


