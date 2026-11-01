
/* ==== KERNEL32.DLL::GetStdHandle @ 004012a8 ==== 
 * signature: HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * body: 004012a8-004012ad
 * thunk to: KERNEL32.DLL::GetStdHandle
 */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


