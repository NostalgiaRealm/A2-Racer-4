
/* ==== KERNEL32.DLL::LeaveCriticalSection @ 10015400 ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 10015400-10015405
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x10015400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


