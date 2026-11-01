
/* ==== USER32.DLL::CharNextA @ 004012e8 ==== 
 * signature: LPSTR __stdcall CharNextA(LPCSTR lpsz)
 * body: 004012e8-004012ed
 * thunk to: USER32.DLL::CharNextA
 */

LPSTR __stdcall CharNextA(LPCSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharNextA(lpsz);
  return pCVar1;
}


