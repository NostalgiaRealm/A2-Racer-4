
/* ==== USER32.DLL::SetMenu @ 004068a0 ==== 
 * signature: BOOL __stdcall SetMenu(HWND hWnd, HMENU hMenu)
 * body: 004068a0-004068a5
 * thunk to: USER32.DLL::SetMenu
 */

BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}


