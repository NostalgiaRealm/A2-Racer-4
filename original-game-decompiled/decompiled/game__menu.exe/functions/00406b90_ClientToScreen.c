
/* ==== USER32.DLL::ClientToScreen @ 00406b90 ==== 
 * signature: BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
 * body: 00406b90-00406b95
 * thunk to: USER32.DLL::ClientToScreen
 */

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}


