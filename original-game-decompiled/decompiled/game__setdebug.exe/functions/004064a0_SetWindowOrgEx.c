
/* ==== GDI32.DLL::SetWindowOrgEx @ 004064a0 ==== 
 * signature: BOOL __stdcall SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004064a0-004064a5
 * thunk to: GDI32.DLL::SetWindowOrgEx
 */

BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}


