
/* ==== USER32.DLL::CreateMenu @ 00406508 ==== 
 * signature: HMENU __stdcall CreateMenu(void)
 * body: 00406508-0040650d
 * thunk to: USER32.DLL::CreateMenu
 */

HMENU __stdcall CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}


