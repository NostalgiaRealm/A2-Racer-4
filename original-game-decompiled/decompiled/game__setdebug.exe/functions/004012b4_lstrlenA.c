
/* ==== KERNEL32.DLL::lstrlenA @ 004012b4 ==== 
 * signature: int __stdcall lstrlenA(LPCSTR lpString)
 * body: 004012b4-004012b9
 * thunk to: KERNEL32.DLL::lstrlenA
 */

int __stdcall lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}


