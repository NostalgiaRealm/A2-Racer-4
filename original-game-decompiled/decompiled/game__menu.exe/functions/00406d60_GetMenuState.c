
/* ==== USER32.DLL::GetMenuState @ 00406d60 ==== 
 * signature: UINT __stdcall GetMenuState(HMENU hMenu, UINT uId, UINT uFlags)
 * body: 00406d60-00406d65
 * thunk to: USER32.DLL::GetMenuState
 */

UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}


