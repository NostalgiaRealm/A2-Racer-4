
/* ==== GDI32.DLL::GetEnhMetaFileHeader @ 004069e8 ==== 
 * signature: UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf, UINT nSize, LPENHMETAHEADER lpEnhMetaHeader)
 * body: 004069e8-004069ed
 * thunk to: GDI32.DLL::GetEnhMetaFileHeader
 */

UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileHeader(hemf,nSize,lpEnhMetaHeader);
  return UVar1;
}


