
/* ==== USER32.DLL::CharNextA @ 00401224 ==== 
 * signature: LPSTR __stdcall CharNextA(LPCSTR lpsz)
 * body: 00401224-00401229
 * thunk to: USER32.DLL::CharNextA
 */

LPSTR __stdcall CharNextA(LPCSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharNextA(lpsz);
  return pCVar1;
}


