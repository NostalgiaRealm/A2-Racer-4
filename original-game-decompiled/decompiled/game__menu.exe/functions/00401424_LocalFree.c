
/* ==== KERNEL32.DLL::LocalFree @ 00401424 ==== 
 * signature: HLOCAL __stdcall LocalFree(HLOCAL hMem)
 * body: 00401424-00401429
 * thunk to: KERNEL32.DLL::LocalFree
 */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


