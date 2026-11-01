
/* ==== USER32.DLL::CheckMenuItem @ 004064f0 ==== 
 * signature: DWORD __stdcall CheckMenuItem(HMENU hMenu, UINT uIDCheckItem, UINT uCheck)
 * body: 004064f0-004064f5
 * thunk to: USER32.DLL::CheckMenuItem
 */

DWORD __stdcall CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}


