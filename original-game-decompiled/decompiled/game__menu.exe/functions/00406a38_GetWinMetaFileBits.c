
/* ==== GDI32.DLL::GetWinMetaFileBits @ 00406a38 ==== 
 * signature: UINT __stdcall GetWinMetaFileBits(HENHMETAFILE hemf, UINT cbData16, LPBYTE pData16, INT iMapMode, HDC hdcRef)
 * body: 00406a38-00406a3d
 * thunk to: GDI32.DLL::GetWinMetaFileBits
 */

UINT __stdcall
GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWinMetaFileBits(hemf,cbData16,pData16,iMapMode,hdcRef);
  return UVar1;
}


