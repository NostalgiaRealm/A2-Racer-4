
/* ==== USER32.DLL::SetForegroundWindow @ 00406898 ==== 
 * signature: BOOL __stdcall SetForegroundWindow(HWND hWnd)
 * body: 00406898-0040689d
 * thunk to: USER32.DLL::SetForegroundWindow
 */

BOOL __stdcall SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}


