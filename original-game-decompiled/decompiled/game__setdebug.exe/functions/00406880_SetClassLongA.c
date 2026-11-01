
/* ==== USER32.DLL::SetClassLongA @ 00406880 ==== 
 * signature: DWORD __stdcall SetClassLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * body: 00406880-00406885
 * thunk to: USER32.DLL::SetClassLongA
 */

DWORD __stdcall SetClassLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetClassLongA(hWnd,nIndex,dwNewLong);
  return DVar1;
}


