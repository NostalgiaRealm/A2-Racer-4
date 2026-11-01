
/* ==== GDI32.DLL::CreatePalette @ 00406938 ==== 
 * signature: HPALETTE __stdcall CreatePalette(LOGPALETTE * plpal)
 * body: 00406938-0040693d
 * thunk to: GDI32.DLL::CreatePalette
 */

HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}


