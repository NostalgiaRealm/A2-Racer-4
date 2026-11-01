
/* ==== USER32.DLL::CheckMenuItem @ 00406b88 ==== 
 * signature: DWORD __stdcall CheckMenuItem(HMENU hMenu, UINT uIDCheckItem, UINT uCheck)
 * body: 00406b88-00406b8d
 * thunk to: USER32.DLL::CheckMenuItem
 */

DWORD __stdcall CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}


