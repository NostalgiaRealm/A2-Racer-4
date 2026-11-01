
/* ==== KERNEL32.DLL::GlobalDeleteAtom @ 004061d8 ==== 
 * signature: ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * body: 004061d8-004061dd
 * thunk to: KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


