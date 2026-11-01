
/* ==== USER32.DLL::IntersectRect @ 00406758 ==== 
 * signature: BOOL __stdcall IntersectRect(LPRECT lprcDst, RECT * lprcSrc1, RECT * lprcSrc2)
 * body: 00406758-0040675d
 * thunk to: USER32.DLL::IntersectRect
 */

BOOL __stdcall IntersectRect(LPRECT lprcDst,RECT *lprcSrc1,RECT *lprcSrc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IntersectRect(lprcDst,lprcSrc1,lprcSrc2);
  return BVar1;
}


