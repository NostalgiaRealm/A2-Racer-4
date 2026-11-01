
/* ==== KERNEL32.DLL::GetStartupInfoA @ 00401284 ==== 
 * signature: void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
 * body: 00401284-00401289
 * thunk to: KERNEL32.DLL::GetStartupInfoA
 */

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00401284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}


