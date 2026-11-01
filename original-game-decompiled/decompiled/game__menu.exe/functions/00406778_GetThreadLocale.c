
/* ==== KERNEL32.DLL::GetThreadLocale @ 00406778 ==== 
 * signature: LCID __stdcall GetThreadLocale(void)
 * body: 00406778-0040677d
 * thunk to: KERNEL32.DLL::GetThreadLocale
 */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


