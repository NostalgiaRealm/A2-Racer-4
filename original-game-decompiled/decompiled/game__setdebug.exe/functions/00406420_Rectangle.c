
/* ==== GDI32.DLL::Rectangle @ 00406420 ==== 
 * signature: BOOL __stdcall Rectangle(HDC hdc, int left, int top, int right, int bottom)
 * body: 00406420-00406425
 * thunk to: GDI32.DLL::Rectangle
 */

BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}


