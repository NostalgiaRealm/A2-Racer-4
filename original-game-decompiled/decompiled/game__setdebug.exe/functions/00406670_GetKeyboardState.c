
/* ==== USER32.DLL::GetKeyboardState @ 00406670 ==== 
 * signature: BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)
 * body: 00406670-00406675
 * thunk to: USER32.DLL::GetKeyboardState
 */

BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetKeyboardState(lpKeyState);
  return BVar1;
}


