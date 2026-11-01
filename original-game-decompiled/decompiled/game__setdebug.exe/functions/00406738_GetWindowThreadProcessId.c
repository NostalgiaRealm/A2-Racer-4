
/* ==== USER32.DLL::GetWindowThreadProcessId @ 00406738 ==== 
 * signature: DWORD __stdcall GetWindowThreadProcessId(HWND hWnd, LPDWORD lpdwProcessId)
 * body: 00406738-0040673d
 * thunk to: USER32.DLL::GetWindowThreadProcessId
 */

DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}


