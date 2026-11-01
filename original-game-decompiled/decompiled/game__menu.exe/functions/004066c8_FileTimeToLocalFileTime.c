
/* ==== KERNEL32.DLL::FileTimeToLocalFileTime @ 004066c8 ==== 
 * signature: BOOL __stdcall FileTimeToLocalFileTime(FILETIME * lpFileTime, LPFILETIME lpLocalFileTime)
 * body: 004066c8-004066cd
 * thunk to: KERNEL32.DLL::FileTimeToLocalFileTime
 */

BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}


