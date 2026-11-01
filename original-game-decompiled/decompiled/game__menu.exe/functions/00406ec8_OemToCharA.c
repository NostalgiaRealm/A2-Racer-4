
/* ==== USER32.DLL::OemToCharA @ 00406ec8 ==== 
 * signature: BOOL __stdcall OemToCharA(LPCSTR pSrc, LPSTR pDst)
 * body: 00406ec8-00406ecd
 * thunk to: USER32.DLL::OemToCharA
 */

BOOL __stdcall OemToCharA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharA(pSrc,pDst);
  return BVar1;
}


