
/* ==== OLEAUT32.DLL::VariantClear @ 004013d0 ==== 
 * signature: HRESULT __stdcall VariantClear(VARIANTARG * pvarg)
 * body: 004013d0-004013d5
 * thunk to: OLEAUT32.DLL::VariantClear
 */

HRESULT __stdcall VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantClear(pvarg);
  return HVar1;
}


