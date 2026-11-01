
/* ==== KERNEL32.DLL::GlobalReAlloc @ 004061f8 ==== 
 * signature: HGLOBAL __stdcall GlobalReAlloc(HGLOBAL hMem, SIZE_T dwBytes, UINT uFlags)
 * body: 004061f8-004061fd
 * thunk to: KERNEL32.DLL::GlobalReAlloc
 */

HGLOBAL __stdcall GlobalReAlloc(HGLOBAL hMem,SIZE_T dwBytes,UINT uFlags)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalReAlloc(hMem,dwBytes,uFlags);
  return pvVar1;
}


