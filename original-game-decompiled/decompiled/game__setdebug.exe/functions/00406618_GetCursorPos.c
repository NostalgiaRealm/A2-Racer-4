
/* ==== USER32.DLL::GetCursorPos @ 00406618 ==== 
 * signature: BOOL __stdcall GetCursorPos(LPPOINT lpPoint)
 * body: 00406618-0040661d
 * thunk to: USER32.DLL::GetCursorPos
 */

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}


