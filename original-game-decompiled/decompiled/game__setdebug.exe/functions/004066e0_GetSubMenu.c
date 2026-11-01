
/* ==== USER32.DLL::GetSubMenu @ 004066e0 ==== 
 * signature: HMENU __stdcall GetSubMenu(HMENU hMenu, int nPos)
 * body: 004066e0-004066e5
 * thunk to: USER32.DLL::GetSubMenu
 */

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}


