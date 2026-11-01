
/* ==== KERNEL32.DLL::InitializeCriticalSection @ 00406208 ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00406208-0040620d
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00406208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


