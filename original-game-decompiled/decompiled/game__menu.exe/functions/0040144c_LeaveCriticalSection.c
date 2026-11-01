
/* ==== KERNEL32.DLL::LeaveCriticalSection @ 0040144c ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 0040144c-00401451
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0040144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


