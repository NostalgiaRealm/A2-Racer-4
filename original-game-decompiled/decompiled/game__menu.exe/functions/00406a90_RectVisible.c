
/* ==== GDI32.DLL::RectVisible @ 00406a90 ==== 
 * signature: BOOL __stdcall RectVisible(HDC hdc, RECT * lprect)
 * body: 00406a90-00406a95
 * thunk to: GDI32.DLL::RectVisible
 */

BOOL __stdcall RectVisible(HDC hdc,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RectVisible(hdc,lprect);
  return BVar1;
}


