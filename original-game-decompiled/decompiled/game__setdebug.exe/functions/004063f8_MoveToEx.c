
/* ==== GDI32.DLL::MoveToEx @ 004063f8 ==== 
 * signature: BOOL __stdcall MoveToEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004063f8-004063fd
 * thunk to: GDI32.DLL::MoveToEx
 */

BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}


