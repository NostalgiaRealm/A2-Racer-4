
/* ==== USER32.DLL::DestroyIcon @ 00406be8 ==== 
 * signature: BOOL __stdcall DestroyIcon(HICON hIcon)
 * body: 00406be8-00406bed
 * thunk to: USER32.DLL::DestroyIcon
 */

BOOL __stdcall DestroyIcon(HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyIcon(hIcon);
  return BVar1;
}


