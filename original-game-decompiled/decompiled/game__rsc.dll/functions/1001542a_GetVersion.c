
/* ==== KERNEL32.DLL::GetVersion @ 1001542a ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 1001542a-1001542f
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001542a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


