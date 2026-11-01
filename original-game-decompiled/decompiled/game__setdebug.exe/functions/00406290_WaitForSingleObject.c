
/* ==== KERNEL32.DLL::WaitForSingleObject @ 00406290 ==== 
 * signature: DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
 * body: 00406290-00406295
 * thunk to: KERNEL32.DLL::WaitForSingleObject
 */

DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}


