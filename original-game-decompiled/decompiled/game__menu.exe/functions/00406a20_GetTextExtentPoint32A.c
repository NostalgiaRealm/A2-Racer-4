
/* ==== GDI32.DLL::GetTextExtentPoint32A @ 00406a20 ==== 
 * signature: BOOL __stdcall GetTextExtentPoint32A(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl)
 * body: 00406a20-00406a25
 * thunk to: GDI32.DLL::GetTextExtentPoint32A
 */

BOOL __stdcall GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return BVar1;
}


