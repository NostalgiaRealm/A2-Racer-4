
/* ==== KERNEL32.DLL::GetCPInfo @ 00406708 ==== 
 * signature: BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
 * body: 00406708-0040670d
 * thunk to: KERNEL32.DLL::GetCPInfo
 */

BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}


