
/* ==== OLEAUT32.DLL::VariantCopyInd @ 00401314 ==== 
 * signature: HRESULT __stdcall VariantCopyInd(VARIANT * pvarDest, VARIANTARG * pvargSrc)
 * body: 00401314-00401319
 * thunk to: OLEAUT32.DLL::VariantCopyInd
 */

HRESULT __stdcall VariantCopyInd(VARIANT *pvarDest,VARIANTARG *pvargSrc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantCopyInd(pvarDest,pvargSrc);
  return HVar1;
}


