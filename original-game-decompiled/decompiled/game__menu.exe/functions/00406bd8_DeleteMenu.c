
/* ==== USER32.DLL::DeleteMenu @ 00406bd8 ==== 
 * signature: BOOL __stdcall DeleteMenu(HMENU hMenu, UINT uPosition, UINT uFlags)
 * body: 00406bd8-00406bdd
 * thunk to: USER32.DLL::DeleteMenu
 */

BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


