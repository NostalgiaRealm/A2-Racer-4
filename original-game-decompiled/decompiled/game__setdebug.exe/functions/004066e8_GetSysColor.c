
/* ==== USER32.DLL::GetSysColor @ 004066e8 ==== 
 * signature: DWORD __stdcall GetSysColor(int nIndex)
 * body: 004066e8-004066ed
 * thunk to: USER32.DLL::GetSysColor
 */

DWORD __stdcall GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}


