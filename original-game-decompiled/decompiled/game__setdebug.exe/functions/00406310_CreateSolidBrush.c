
/* ==== GDI32.DLL::CreateSolidBrush @ 00406310 ==== 
 * signature: HBRUSH __stdcall CreateSolidBrush(COLORREF color)
 * body: 00406310-00406315
 * thunk to: GDI32.DLL::CreateSolidBrush
 */

HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}


