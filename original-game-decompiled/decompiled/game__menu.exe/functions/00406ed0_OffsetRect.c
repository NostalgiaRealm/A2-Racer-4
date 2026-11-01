
/* ==== USER32.DLL::OffsetRect @ 00406ed0 ==== 
 * signature: BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
 * body: 00406ed0-00406ed5
 * thunk to: USER32.DLL::OffsetRect
 */

BOOL __stdcall OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}


