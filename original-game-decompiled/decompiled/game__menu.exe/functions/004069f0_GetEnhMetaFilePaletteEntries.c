
/* ==== GDI32.DLL::GetEnhMetaFilePaletteEntries @ 004069f0 ==== 
 * signature: UINT __stdcall GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf, UINT nNumEntries, LPPALETTEENTRY lpPaletteEntries)
 * body: 004069f0-004069f5
 * thunk to: GDI32.DLL::GetEnhMetaFilePaletteEntries
 */

UINT __stdcall
GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFilePaletteEntries(hemf,nNumEntries,lpPaletteEntries);
  return UVar1;
}


