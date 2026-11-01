
/* ==== KERNEL32.DLL::GetFileType @ 004011d4 ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 004011d4-004011d9
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004011d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


