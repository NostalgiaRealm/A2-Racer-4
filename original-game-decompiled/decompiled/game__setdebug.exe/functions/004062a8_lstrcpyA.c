
/* ==== KERNEL32.DLL::lstrcpyA @ 004062a8 ==== 
 * signature: LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
 * body: 004062a8-004062ad
 * thunk to: KERNEL32.DLL::lstrcpyA
 */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


