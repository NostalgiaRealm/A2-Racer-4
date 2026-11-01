
/* ==== KERNEL32.DLL::GlobalLock @ 004061e8 ==== 
 * signature: LPVOID __stdcall GlobalLock(HGLOBAL hMem)
 * body: 004061e8-004061ed
 * thunk to: KERNEL32.DLL::GlobalLock
 */

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


