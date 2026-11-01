
/* ==== OLEAUT32.DLL::SysReAllocStringLen @ 004012f4 ==== 
 * signature: INT __stdcall SysReAllocStringLen(BSTR * pbstr, OLECHAR * psz, uint len)
 * body: 004012f4-004012f9
 * thunk to: OLEAUT32.DLL::SysReAllocStringLen
 */

INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len)

{
  INT IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = SysReAllocStringLen(pbstr,psz,len);
  return IVar1;
}


