
/* ==== USER32.DLL::OemToCharA @ 004067f0 ==== 
 * signature: BOOL __stdcall OemToCharA(LPCSTR pSrc, LPSTR pDst)
 * body: 004067f0-004067f5
 * thunk to: USER32.DLL::OemToCharA
 */

BOOL __stdcall OemToCharA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharA(pSrc,pDst);
  return BVar1;
}


