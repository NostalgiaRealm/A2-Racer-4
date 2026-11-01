
/* ==== GDI32.DLL::GetPaletteEntries @ 00406a00 ==== 
 * signature: UINT __stdcall GetPaletteEntries(HPALETTE hpal, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 00406a00-00406a05
 * thunk to: GDI32.DLL::GetPaletteEntries
 */

UINT __stdcall GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  return UVar1;
}


