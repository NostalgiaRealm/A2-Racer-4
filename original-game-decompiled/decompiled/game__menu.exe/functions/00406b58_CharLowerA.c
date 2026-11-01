
/* ==== USER32.DLL::CharLowerA @ 00406b58 ==== 
 * signature: LPSTR __stdcall CharLowerA(LPSTR lpsz)
 * body: 00406b58-00406b5d
 * thunk to: USER32.DLL::CharLowerA
 */

LPSTR __stdcall CharLowerA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharLowerA(lpsz);
  return pCVar1;
}


