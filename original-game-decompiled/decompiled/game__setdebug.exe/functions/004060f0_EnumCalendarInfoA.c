
/* ==== KERNEL32.DLL::EnumCalendarInfoA @ 004060f0 ==== 
 * signature: BOOL __stdcall EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType)
 * body: 004060f0-004060f5
 * thunk to: KERNEL32.DLL::EnumCalendarInfoA
 */

BOOL __stdcall
EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc,LCID Locale,CALID Calendar,CALTYPE CalType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumCalendarInfoA(lpCalInfoEnumProc,Locale,Calendar,CalType);
  return BVar1;
}


