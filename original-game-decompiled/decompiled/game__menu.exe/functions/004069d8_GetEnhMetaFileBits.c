
/* ==== GDI32.DLL::GetEnhMetaFileBits @ 004069d8 ==== 
 * signature: UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF, UINT nSize, LPBYTE lpData)
 * body: 004069d8-004069dd
 * thunk to: GDI32.DLL::GetEnhMetaFileBits
 */

UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileBits(hEMF,nSize,lpData);
  return UVar1;
}


