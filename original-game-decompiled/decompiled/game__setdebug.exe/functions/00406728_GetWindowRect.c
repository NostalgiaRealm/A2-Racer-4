
/* ==== USER32.DLL::GetWindowRect @ 00406728 ==== 
 * signature: BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
 * body: 00406728-0040672d
 * thunk to: USER32.DLL::GetWindowRect
 */

BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


