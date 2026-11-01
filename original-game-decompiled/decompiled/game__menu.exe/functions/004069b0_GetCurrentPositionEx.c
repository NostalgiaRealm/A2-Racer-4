
/* ==== GDI32.DLL::GetCurrentPositionEx @ 004069b0 ==== 
 * signature: BOOL __stdcall GetCurrentPositionEx(HDC hdc, LPPOINT lppt)
 * body: 004069b0-004069b5
 * thunk to: GDI32.DLL::GetCurrentPositionEx
 */

BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}


