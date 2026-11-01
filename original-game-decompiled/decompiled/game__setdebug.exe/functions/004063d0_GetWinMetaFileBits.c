
/* ==== GDI32.DLL::GetWinMetaFileBits @ 004063d0 ==== 
 * signature: UINT __stdcall GetWinMetaFileBits(HENHMETAFILE hemf, UINT cbData16, LPBYTE pData16, INT iMapMode, HDC hdcRef)
 * body: 004063d0-004063d5
 * thunk to: GDI32.DLL::GetWinMetaFileBits
 */

UINT __stdcall
GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWinMetaFileBits(hemf,cbData16,pData16,iMapMode,hdcRef);
  return UVar1;
}


