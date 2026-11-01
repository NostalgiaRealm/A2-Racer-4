
/* ==== USER32.DLL::SetMenu @ 00406f90 ==== 
 * signature: BOOL __stdcall SetMenu(HWND hWnd, HMENU hMenu)
 * body: 00406f90-00406f95
 * thunk to: USER32.DLL::SetMenu
 */

BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}


