
/* ==== GDI32.DLL::GetEnhMetaFileDescriptionA @ 004069e0 ==== 
 * signature: UINT __stdcall GetEnhMetaFileDescriptionA(HENHMETAFILE hemf, UINT cchBuffer, LPSTR lpDescription)
 * body: 004069e0-004069e5
 * thunk to: GDI32.DLL::GetEnhMetaFileDescriptionA
 */

UINT __stdcall GetEnhMetaFileDescriptionA(HENHMETAFILE hemf,UINT cchBuffer,LPSTR lpDescription)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileDescriptionA(hemf,cchBuffer,lpDescription);
  return UVar1;
}


