
/* ==== USER32.DLL::GetSubMenu @ 00406da8 ==== 
 * signature: HMENU __stdcall GetSubMenu(HMENU hMenu, int nPos)
 * body: 00406da8-00406dad
 * thunk to: USER32.DLL::GetSubMenu
 */

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}


