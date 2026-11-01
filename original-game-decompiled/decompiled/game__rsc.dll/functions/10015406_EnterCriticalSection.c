
/* ==== KERNEL32.DLL::EnterCriticalSection @ 10015406 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 10015406-1001540b
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x10015406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


