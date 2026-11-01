
/* ==== KERNEL32.DLL::GetStdHandle @ 10015436 ==== 
 * signature: HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * body: 10015436-1001543b
 * thunk to: KERNEL32.DLL::GetStdHandle
 */

HANDLE GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


