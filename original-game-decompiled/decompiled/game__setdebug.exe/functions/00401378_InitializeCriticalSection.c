
/* ==== KERNEL32.DLL::InitializeCriticalSection @ 00401378 ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00401378-0040137d
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


