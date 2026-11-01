
/* ==== USER32.DLL::GetSystemMetrics @ 00406dc0 ==== 
 * signature: int __stdcall GetSystemMetrics(int nIndex)
 * body: 00406dc0-00406dc5
 * thunk to: USER32.DLL::GetSystemMetrics
 */

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


