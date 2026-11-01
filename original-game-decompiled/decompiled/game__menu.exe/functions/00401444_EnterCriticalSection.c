
/* ==== KERNEL32.DLL::EnterCriticalSection @ 00401444 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00401444-00401449
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


