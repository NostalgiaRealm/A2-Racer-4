
/* ==== GDI32.DLL::CopyEnhMetaFileA @ 004068e0 ==== 
 * signature: HENHMETAFILE __stdcall CopyEnhMetaFileA(HENHMETAFILE hEnh, LPCSTR lpFileName)
 * body: 004068e0-004068e5
 * thunk to: GDI32.DLL::CopyEnhMetaFileA
 */

HENHMETAFILE __stdcall CopyEnhMetaFileA(HENHMETAFILE hEnh,LPCSTR lpFileName)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CopyEnhMetaFileA(hEnh,lpFileName);
  return pHVar1;
}


