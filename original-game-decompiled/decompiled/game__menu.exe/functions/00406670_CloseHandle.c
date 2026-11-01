
/* ==== KERNEL32.DLL::CloseHandle @ 00406670 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 00406670-00406675
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


