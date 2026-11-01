
/* ==== KERNEL32.DLL::GetFileAttributesA @ 00406160 ==== 
 * signature: DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)
 * body: 00406160-00406165
 * thunk to: KERNEL32.DLL::GetFileAttributesA
 */

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


