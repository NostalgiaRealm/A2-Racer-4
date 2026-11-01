
/* ==== OLEAUT32.DLL::VariantChangeTypeEx @ 004013e0 ==== 
 * signature: HRESULT __stdcall VariantChangeTypeEx(VARIANTARG * pvargDest, VARIANTARG * pvarSrc, LCID lcid, USHORT wFlags, VARTYPE vt)
 * body: 004013e0-004013e5
 * thunk to: OLEAUT32.DLL::VariantChangeTypeEx
 */

HRESULT __stdcall
VariantChangeTypeEx(VARIANTARG *pvargDest,VARIANTARG *pvarSrc,LCID lcid,USHORT wFlags,VARTYPE vt)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantChangeTypeEx(pvargDest,pvarSrc,lcid,wFlags,vt);
  return HVar1;
}


