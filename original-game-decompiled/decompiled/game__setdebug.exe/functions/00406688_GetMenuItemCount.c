
/* ==== USER32.DLL::GetMenuItemCount @ 00406688 ==== 
 * signature: int __stdcall GetMenuItemCount(HMENU hMenu)
 * body: 00406688-0040668d
 * thunk to: USER32.DLL::GetMenuItemCount
 */

int __stdcall GetMenuItemCount(HMENU hMenu)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuItemCount(hMenu);
  return iVar1;
}


