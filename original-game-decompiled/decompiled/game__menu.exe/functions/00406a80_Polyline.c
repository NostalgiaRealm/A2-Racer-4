
/* ==== GDI32.DLL::Polyline @ 00406a80 ==== 
 * signature: BOOL __stdcall Polyline(HDC hdc, POINT * apt, int cpt)
 * body: 00406a80-00406a85
 * thunk to: GDI32.DLL::Polyline
 */

BOOL __stdcall Polyline(HDC hdc,POINT *apt,int cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Polyline(hdc,apt,cpt);
  return BVar1;
}


