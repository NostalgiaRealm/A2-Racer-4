
/* ==== USER32.DLL::GetMenuItemInfoA @ 00406698 ==== 
 * signature: BOOL __stdcall GetMenuItemInfoA(HMENU hmenu, UINT item, BOOL fByPosition, LPMENUITEMINFOA lpmii)
 * body: 00406698-0040669d
 * thunk to: USER32.DLL::GetMenuItemInfoA
 */

BOOL __stdcall GetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPosition,LPMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMenuItemInfoA(hmenu,item,fByPosition,lpmii);
  return BVar1;
}


