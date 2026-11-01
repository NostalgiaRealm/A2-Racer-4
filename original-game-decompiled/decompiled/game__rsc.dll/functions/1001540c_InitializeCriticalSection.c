
/* ==== KERNEL32.DLL::InitializeCriticalSection @ 1001540c ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 1001540c-10015411
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x1001540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


