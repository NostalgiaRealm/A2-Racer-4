
/* ==== USER32.DLL::GetCursorPos @ 00406cd8 ==== 
 * signature: BOOL __stdcall GetCursorPos(LPPOINT lpPoint)
 * body: 00406cd8-00406cdd
 * thunk to: USER32.DLL::GetCursorPos
 */

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}


