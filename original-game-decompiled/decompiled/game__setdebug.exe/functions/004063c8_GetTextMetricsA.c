
/* ==== GDI32.DLL::GetTextMetricsA @ 004063c8 ==== 
 * signature: BOOL __stdcall GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)
 * body: 004063c8-004063cd
 * thunk to: GDI32.DLL::GetTextMetricsA
 */

BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}


