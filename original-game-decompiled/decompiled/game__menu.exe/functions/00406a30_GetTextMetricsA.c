
/* ==== GDI32.DLL::GetTextMetricsA @ 00406a30 ==== 
 * signature: BOOL __stdcall GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)
 * body: 00406a30-00406a35
 * thunk to: GDI32.DLL::GetTextMetricsA
 */

BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}


