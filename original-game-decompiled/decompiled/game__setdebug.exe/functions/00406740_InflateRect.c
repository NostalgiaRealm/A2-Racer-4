
/* ==== USER32.DLL::InflateRect @ 00406740 ==== 
 * signature: BOOL __stdcall InflateRect(LPRECT lprc, int dx, int dy)
 * body: 00406740-00406745
 * thunk to: USER32.DLL::InflateRect
 */

BOOL __stdcall InflateRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InflateRect(lprc,dx,dy);
  return BVar1;
}


