
/* ==== GDI32.DLL::SelectPalette @ 00406440 ==== 
 * signature: HPALETTE __stdcall SelectPalette(HDC hdc, HPALETTE hPal, BOOL bForceBkgd)
 * body: 00406440-00406445
 * thunk to: GDI32.DLL::SelectPalette
 */

HPALETTE __stdcall SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}


