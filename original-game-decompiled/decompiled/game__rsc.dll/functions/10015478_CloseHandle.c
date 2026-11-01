
/* ==== KERNEL32.DLL::CloseHandle @ 10015478 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 10015478-1001547d
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


