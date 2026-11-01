
/* ==== KERNEL32.DLL::GetFileType @ 00401290 ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 00401290-00401295
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


