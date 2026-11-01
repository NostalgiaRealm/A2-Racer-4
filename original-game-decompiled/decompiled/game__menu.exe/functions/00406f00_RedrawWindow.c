
/* ==== USER32.DLL::RedrawWindow @ 00406f00 ==== 
 * signature: BOOL __stdcall RedrawWindow(HWND hWnd, RECT * lprcUpdate, HRGN hrgnUpdate, UINT flags)
 * body: 00406f00-00406f05
 * thunk to: USER32.DLL::RedrawWindow
 */

BOOL __stdcall RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}


