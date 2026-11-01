
/* ==== GDI32.DLL::SetTextColor @ 00406488 ==== 
 * signature: COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
 * body: 00406488-0040648d
 * thunk to: GDI32.DLL::SetTextColor
 */

COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}


