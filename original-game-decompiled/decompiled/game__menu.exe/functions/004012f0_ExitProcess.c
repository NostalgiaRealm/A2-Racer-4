
/* ==== KERNEL32.DLL::ExitProcess @ 004012f0 ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 004012f0-004012f5
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004012f0. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


