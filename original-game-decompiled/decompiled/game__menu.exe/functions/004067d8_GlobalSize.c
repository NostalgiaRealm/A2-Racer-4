
/* ==== KERNEL32.DLL::GlobalSize @ 004067d8 ==== 
 * signature: SIZE_T __stdcall GlobalSize(HGLOBAL hMem)
 * body: 004067d8-004067dd
 * thunk to: KERNEL32.DLL::GlobalSize
 */

SIZE_T __stdcall GlobalSize(HGLOBAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GlobalSize(hMem);
  return SVar1;
}


