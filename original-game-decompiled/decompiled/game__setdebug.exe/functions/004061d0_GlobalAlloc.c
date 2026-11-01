
/* ==== KERNEL32.DLL::GlobalAlloc @ 004061d0 ==== 
 * signature: HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
 * body: 004061d0-004061d5
 * thunk to: KERNEL32.DLL::GlobalAlloc
 */

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


