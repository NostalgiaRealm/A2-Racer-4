
/* ==== KERNEL32.DLL::lstrlenA @ 00401378 ==== 
 * signature: int __stdcall lstrlenA(LPCSTR lpString)
 * body: 00401378-0040137d
 * thunk to: KERNEL32.DLL::lstrlenA
 */

int __stdcall lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}


