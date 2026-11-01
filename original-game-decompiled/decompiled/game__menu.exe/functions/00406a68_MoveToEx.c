
/* ==== GDI32.DLL::MoveToEx @ 00406a68 ==== 
 * signature: BOOL __stdcall MoveToEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 00406a68-00406a6d
 * thunk to: GDI32.DLL::MoveToEx
 */

BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}


