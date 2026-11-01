
/* ==== KERNEL32.DLL::InitializeCriticalSection @ 004067e8 ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004067e8-004067ed
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004067e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


