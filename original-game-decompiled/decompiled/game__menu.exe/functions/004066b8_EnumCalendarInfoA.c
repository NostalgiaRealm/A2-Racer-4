
/* ==== KERNEL32.DLL::EnumCalendarInfoA @ 004066b8 ==== 
 * signature: BOOL __stdcall EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType)
 * body: 004066b8-004066bd
 * thunk to: KERNEL32.DLL::EnumCalendarInfoA
 */

BOOL __stdcall
EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc,LCID Locale,CALID Calendar,CALTYPE CalType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumCalendarInfoA(lpCalInfoEnumProc,Locale,Calendar,CalType);
  return BVar1;
}


