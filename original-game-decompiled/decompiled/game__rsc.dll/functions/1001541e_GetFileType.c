
/* ==== KERNEL32.DLL::GetFileType @ 1001541e ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 1001541e-10015423
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001541e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


