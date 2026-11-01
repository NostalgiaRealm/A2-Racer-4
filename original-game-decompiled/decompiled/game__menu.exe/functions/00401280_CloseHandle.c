
/* ==== KERNEL32.DLL::CloseHandle @ 00401280 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 00401280-00401285
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


