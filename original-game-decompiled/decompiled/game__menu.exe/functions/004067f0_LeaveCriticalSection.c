
/* ==== KERNEL32.DLL::LeaveCriticalSection @ 004067f0 ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004067f0-004067f5
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004067f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


