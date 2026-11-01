
/* ==== USER32.DLL::KillTimer @ 004067a8 ==== 
 * signature: BOOL __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent)
 * body: 004067a8-004067ad
 * thunk to: USER32.DLL::KillTimer
 */

BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}


