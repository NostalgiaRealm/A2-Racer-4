
/* ==== USER32.DLL::FindWindowA @ 00406c98 ==== 
 * signature: HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
 * body: 00406c98-00406c9d
 * thunk to: USER32.DLL::FindWindowA
 */

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}


