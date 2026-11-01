
/* ==== OLEAUT32.DLL::VariantClear @ 0040130c ==== 
 * signature: HRESULT __stdcall VariantClear(VARIANTARG * pvarg)
 * body: 0040130c-00401311
 * thunk to: OLEAUT32.DLL::VariantClear
 */

HRESULT __stdcall VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantClear(pvarg);
  return HVar1;
}


