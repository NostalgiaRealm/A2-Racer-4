
/* ==== KERNEL32.DLL::lstrcpynA @ 004012ac ==== 
 * signature: LPSTR __stdcall lstrcpynA(LPSTR lpString1, LPCSTR lpString2, int iMaxLength)
 * body: 004012ac-004012b1
 * thunk to: KERNEL32.DLL::lstrcpynA
 */

LPSTR __stdcall lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}


