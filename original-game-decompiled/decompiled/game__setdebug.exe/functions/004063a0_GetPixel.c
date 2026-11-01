
/* ==== GDI32.DLL::GetPixel @ 004063a0 ==== 
 * signature: COLORREF __stdcall GetPixel(HDC hdc, int x, int y)
 * body: 004063a0-004063a5
 * thunk to: GDI32.DLL::GetPixel
 */

COLORREF __stdcall GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}


