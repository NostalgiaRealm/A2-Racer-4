
/* ==== USER32.DLL::GetSystemMenu @ 004066f0 ==== 
 * signature: HMENU __stdcall GetSystemMenu(HWND hWnd, BOOL bRevert)
 * body: 004066f0-004066f5
 * thunk to: USER32.DLL::GetSystemMenu
 */

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}


