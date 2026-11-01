
/* ==== GDI32.DLL::CreatePalette @ 00406300 ==== 
 * signature: HPALETTE __stdcall CreatePalette(LOGPALETTE * plpal)
 * body: 00406300-00406305
 * thunk to: GDI32.DLL::CreatePalette
 */

HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}


