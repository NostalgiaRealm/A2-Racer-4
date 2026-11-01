
/* ==== KERNEL32.DLL::GlobalAlloc @ 004067a8 ==== 
 * signature: HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
 * body: 004067a8-004067ad
 * thunk to: KERNEL32.DLL::GlobalAlloc
 */

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


