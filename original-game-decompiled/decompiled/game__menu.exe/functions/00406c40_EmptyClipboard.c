
/* ==== USER32.DLL::EmptyClipboard @ 00406c40 ==== 
 * signature: BOOL __stdcall EmptyClipboard(void)
 * body: 00406c40-00406c45
 * thunk to: USER32.DLL::EmptyClipboard
 */

BOOL __stdcall EmptyClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EmptyClipboard();
  return BVar1;
}


