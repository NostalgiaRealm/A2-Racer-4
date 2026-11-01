
/* ==== USER32.DLL::RemoveMenu @ 00406848 ==== 
 * signature: BOOL __stdcall RemoveMenu(HMENU hMenu, UINT uPosition, UINT uFlags)
 * body: 00406848-0040684d
 * thunk to: USER32.DLL::RemoveMenu
 */

BOOL __stdcall RemoveMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


