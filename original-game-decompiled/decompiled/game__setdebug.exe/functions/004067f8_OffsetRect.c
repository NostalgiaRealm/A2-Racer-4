
/* ==== USER32.DLL::OffsetRect @ 004067f8 ==== 
 * signature: BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
 * body: 004067f8-004067fd
 * thunk to: USER32.DLL::OffsetRect
 */

BOOL __stdcall OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}


