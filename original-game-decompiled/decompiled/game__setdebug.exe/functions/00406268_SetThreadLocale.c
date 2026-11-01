
/* ==== KERNEL32.DLL::SetThreadLocale @ 00406268 ==== 
 * signature: BOOL __stdcall SetThreadLocale(LCID Locale)
 * body: 00406268-0040626d
 * thunk to: KERNEL32.DLL::SetThreadLocale
 */

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}


