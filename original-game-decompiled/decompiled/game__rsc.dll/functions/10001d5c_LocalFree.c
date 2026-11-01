
/* ==== KERNEL32.DLL::LocalFree @ 10001d5c ==== 
 * signature: HLOCAL __stdcall LocalFree(HLOCAL hMem)
 * body: 10001d5c-10001d61
 * thunk to: KERNEL32.DLL::LocalFree
 */

HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


