
/* ==== USER32.DLL::EnableMenuItem @ 00406c48 ==== 
 * signature: BOOL __stdcall EnableMenuItem(HMENU hMenu, UINT uIDEnableItem, UINT uEnable)
 * body: 00406c48-00406c4d
 * thunk to: USER32.DLL::EnableMenuItem
 */

BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}


