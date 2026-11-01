
/* ==== USER32.DLL::GetSysColor @ 00406db0 ==== 
 * signature: DWORD __stdcall GetSysColor(int nIndex)
 * body: 00406db0-00406db5
 * thunk to: USER32.DLL::GetSysColor
 */

DWORD __stdcall GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}


