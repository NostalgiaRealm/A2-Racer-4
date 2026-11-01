
/* ==== USER32.DLL::GetMenuStringA @ 004066a8 ==== 
 * signature: int __stdcall GetMenuStringA(HMENU hMenu, UINT uIDItem, LPSTR lpString, int cchMax, UINT flags)
 * body: 004066a8-004066ad
 * thunk to: USER32.DLL::GetMenuStringA
 */

int __stdcall GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuStringA(hMenu,uIDItem,lpString,cchMax,flags);
  return iVar1;
}


