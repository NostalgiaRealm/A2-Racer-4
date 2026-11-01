
/* ==== USER32.DLL::PtInRect @ 00406ef8 ==== 
 * signature: BOOL __stdcall PtInRect(RECT * lprc, POINT pt)
 * body: 00406ef8-00406efd
 * thunk to: USER32.DLL::PtInRect
 */

BOOL __stdcall PtInRect(RECT *lprc,POINT pt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRect(lprc,pt);
  return BVar1;
}


