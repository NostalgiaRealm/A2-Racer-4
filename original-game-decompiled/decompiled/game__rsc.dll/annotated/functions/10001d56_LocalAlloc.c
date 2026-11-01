
/* ==== KERNEL32.DLL::LocalAlloc @ 10001d56 ==== 
 * signature: HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * body: 10001d56-10001d5b
 * thunk to: KERNEL32.DLL::LocalAlloc
 */

HLOCAL LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


