
/* ==== KERNEL32.DLL::DeleteCriticalSection @ 10015496 ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 10015496-1001549b
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x10015496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


