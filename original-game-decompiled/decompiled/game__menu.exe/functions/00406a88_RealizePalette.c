
/* ==== GDI32.DLL::RealizePalette @ 00406a88 ==== 
 * signature: UINT __stdcall RealizePalette(HDC hdc)
 * body: 00406a88-00406a8d
 * thunk to: GDI32.DLL::RealizePalette
 */

UINT __stdcall RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}


