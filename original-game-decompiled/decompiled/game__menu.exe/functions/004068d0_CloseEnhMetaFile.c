
/* ==== GDI32.DLL::CloseEnhMetaFile @ 004068d0 ==== 
 * signature: HENHMETAFILE __stdcall CloseEnhMetaFile(HDC hdc)
 * body: 004068d0-004068d5
 * thunk to: GDI32.DLL::CloseEnhMetaFile
 */

HENHMETAFILE __stdcall CloseEnhMetaFile(HDC hdc)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CloseEnhMetaFile(hdc);
  return pHVar1;
}


