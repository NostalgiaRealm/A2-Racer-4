
/* ==== KERNEL32.DLL::GetFileAttributesA @ 00406730 ==== 
 * signature: DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)
 * body: 00406730-00406735
 * thunk to: KERNEL32.DLL::GetFileAttributesA
 */

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


