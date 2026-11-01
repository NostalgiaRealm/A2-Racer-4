
/* ==== KERNEL32.DLL::GetVersion @ 004061b8 ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 004061b8-004061bd
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


