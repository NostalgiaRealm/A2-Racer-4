
/* ==== KERNEL32.DLL::GetVersion @ 00406790 ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 00406790-00406795
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


