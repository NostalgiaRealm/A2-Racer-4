
/* ==== USER32.DLL::GetMenu @ 00406680 ==== 
 * signature: HMENU __stdcall GetMenu(HWND hWnd)
 * body: 00406680-00406685
 * thunk to: USER32.DLL::GetMenu
 */

HMENU __stdcall GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}


