
/* ==== USER32.DLL::DestroyWindow @ 00406558 ==== 
 * signature: BOOL __stdcall DestroyWindow(HWND hWnd)
 * body: 00406558-0040655d
 * thunk to: USER32.DLL::DestroyWindow
 */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


