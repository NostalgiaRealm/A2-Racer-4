
/* ==== GDI32.DLL::GetEnhMetaFilePaletteEntries @ 00406388 ==== 
 * signature: UINT __stdcall GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf, UINT nNumEntries, LPPALETTEENTRY lpPaletteEntries)
 * body: 00406388-0040638d
 * thunk to: GDI32.DLL::GetEnhMetaFilePaletteEntries
 */

UINT __stdcall
GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFilePaletteEntries(hemf,nNumEntries,lpPaletteEntries);
  return UVar1;
}


