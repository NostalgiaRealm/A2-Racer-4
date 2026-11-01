
/* ==== KERNEL32.DLL::LeaveCriticalSection @ 00406210 ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00406210-00406215
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00406210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


