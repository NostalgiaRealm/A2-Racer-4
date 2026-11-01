
/* ==== OLEAUT32.DLL::SysStringLen @ 00401304 ==== 
 * signature: UINT __stdcall SysStringLen(BSTR param_1)
 * body: 00401304-00401309
 * thunk to: OLEAUT32.DLL::SysStringLen
 */

UINT __stdcall SysStringLen(BSTR param_1)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SysStringLen(param_1);
  return UVar1;
}


