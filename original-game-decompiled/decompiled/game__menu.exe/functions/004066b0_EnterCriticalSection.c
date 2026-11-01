
/* ==== KERNEL32.DLL::EnterCriticalSection @ 004066b0 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004066b0-004066b5
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004066b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


