
/* ==== USER32.DLL::GetSystemMetrics @ 004066f8 ==== 
 * signature: int __stdcall GetSystemMetrics(int nIndex)
 * body: 004066f8-004066fd
 * thunk to: USER32.DLL::GetSystemMetrics
 */

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


