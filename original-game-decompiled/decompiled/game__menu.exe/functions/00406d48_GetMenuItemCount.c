
/* ==== USER32.DLL::GetMenuItemCount @ 00406d48 ==== 
 * signature: int __stdcall GetMenuItemCount(HMENU hMenu)
 * body: 00406d48-00406d4d
 * thunk to: USER32.DLL::GetMenuItemCount
 */

int __stdcall GetMenuItemCount(HMENU hMenu)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuItemCount(hMenu);
  return iVar1;
}


