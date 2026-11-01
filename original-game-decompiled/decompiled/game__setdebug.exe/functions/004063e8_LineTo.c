
/* ==== GDI32.DLL::LineTo @ 004063e8 ==== 
 * signature: BOOL __stdcall LineTo(HDC hdc, int x, int y)
 * body: 004063e8-004063ed
 * thunk to: GDI32.DLL::LineTo
 */

BOOL __stdcall LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}


