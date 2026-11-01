
/* ==== GDI32.DLL::GetEnhMetaFileHeader @ 00406380 ==== 
 * signature: UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf, UINT nSize, LPENHMETAHEADER lpEnhMetaHeader)
 * body: 00406380-00406385
 * thunk to: GDI32.DLL::GetEnhMetaFileHeader
 */

UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileHeader(hemf,nSize,lpEnhMetaHeader);
  return UVar1;
}


