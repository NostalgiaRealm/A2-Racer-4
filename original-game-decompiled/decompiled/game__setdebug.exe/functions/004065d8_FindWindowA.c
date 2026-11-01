
/* ==== USER32.DLL::FindWindowA @ 004065d8 ==== 
 * signature: HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
 * body: 004065d8-004065dd
 * thunk to: USER32.DLL::FindWindowA
 */

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}


