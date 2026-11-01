
/* ==== GDI32.DLL::GetTextExtentPointA @ 004063c0 ==== 
 * signature: BOOL __stdcall GetTextExtentPointA(HDC hdc, LPCSTR lpString, int c, LPSIZE lpsz)
 * body: 004063c0-004063c5
 * thunk to: GDI32.DLL::GetTextExtentPointA
 */

BOOL __stdcall GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointA(hdc,lpString,c,lpsz);
  return BVar1;
}


