
/* ==== KERNEL32.DLL::LocalFree @ 00401360 ==== 
 * signature: HLOCAL __stdcall LocalFree(HLOCAL hMem)
 * body: 00401360-00401365
 * thunk to: KERNEL32.DLL::LocalFree
 */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


