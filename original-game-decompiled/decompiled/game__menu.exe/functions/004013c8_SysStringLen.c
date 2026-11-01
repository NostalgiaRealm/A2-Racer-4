
/* ==== OLEAUT32.DLL::SysStringLen @ 004013c8 ==== 
 * signature: UINT __stdcall SysStringLen(BSTR param_1)
 * body: 004013c8-004013cd
 * thunk to: OLEAUT32.DLL::SysStringLen
 */

UINT __stdcall SysStringLen(BSTR param_1)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SysStringLen(param_1);
  return UVar1;
}


