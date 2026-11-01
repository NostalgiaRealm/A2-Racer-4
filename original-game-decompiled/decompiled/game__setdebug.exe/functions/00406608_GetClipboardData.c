
/* ==== USER32.DLL::GetClipboardData @ 00406608 ==== 
 * signature: HANDLE __stdcall GetClipboardData(UINT uFormat)
 * body: 00406608-0040660d
 * thunk to: USER32.DLL::GetClipboardData
 */

HANDLE __stdcall GetClipboardData(UINT uFormat)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetClipboardData(uFormat);
  return pvVar1;
}


