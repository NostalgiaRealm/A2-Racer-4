
/* ==== KERNEL32.DLL::FileTimeToDosDateTime @ 004060f8 ==== 
 * signature: BOOL __stdcall FileTimeToDosDateTime(FILETIME * lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
 * body: 004060f8-004060fd
 * thunk to: KERNEL32.DLL::FileTimeToDosDateTime
 */

BOOL __stdcall FileTimeToDosDateTime(FILETIME *lpFileTime,LPWORD lpFatDate,LPWORD lpFatTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToDosDateTime(lpFileTime,lpFatDate,lpFatTime);
  return BVar1;
}


