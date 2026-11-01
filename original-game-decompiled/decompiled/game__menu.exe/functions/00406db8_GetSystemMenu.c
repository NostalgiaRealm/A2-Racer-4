
/* ==== USER32.DLL::GetSystemMenu @ 00406db8 ==== 
 * signature: HMENU __stdcall GetSystemMenu(HWND hWnd, BOOL bRevert)
 * body: 00406db8-00406dbd
 * thunk to: USER32.DLL::GetSystemMenu
 */

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}


