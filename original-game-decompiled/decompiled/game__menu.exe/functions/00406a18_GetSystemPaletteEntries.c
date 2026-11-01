
/* ==== GDI32.DLL::GetSystemPaletteEntries @ 00406a18 ==== 
 * signature: UINT __stdcall GetSystemPaletteEntries(HDC hdc, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 00406a18-00406a1d
 * thunk to: GDI32.DLL::GetSystemPaletteEntries
 */

UINT __stdcall GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}


