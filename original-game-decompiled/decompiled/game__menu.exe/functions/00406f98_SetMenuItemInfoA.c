
/* ==== USER32.DLL::SetMenuItemInfoA @ 00406f98 ==== 
 * signature: BOOL __stdcall SetMenuItemInfoA(HMENU hmenu, UINT item, BOOL fByPositon, LPCMENUITEMINFOA lpmii)
 * body: 00406f98-00406f9d
 * thunk to: USER32.DLL::SetMenuItemInfoA
 */

BOOL __stdcall SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenuItemInfoA(hmenu,item,fByPositon,lpmii);
  return BVar1;
}


