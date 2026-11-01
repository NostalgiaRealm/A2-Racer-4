
/* ==== KERNEL32.DLL::LocalAlloc @ 004064f4 ==== 
 * signature: HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * body: 004064f4-004064f9
 * thunk to: KERNEL32.DLL::LocalAlloc
 */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


