
/* ==== USER32.DLL::IsRectEmpty @ 00406780 ==== 
 * signature: BOOL __stdcall IsRectEmpty(RECT * lprc)
 * body: 00406780-00406785
 * thunk to: USER32.DLL::IsRectEmpty
 */

BOOL __stdcall IsRectEmpty(RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsRectEmpty(lprc);
  return BVar1;
}


