
/* ==== USER32.DLL::DrawTextA @ 00406c38 ==== 
 * signature: int __stdcall DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
 * body: 00406c38-00406c3d
 * thunk to: USER32.DLL::DrawTextA
 */

int __stdcall DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}


