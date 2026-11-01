
/* ==== KERNEL32.DLL::FileTimeToLocalFileTime @ 00406100 ==== 
 * signature: BOOL __stdcall FileTimeToLocalFileTime(FILETIME * lpFileTime, LPFILETIME lpLocalFileTime)
 * body: 00406100-00406105
 * thunk to: KERNEL32.DLL::FileTimeToLocalFileTime
 */

BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}


