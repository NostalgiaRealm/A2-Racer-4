
/* ==== GDI32.DLL::SetEnhMetaFileBits @ 00406ae8 ==== 
 * signature: HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize, BYTE * pb)
 * body: 00406ae8-00406aed
 * thunk to: GDI32.DLL::SetEnhMetaFileBits
 */

HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize,BYTE *pb)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetEnhMetaFileBits(nSize,pb);
  return pHVar1;
}


