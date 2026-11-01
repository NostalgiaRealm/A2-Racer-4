
/* ==== GDI32.DLL::SetPixel @ 00406af8 ==== 
 * signature: COLORREF __stdcall SetPixel(HDC hdc, int x, int y, COLORREF color)
 * body: 00406af8-00406afd
 * thunk to: GDI32.DLL::SetPixel
 */

COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}


