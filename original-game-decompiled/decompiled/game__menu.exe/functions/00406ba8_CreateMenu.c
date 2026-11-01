
/* ==== USER32.DLL::CreateMenu @ 00406ba8 ==== 
 * signature: HMENU __stdcall CreateMenu(void)
 * body: 00406ba8-00406bad
 * thunk to: USER32.DLL::CreateMenu
 */

HMENU __stdcall CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}


