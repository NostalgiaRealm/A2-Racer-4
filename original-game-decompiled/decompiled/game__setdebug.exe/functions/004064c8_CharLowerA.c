
/* ==== USER32.DLL::CharLowerA @ 004064c8 ==== 
 * signature: LPSTR __stdcall CharLowerA(LPSTR lpsz)
 * body: 004064c8-004064cd
 * thunk to: USER32.DLL::CharLowerA
 */

LPSTR __stdcall CharLowerA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharLowerA(lpsz);
  return pCVar1;
}


