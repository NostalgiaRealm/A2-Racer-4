
/* ==== KERNEL32.DLL::GetTimeZoneInformation @ 100155a4 ==== 
 * signature: DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
 * body: 100155a4-100155a9
 * thunk to: KERNEL32.DLL::GetTimeZoneInformation
 */

DWORD GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100155a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}


