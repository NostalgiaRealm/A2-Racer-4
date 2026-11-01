
/* ==== USER32.DLL::BeginPaint @ 00406b60 ==== 
 * signature: HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
 * body: 00406b60-00406b65
 * thunk to: USER32.DLL::BeginPaint
 */

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


