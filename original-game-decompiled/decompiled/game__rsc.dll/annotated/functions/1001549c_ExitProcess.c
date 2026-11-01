
/* ==== KERNEL32.DLL::ExitProcess @ 1001549c ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 1001549c-100154a1
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x1001549c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


