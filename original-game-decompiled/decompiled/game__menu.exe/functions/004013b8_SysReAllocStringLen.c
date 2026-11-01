
/* ==== OLEAUT32.DLL::SysReAllocStringLen @ 004013b8 ==== 
 * signature: INT __stdcall SysReAllocStringLen(BSTR * pbstr, OLECHAR * psz, uint len)
 * body: 004013b8-004013bd
 * thunk to: OLEAUT32.DLL::SysReAllocStringLen
 */

INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len)

{
  INT IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = SysReAllocStringLen(pbstr,psz,len);
  return IVar1;
}


