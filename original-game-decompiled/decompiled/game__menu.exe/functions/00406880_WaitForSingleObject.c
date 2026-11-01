
/* ==== KERNEL32.DLL::WaitForSingleObject @ 00406880 ==== 
 * signature: DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
 * body: 00406880-00406885
 * thunk to: KERNEL32.DLL::WaitForSingleObject
 */

DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}


