
/* ==== KERNEL32.DLL::DeleteCriticalSection @ 004060e0 ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004060e0-004060e5
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004060e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


