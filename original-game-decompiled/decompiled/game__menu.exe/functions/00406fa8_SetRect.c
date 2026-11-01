
/* ==== USER32.DLL::SetRect @ 00406fa8 ==== 
 * signature: BOOL __stdcall SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom)
 * body: 00406fa8-00406fad
 * thunk to: USER32.DLL::SetRect
 */

BOOL __stdcall SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRect(lprc,xLeft,yTop,xRight,yBottom);
  return BVar1;
}


