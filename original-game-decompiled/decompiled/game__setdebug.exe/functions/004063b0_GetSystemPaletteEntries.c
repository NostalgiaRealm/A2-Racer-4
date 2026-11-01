
/* ==== GDI32.DLL::GetSystemPaletteEntries @ 004063b0 ==== 
 * signature: UINT __stdcall GetSystemPaletteEntries(HDC hdc, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 004063b0-004063b5
 * thunk to: GDI32.DLL::GetSystemPaletteEntries
 */

UINT __stdcall GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}


