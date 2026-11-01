
/* ==== KERNEL32.DLL::CloseHandle @ 004060b8 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 004060b8-004060bd
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


