
/* ==== GDI32.DLL::CreateHalftonePalette @ 00406930 ==== 
 * signature: HPALETTE __stdcall CreateHalftonePalette(HDC hdc)
 * body: 00406930-00406935
 * thunk to: GDI32.DLL::CreateHalftonePalette
 */

HPALETTE __stdcall CreateHalftonePalette(HDC hdc)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateHalftonePalette(hdc);
  return pHVar1;
}


