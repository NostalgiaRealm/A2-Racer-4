
/* ==== KERNEL32.DLL::EnterCriticalSection @ 00401380 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00401380-00401385
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


