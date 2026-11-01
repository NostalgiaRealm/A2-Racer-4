
/* ==== USER32.DLL::ClientToScreen @ 004064f8 ==== 
 * signature: BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
 * body: 004064f8-004064fd
 * thunk to: USER32.DLL::ClientToScreen
 */

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}


