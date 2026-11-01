
/* ==== USER32.DLL::SetActiveWindow @ 00406f58 ==== 
 * signature: HWND __stdcall SetActiveWindow(HWND hWnd)
 * body: 00406f58-00406f5d
 * thunk to: USER32.DLL::SetActiveWindow
 */

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}


