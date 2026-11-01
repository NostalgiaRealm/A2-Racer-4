
/* ==== KERNEL32.DLL::IsValidCodePage @ 10015586 ==== 
 * signature: BOOL __stdcall IsValidCodePage(UINT CodePage)
 * body: 10015586-1001558b
 * thunk to: KERNEL32.DLL::IsValidCodePage
 */

BOOL IsValidCodePage(UINT CodePage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidCodePage(CodePage);
  return BVar1;
}


