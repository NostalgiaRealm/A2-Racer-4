
/* ==== KERNEL32.DLL::CloseHandle @ 004011c4 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 004011c4-004011c9
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


