
/* ==== USER32.DLL::SetRect @ 004068b8 ==== 
 * signature: BOOL __stdcall SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom)
 * body: 004068b8-004068bd
 * thunk to: USER32.DLL::SetRect
 */

BOOL __stdcall SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRect(lprc,xLeft,yTop,xRight,yBottom);
  return BVar1;
}


