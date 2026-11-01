
/* ==== USER32.DLL::PostQuitMessage @ 00406ef0 ==== 
 * signature: void __stdcall PostQuitMessage(int nExitCode)
 * body: 00406ef0-00406ef5
 * thunk to: USER32.DLL::PostQuitMessage
 */

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00406ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}


