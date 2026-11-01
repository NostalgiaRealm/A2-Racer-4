
/* ==== KERNEL32.DLL::GlobalFree @ 004061e0 ==== 
 * signature: HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * body: 004061e0-004061e5
 * thunk to: KERNEL32.DLL::GlobalFree
 */

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


