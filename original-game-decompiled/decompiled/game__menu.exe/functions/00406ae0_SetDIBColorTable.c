
/* ==== GDI32.DLL::SetDIBColorTable @ 00406ae0 ==== 
 * signature: UINT __stdcall SetDIBColorTable(HDC hdc, UINT iStart, UINT cEntries, RGBQUAD * prgbq)
 * body: 00406ae0-00406ae5
 * thunk to: GDI32.DLL::SetDIBColorTable
 */

UINT __stdcall SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


