
/* ==== GDI32.DLL::SetWindowOrgEx @ 00406b28 ==== 
 * signature: BOOL __stdcall SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 00406b28-00406b2d
 * thunk to: GDI32.DLL::SetWindowOrgEx
 */

BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}


