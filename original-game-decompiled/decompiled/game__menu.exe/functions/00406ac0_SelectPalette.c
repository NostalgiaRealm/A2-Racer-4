
/* ==== GDI32.DLL::SelectPalette @ 00406ac0 ==== 
 * signature: HPALETTE __stdcall SelectPalette(HDC hdc, HPALETTE hPal, BOOL bForceBkgd)
 * body: 00406ac0-00406ac5
 * thunk to: GDI32.DLL::SelectPalette
 */

HPALETTE __stdcall SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}


