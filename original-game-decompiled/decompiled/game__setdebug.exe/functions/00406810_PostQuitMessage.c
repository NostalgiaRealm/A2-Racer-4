
/* ==== USER32.DLL::PostQuitMessage @ 00406810 ==== 
 * signature: void __stdcall PostQuitMessage(int nExitCode)
 * body: 00406810-00406815
 * thunk to: USER32.DLL::PostQuitMessage
 */

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00406810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}


