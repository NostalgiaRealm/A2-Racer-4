
/* ==== USER32.DLL::GetMenu @ 00406d40 ==== 
 * signature: HMENU __stdcall GetMenu(HWND hWnd)
 * body: 00406d40-00406d45
 * thunk to: USER32.DLL::GetMenu
 */

HMENU __stdcall GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}


