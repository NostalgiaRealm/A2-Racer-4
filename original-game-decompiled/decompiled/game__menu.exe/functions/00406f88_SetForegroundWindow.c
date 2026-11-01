
/* ==== USER32.DLL::SetForegroundWindow @ 00406f88 ==== 
 * signature: BOOL __stdcall SetForegroundWindow(HWND hWnd)
 * body: 00406f88-00406f8d
 * thunk to: USER32.DLL::SetForegroundWindow
 */

BOOL __stdcall SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}


