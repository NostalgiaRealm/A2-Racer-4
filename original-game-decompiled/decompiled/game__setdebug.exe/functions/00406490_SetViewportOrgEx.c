
/* ==== GDI32.DLL::SetViewportOrgEx @ 00406490 ==== 
 * signature: BOOL __stdcall SetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 00406490-00406495
 * thunk to: GDI32.DLL::SetViewportOrgEx
 */

BOOL __stdcall SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}


