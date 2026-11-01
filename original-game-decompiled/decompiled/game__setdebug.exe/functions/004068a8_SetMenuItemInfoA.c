
/* ==== USER32.DLL::SetMenuItemInfoA @ 004068a8 ==== 
 * signature: BOOL __stdcall SetMenuItemInfoA(HMENU hmenu, UINT item, BOOL fByPositon, LPCMENUITEMINFOA lpmii)
 * body: 004068a8-004068ad
 * thunk to: USER32.DLL::SetMenuItemInfoA
 */

BOOL __stdcall SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenuItemInfoA(hmenu,item,fByPositon,lpmii);
  return BVar1;
}


