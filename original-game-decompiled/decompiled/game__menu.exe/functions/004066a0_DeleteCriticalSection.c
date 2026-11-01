
/* ==== KERNEL32.DLL::DeleteCriticalSection @ 004066a0 ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004066a0-004066a5
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004066a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


