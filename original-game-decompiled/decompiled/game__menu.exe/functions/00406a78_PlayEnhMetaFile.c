
/* ==== GDI32.DLL::PlayEnhMetaFile @ 00406a78 ==== 
 * signature: BOOL __stdcall PlayEnhMetaFile(HDC hdc, HENHMETAFILE hmf, RECT * lprect)
 * body: 00406a78-00406a7d
 * thunk to: GDI32.DLL::PlayEnhMetaFile
 */

BOOL __stdcall PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PlayEnhMetaFile(hdc,hmf,lprect);
  return BVar1;
}


