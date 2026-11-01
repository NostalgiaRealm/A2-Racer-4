
/* ==== USER32.DLL::DestroyMenu @ 00406bf0 ==== 
 * signature: BOOL __stdcall DestroyMenu(HMENU hMenu)
 * body: 00406bf0-00406bf5
 * thunk to: USER32.DLL::DestroyMenu
 */

BOOL __stdcall DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}


