
/* ==== KERNEL32.DLL::GlobalLock @ 004067c0 ==== 
 * signature: LPVOID __stdcall GlobalLock(HGLOBAL hMem)
 * body: 004067c0-004067c5
 * thunk to: KERNEL32.DLL::GlobalLock
 */

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


