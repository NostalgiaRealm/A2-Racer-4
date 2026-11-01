
/* ==== USER32.DLL::GetWindowRect @ 00406df0 ==== 
 * signature: BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
 * body: 00406df0-00406df5
 * thunk to: USER32.DLL::GetWindowRect
 */

BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


