
/* ==== KERNEL32.DLL::GlobalAddAtomA @ 004061c8 ==== 
 * signature: ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)
 * body: 004061c8-004061cd
 * thunk to: KERNEL32.DLL::GlobalAddAtomA
 */

ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}


