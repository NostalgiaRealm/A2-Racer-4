
/* ==== KERNEL32.DLL::GetFileSize @ 004012a0 ==== 
 * signature: DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
 * body: 004012a0-004012a5
 * thunk to: KERNEL32.DLL::GetFileSize
 */

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


