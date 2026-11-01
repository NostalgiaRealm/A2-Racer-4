
/* ==== USER32.DLL::DrawTextA @ 00406590 ==== 
 * signature: int __stdcall DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
 * body: 00406590-00406595
 * thunk to: USER32.DLL::DrawTextA
 */

int __stdcall DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}


