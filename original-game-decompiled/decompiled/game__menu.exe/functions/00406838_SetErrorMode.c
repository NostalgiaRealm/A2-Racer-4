
/* ==== KERNEL32.DLL::SetErrorMode @ 00406838 ==== 
 * signature: UINT __stdcall SetErrorMode(UINT uMode)
 * body: 00406838-0040683d
 * thunk to: KERNEL32.DLL::SetErrorMode
 */

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


