
/* ==== USER32.DLL::IsRectEmpty @ 00406e50 ==== 
 * signature: BOOL __stdcall IsRectEmpty(RECT * lprc)
 * body: 00406e50-00406e55
 * thunk to: USER32.DLL::IsRectEmpty
 */

BOOL __stdcall IsRectEmpty(RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsRectEmpty(lprc);
  return BVar1;
}


