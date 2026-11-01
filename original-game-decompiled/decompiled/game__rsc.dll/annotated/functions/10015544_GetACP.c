
/* ==== KERNEL32.DLL::GetACP @ 10015544 ==== 
 * signature: UINT __stdcall GetACP(void)
 * body: 10015544-10015549
 * thunk to: KERNEL32.DLL::GetACP
 */

UINT GetACP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetACP();
  return UVar1;
}


