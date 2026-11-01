
/* ==== KERNEL32.DLL::GlobalFree @ 004067b8 ==== 
 * signature: HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * body: 004067b8-004067bd
 * thunk to: KERNEL32.DLL::GlobalFree
 */

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


