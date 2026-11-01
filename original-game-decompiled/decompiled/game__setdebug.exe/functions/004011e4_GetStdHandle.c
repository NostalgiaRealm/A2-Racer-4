
/* ==== KERNEL32.DLL::GetStdHandle @ 004011e4 ==== 
 * signature: HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * body: 004011e4-004011e9
 * thunk to: KERNEL32.DLL::GetStdHandle
 */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


