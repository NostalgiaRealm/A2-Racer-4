
/* ==== KERNEL32.DLL::SetStdHandle @ 10015412 ==== 
 * signature: BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle)
 * body: 10015412-10015417
 * thunk to: KERNEL32.DLL::SetStdHandle
 */

BOOL SetStdHandle(DWORD nStdHandle,HANDLE hHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetStdHandle(nStdHandle,hHandle);
  return BVar1;
}


