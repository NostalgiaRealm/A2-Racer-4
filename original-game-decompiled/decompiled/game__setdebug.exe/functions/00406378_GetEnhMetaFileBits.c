
/* ==== GDI32.DLL::GetEnhMetaFileBits @ 00406378 ==== 
 * signature: UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF, UINT nSize, LPBYTE lpData)
 * body: 00406378-0040637d
 * thunk to: GDI32.DLL::GetEnhMetaFileBits
 */

UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileBits(hEMF,nSize,lpData);
  return UVar1;
}


