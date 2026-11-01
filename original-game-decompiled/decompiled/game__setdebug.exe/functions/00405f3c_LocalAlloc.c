
/* ==== KERNEL32.DLL::LocalAlloc @ 00405f3c ==== 
 * signature: HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * body: 00405f3c-00405f41
 * thunk to: KERNEL32.DLL::LocalAlloc
 */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


