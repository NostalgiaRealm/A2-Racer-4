
/* ==== KERNEL32.DLL::TerminateProcess @ 100154a8 ==== 
 * signature: BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
 * body: 100154a8-100154ad
 * thunk to: KERNEL32.DLL::TerminateProcess
 */

BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}


