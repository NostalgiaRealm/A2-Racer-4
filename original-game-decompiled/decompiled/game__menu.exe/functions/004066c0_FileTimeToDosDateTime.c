
/* ==== KERNEL32.DLL::FileTimeToDosDateTime @ 004066c0 ==== 
 * signature: BOOL __stdcall FileTimeToDosDateTime(FILETIME * lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
 * body: 004066c0-004066c5
 * thunk to: KERNEL32.DLL::FileTimeToDosDateTime
 */

BOOL __stdcall FileTimeToDosDateTime(FILETIME *lpFileTime,LPWORD lpFatDate,LPWORD lpFatTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToDosDateTime(lpFileTime,lpFatDate,lpFatTime);
  return BVar1;
}


