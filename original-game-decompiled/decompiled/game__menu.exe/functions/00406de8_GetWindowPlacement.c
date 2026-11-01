
/* ==== USER32.DLL::GetWindowPlacement @ 00406de8 ==== 
 * signature: BOOL __stdcall GetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * body: 00406de8-00406ded
 * thunk to: USER32.DLL::GetWindowPlacement
 */

BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


