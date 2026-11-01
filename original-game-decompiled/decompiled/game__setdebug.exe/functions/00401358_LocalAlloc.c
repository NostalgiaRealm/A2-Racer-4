
/* ==== KERNEL32.DLL::LocalAlloc @ 00401358 ==== 
 * signature: HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * body: 00401358-0040135d
 * thunk to: KERNEL32.DLL::LocalAlloc
 */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


