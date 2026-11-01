
/* ==== KERNEL32.DLL::GlobalDeleteAtom @ 004067b0 ==== 
 * signature: ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * body: 004067b0-004067b5
 * thunk to: KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


