
/* ==== OLEAUT32.DLL::SysAllocStringLen @ 004012ec ==== 
 * signature: BSTR __stdcall SysAllocStringLen(OLECHAR * strIn, UINT ui)
 * body: 004012ec-004012f1
 * thunk to: OLEAUT32.DLL::SysAllocStringLen
 */

BSTR __stdcall SysAllocStringLen(OLECHAR *strIn,UINT ui)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocStringLen(strIn,ui);
  return pOVar1;
}


