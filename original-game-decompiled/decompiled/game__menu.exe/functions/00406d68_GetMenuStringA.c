
/* ==== USER32.DLL::GetMenuStringA @ 00406d68 ==== 
 * signature: int __stdcall GetMenuStringA(HMENU hMenu, UINT uIDItem, LPSTR lpString, int cchMax, UINT flags)
 * body: 00406d68-00406d6d
 * thunk to: USER32.DLL::GetMenuStringA
 */

int __stdcall GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuStringA(hMenu,uIDItem,lpString,cchMax,flags);
  return iVar1;
}


