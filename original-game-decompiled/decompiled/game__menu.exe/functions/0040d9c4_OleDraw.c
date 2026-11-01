
/* ==== OLE32.DLL::OleDraw @ 0040d9c4 ==== 
 * signature: HRESULT __stdcall OleDraw(LPUNKNOWN pUnknown, DWORD dwAspect, HDC hdcDraw, LPCRECT lprcBounds)
 * body: 0040d9c4-0040d9c9
 * thunk to: OLE32.DLL::OleDraw
 */

HRESULT __stdcall OleDraw(LPUNKNOWN pUnknown,DWORD dwAspect,HDC hdcDraw,LPCRECT lprcBounds)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = OleDraw(pUnknown,dwAspect,hdcDraw,lprcBounds);
  return HVar1;
}


