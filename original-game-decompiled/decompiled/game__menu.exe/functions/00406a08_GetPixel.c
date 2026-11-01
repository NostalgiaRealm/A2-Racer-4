
/* ==== GDI32.DLL::GetPixel @ 00406a08 ==== 
 * signature: COLORREF __stdcall GetPixel(HDC hdc, int x, int y)
 * body: 00406a08-00406a0d
 * thunk to: GDI32.DLL::GetPixel
 */

COLORREF __stdcall GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}


