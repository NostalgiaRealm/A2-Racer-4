
/* ==== GDI32.DLL::SetEnhMetaFileBits @ 00406468 ==== 
 * signature: HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize, BYTE * pb)
 * body: 00406468-0040646d
 * thunk to: GDI32.DLL::SetEnhMetaFileBits
 */

HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize,BYTE *pb)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetEnhMetaFileBits(nSize,pb);
  return pHVar1;
}


