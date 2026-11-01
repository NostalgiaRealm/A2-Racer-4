
/* ==== GDI32.DLL::SetBrushOrgEx @ 00406ad8 ==== 
 * signature: BOOL __stdcall SetBrushOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 00406ad8-00406add
 * thunk to: GDI32.DLL::SetBrushOrgEx
 */

BOOL __stdcall SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetBrushOrgEx(hdc,x,y,lppt);
  return BVar1;
}


