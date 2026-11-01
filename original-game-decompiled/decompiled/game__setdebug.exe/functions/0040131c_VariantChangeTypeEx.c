
/* ==== OLEAUT32.DLL::VariantChangeTypeEx @ 0040131c ==== 
 * signature: HRESULT __stdcall VariantChangeTypeEx(VARIANTARG * pvargDest, VARIANTARG * pvarSrc, LCID lcid, USHORT wFlags, VARTYPE vt)
 * body: 0040131c-00401321
 * thunk to: OLEAUT32.DLL::VariantChangeTypeEx
 */

HRESULT __stdcall
VariantChangeTypeEx(VARIANTARG *pvargDest,VARIANTARG *pvarSrc,LCID lcid,USHORT wFlags,VARTYPE vt)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantChangeTypeEx(pvargDest,pvarSrc,lcid,wFlags,vt);
  return HVar1;
}


