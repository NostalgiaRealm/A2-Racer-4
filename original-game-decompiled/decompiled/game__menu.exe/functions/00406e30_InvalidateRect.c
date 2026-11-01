
/* ==== USER32.DLL::InvalidateRect @ 00406e30 ==== 
 * signature: BOOL __stdcall InvalidateRect(HWND hWnd, RECT * lpRect, BOOL bErase)
 * body: 00406e30-00406e35
 * thunk to: USER32.DLL::InvalidateRect
 */

BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}


