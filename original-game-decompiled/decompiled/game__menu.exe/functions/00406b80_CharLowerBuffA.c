
/* ==== USER32.DLL::CharLowerBuffA @ 00406b80 ==== 
 * signature: DWORD __stdcall CharLowerBuffA(LPSTR lpsz, DWORD cchLength)
 * body: 00406b80-00406b85
 * thunk to: USER32.DLL::CharLowerBuffA
 */

DWORD __stdcall CharLowerBuffA(LPSTR lpsz,DWORD cchLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CharLowerBuffA(lpsz,cchLength);
  return DVar1;
}


