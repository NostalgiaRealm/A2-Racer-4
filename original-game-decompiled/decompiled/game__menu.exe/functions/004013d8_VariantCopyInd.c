
/* ==== OLEAUT32.DLL::VariantCopyInd @ 004013d8 ==== 
 * signature: HRESULT __stdcall VariantCopyInd(VARIANT * pvarDest, VARIANTARG * pvargSrc)
 * body: 004013d8-004013dd
 * thunk to: OLEAUT32.DLL::VariantCopyInd
 */

HRESULT __stdcall VariantCopyInd(VARIANT *pvarDest,VARIANTARG *pvargSrc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantCopyInd(pvarDest,pvargSrc);
  return HVar1;
}


