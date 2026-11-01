
/* ==== USER32.DLL::CloseClipboard @ 00406b98 ==== 
 * signature: BOOL __stdcall CloseClipboard(void)
 * body: 00406b98-00406b9d
 * thunk to: USER32.DLL::CloseClipboard
 */

BOOL __stdcall CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}


