
/* ==== USER32.DLL::EnableMenuItem @ 00406598 ==== 
 * signature: BOOL __stdcall EnableMenuItem(HMENU hMenu, UINT uIDEnableItem, UINT uEnable)
 * body: 00406598-0040659d
 * thunk to: USER32.DLL::EnableMenuItem
 */

BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}


