
/* ==== KERNEL32.DLL::GetThreadLocale @ 0040128c ==== 
 * signature: LCID __stdcall GetThreadLocale(void)
 * body: 0040128c-00401291
 * thunk to: KERNEL32.DLL::GetThreadLocale
 */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040128c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


