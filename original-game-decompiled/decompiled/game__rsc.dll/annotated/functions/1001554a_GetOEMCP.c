
/* ==== KERNEL32.DLL::GetOEMCP @ 1001554a ==== 
 * signature: UINT __stdcall GetOEMCP(void)
 * body: 1001554a-1001554f
 * thunk to: KERNEL32.DLL::GetOEMCP
 */

UINT GetOEMCP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001554a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetOEMCP();
  return UVar1;
}


