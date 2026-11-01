
/* ==== USER32.DLL::SetWindowPlacement @ 00406fd8 ==== 
 * signature: BOOL __stdcall SetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * body: 00406fd8-00406fdd
 * thunk to: USER32.DLL::SetWindowPlacement
 */

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


