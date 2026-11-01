
/* ==== KERNEL32.DLL::GetThreadLocale @ 004061a8 ==== 
 * signature: LCID __stdcall GetThreadLocale(void)
 * body: 004061a8-004061ad
 * thunk to: KERNEL32.DLL::GetThreadLocale
 */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


