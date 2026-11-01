
/* ==== KERNEL32.DLL::LeaveCriticalSection @ 00401388 ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00401388-0040138d
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


