
/* ==== GDI32.DLL::SetWinMetaFileBits @ 00406498 ==== 
 * signature: HENHMETAFILE __stdcall SetWinMetaFileBits(UINT nSize, BYTE * lpMeta16Data, HDC hdcRef, METAFILEPICT * lpMFP)
 * body: 00406498-0040649d
 * thunk to: GDI32.DLL::SetWinMetaFileBits
 */

HENHMETAFILE __stdcall
SetWinMetaFileBits(UINT nSize,BYTE *lpMeta16Data,HDC hdcRef,METAFILEPICT *lpMFP)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWinMetaFileBits(nSize,lpMeta16Data,hdcRef,lpMFP);
  return pHVar1;
}


