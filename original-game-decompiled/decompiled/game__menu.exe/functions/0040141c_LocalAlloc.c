
/* ==== KERNEL32.DLL::LocalAlloc @ 0040141c ==== 
 * signature: HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * body: 0040141c-00401421
 * thunk to: KERNEL32.DLL::LocalAlloc
 */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


