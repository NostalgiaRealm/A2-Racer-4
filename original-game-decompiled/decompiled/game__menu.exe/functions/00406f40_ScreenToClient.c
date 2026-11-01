
/* ==== USER32.DLL::ScreenToClient @ 00406f40 ==== 
 * signature: BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
 * body: 00406f40-00406f45
 * thunk to: USER32.DLL::ScreenToClient
 */

BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}


