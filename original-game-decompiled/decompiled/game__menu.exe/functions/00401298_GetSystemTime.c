
/* ==== KERNEL32.DLL::GetSystemTime @ 00401298 ==== 
 * signature: void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)
 * body: 00401298-0040129d
 * thunk to: KERNEL32.DLL::GetSystemTime
 */

void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00401298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}


