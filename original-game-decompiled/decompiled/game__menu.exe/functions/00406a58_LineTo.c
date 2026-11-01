
/* ==== GDI32.DLL::LineTo @ 00406a58 ==== 
 * signature: BOOL __stdcall LineTo(HDC hdc, int x, int y)
 * body: 00406a58-00406a5d
 * thunk to: GDI32.DLL::LineTo
 */

BOOL __stdcall LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}


