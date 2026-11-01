
/* ==== KERNEL32.DLL::GetSystemInfo @ 00406770 ==== 
 * signature: void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
 * body: 00406770-00406775
 * thunk to: KERNEL32.DLL::GetSystemInfo
 */

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00406770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


