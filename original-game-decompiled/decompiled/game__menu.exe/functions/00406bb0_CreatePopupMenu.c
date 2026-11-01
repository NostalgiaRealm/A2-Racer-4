
/* ==== USER32.DLL::CreatePopupMenu @ 00406bb0 ==== 
 * signature: HMENU __stdcall CreatePopupMenu(void)
 * body: 00406bb0-00406bb5
 * thunk to: USER32.DLL::CreatePopupMenu
 */

HMENU __stdcall CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}


