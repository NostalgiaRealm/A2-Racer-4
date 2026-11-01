
/* ==== USER32.DLL::DrawFocusRect @ 00406c10 ==== 
 * signature: BOOL __stdcall DrawFocusRect(HDC hDC, RECT * lprc)
 * body: 00406c10-00406c15
 * thunk to: USER32.DLL::DrawFocusRect
 */

BOOL __stdcall DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFocusRect(hDC,lprc);
  return BVar1;
}


