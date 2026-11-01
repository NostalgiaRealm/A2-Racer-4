
/* ==== USER32.DLL::CharLowerBuffA @ 004064e8 ==== 
 * signature: DWORD __stdcall CharLowerBuffA(LPSTR lpsz, DWORD cchLength)
 * body: 004064e8-004064ed
 * thunk to: USER32.DLL::CharLowerBuffA
 */

DWORD __stdcall CharLowerBuffA(LPSTR lpsz,DWORD cchLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CharLowerBuffA(lpsz,cchLength);
  return DVar1;
}


