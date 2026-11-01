
/* ==== USER32.DLL::GetMenuItemID @ 00406d50 ==== 
 * signature: UINT __stdcall GetMenuItemID(HMENU hMenu, int nPos)
 * body: 00406d50-00406d55
 * thunk to: USER32.DLL::GetMenuItemID
 */

UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}


