
/* ==== KERNEL32.DLL::EnterCriticalSection @ 004060e8 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004060e8-004060ed
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004060e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


