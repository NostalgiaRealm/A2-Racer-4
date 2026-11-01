
/* ==== KERNEL32.DLL::DeleteCriticalSection @ 00401454 ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 00401454-00401459
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00401454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


