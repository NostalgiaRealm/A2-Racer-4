
/* ==== USER32.DLL::ShowOwnedPopups @ 00407008 ==== 
 * signature: BOOL __stdcall ShowOwnedPopups(HWND hWnd, BOOL fShow)
 * body: 00407008-0040700d
 * thunk to: USER32.DLL::ShowOwnedPopups
 */

BOOL __stdcall ShowOwnedPopups(HWND hWnd,BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowOwnedPopups(hWnd,fShow);
  return BVar1;
}


