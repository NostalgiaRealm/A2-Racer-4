
/* ==== GDI32.DLL::CreateHalftonePalette @ 004062f8 ==== 
 * signature: HPALETTE __stdcall CreateHalftonePalette(HDC hdc)
 * body: 004062f8-004062fd
 * thunk to: GDI32.DLL::CreateHalftonePalette
 */

HPALETTE __stdcall CreateHalftonePalette(HDC hdc)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateHalftonePalette(hdc);
  return pHVar1;
}


