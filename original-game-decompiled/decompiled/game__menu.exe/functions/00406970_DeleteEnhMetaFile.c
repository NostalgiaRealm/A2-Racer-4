
/* ==== GDI32.DLL::DeleteEnhMetaFile @ 00406970 ==== 
 * signature: BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf)
 * body: 00406970-00406975
 * thunk to: GDI32.DLL::DeleteEnhMetaFile
 */

BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteEnhMetaFile(hmf);
  return BVar1;
}


