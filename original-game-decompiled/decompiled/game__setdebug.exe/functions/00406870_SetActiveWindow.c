
/* ==== USER32.DLL::SetActiveWindow @ 00406870 ==== 
 * signature: HWND __stdcall SetActiveWindow(HWND hWnd)
 * body: 00406870-00406875
 * thunk to: USER32.DLL::SetActiveWindow
 */

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}


