
/* ==== USER32.DLL::SetWindowsHookExA @ 004068f8 ==== 
 * signature: HHOOK __stdcall SetWindowsHookExA(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
 * body: 004068f8-004068fd
 * thunk to: USER32.DLL::SetWindowsHookExA
 */

HHOOK __stdcall SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


