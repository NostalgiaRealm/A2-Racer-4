
/* ==== GDI32.DLL::Rectangle @ 00406a98 ==== 
 * signature: BOOL __stdcall Rectangle(HDC hdc, int left, int top, int right, int bottom)
 * body: 00406a98-00406a9d
 * thunk to: GDI32.DLL::Rectangle
 */

BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}


