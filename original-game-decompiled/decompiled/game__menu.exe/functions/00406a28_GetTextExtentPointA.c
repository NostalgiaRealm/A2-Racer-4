
/* ==== GDI32.DLL::GetTextExtentPointA @ 00406a28 ==== 
 * signature: BOOL __stdcall GetTextExtentPointA(HDC hdc, LPCSTR lpString, int c, LPSIZE lpsz)
 * body: 00406a28-00406a2d
 * thunk to: GDI32.DLL::GetTextExtentPointA
 */

BOOL __stdcall GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointA(hdc,lpString,c,lpsz);
  return BVar1;
}


