
/* ==== GDI32.DLL::RealizePalette @ 00406410 ==== 
 * signature: UINT __stdcall RealizePalette(HDC hdc)
 * body: 00406410-00406415
 * thunk to: GDI32.DLL::RealizePalette
 */

UINT __stdcall RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}


