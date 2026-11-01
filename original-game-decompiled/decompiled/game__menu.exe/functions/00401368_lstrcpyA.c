
/* ==== KERNEL32.DLL::lstrcpyA @ 00401368 ==== 
 * signature: LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
 * body: 00401368-0040136d
 * thunk to: KERNEL32.DLL::lstrcpyA
 */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


