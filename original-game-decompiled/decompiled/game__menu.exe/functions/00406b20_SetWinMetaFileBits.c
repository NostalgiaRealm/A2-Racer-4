
/* ==== GDI32.DLL::SetWinMetaFileBits @ 00406b20 ==== 
 * signature: HENHMETAFILE __stdcall SetWinMetaFileBits(UINT nSize, BYTE * lpMeta16Data, HDC hdcRef, METAFILEPICT * lpMFP)
 * body: 00406b20-00406b25
 * thunk to: GDI32.DLL::SetWinMetaFileBits
 */

HENHMETAFILE __stdcall
SetWinMetaFileBits(UINT nSize,BYTE *lpMeta16Data,HDC hdcRef,METAFILEPICT *lpMFP)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWinMetaFileBits(nSize,lpMeta16Data,hdcRef,lpMFP);
  return pHVar1;
}


