
/* ==== KERNEL32.DLL::InitializeCriticalSection @ 0040143c ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 0040143c-00401441
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0040143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


