
/* ==== USER32.DLL::KillTimer @ 00406e78 ==== 
 * signature: BOOL __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent)
 * body: 00406e78-00406e7d
 * thunk to: USER32.DLL::KillTimer
 */

BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}


