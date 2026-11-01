
/* ==== USER32.DLL::ScrollWindow @ 00406f48 ==== 
 * signature: BOOL __stdcall ScrollWindow(HWND hWnd, int XAmount, int YAmount, RECT * lpRect, RECT * lpClipRect)
 * body: 00406f48-00406f4d
 * thunk to: USER32.DLL::ScrollWindow
 */

BOOL __stdcall ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}


