
/* ==== KERNEL32.DLL::IsValidLocale @ 10015580 ==== 
 * signature: BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
 * body: 10015580-10015585
 * thunk to: KERNEL32.DLL::IsValidLocale
 */

BOOL IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}


