
/* ==== GDI32.DLL::GetDIBColorTable @ 004069c0 ==== 
 * signature: UINT __stdcall GetDIBColorTable(HDC hdc, UINT iStart, UINT cEntries, RGBQUAD * prgbq)
 * body: 004069c0-004069c5
 * thunk to: GDI32.DLL::GetDIBColorTable
 */

UINT __stdcall GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


