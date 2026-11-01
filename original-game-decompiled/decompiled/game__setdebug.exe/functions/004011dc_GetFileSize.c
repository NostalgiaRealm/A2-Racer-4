
/* ==== KERNEL32.DLL::GetFileSize @ 004011dc ==== 
 * signature: DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
 * body: 004011dc-004011e1
 * thunk to: KERNEL32.DLL::GetFileSize
 */

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


