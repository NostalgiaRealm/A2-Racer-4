
/* ==== GDI32.DLL::GetCurrentPositionEx @ 00406350 ==== 
 * signature: BOOL __stdcall GetCurrentPositionEx(HDC hdc, LPPOINT lppt)
 * body: 00406350-00406355
 * thunk to: GDI32.DLL::GetCurrentPositionEx
 */

BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}


