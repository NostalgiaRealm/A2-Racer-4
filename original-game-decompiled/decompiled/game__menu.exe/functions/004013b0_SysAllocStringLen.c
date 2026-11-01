
/* ==== OLEAUT32.DLL::SysAllocStringLen @ 004013b0 ==== 
 * signature: BSTR __stdcall SysAllocStringLen(OLECHAR * strIn, UINT ui)
 * body: 004013b0-004013b5
 * thunk to: OLEAUT32.DLL::SysAllocStringLen
 */

BSTR __stdcall SysAllocStringLen(OLECHAR *strIn,UINT ui)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocStringLen(strIn,ui);
  return pOVar1;
}


