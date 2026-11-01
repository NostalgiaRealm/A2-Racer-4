
/* ==== GDI32.DLL::SetBkColor @ 00406448 ==== 
 * signature: COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
 * body: 00406448-0040644d
 * thunk to: GDI32.DLL::SetBkColor
 */

COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}


