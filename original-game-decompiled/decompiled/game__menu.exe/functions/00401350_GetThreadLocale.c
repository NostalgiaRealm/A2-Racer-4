
/* ==== KERNEL32.DLL::GetThreadLocale @ 00401350 ==== 
 * signature: LCID __stdcall GetThreadLocale(void)
 * body: 00401350-00401355
 * thunk to: KERNEL32.DLL::GetThreadLocale
 */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


