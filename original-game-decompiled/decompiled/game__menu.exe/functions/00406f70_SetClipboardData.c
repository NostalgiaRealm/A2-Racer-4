
/* ==== USER32.DLL::SetClipboardData @ 00406f70 ==== 
 * signature: HANDLE __stdcall SetClipboardData(UINT uFormat, HANDLE hMem)
 * body: 00406f70-00406f75
 * thunk to: USER32.DLL::SetClipboardData
 */

HANDLE __stdcall SetClipboardData(UINT uFormat,HANDLE hMem)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetClipboardData(uFormat,hMem);
  return pvVar1;
}


