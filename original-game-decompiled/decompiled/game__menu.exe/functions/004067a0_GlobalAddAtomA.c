
/* ==== KERNEL32.DLL::GlobalAddAtomA @ 004067a0 ==== 
 * signature: ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)
 * body: 004067a0-004067a5
 * thunk to: KERNEL32.DLL::GlobalAddAtomA
 */

ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}


