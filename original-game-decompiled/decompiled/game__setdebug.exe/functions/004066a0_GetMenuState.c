
/* ==== USER32.DLL::GetMenuState @ 004066a0 ==== 
 * signature: UINT __stdcall GetMenuState(HMENU hMenu, UINT uId, UINT uFlags)
 * body: 004066a0-004066a5
 * thunk to: USER32.DLL::GetMenuState
 */

UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}


