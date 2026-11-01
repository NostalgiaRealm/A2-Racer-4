
/* ==== USER32.DLL::SetWindowPlacement @ 004068e8 ==== 
 * signature: BOOL __stdcall SetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * body: 004068e8-004068ed
 * thunk to: USER32.DLL::SetWindowPlacement
 */

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


