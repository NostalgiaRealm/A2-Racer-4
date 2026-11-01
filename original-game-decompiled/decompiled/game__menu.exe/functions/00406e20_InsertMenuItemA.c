
/* ==== USER32.DLL::InsertMenuItemA @ 00406e20 ==== 
 * signature: BOOL __stdcall InsertMenuItemA(HMENU hmenu, UINT item, BOOL fByPosition, LPCMENUITEMINFOA lpmi)
 * body: 00406e20-00406e25
 * thunk to: USER32.DLL::InsertMenuItemA
 */

BOOL __stdcall InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuItemA(hmenu,item,fByPosition,lpmi);
  return BVar1;
}


