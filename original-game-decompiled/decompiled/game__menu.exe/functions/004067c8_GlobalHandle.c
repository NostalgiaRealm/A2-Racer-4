
/* ==== KERNEL32.DLL::GlobalHandle @ 004067c8 ==== 
 * signature: HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)
 * body: 004067c8-004067cd
 * thunk to: KERNEL32.DLL::GlobalHandle
 */

HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}


