
/* ==== KERNEL32.DLL::GetCPInfo @ 1001553e ==== 
 * signature: BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
 * body: 1001553e-10015543
 * thunk to: KERNEL32.DLL::GetCPInfo
 */

BOOL GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001553e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}


