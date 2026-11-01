
/* ==== USER32.DLL::OpenClipboard @ 00406ed8 ==== 
 * signature: BOOL __stdcall OpenClipboard(HWND hWndNewOwner)
 * body: 00406ed8-00406edd
 * thunk to: USER32.DLL::OpenClipboard
 */

BOOL __stdcall OpenClipboard(HWND hWndNewOwner)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenClipboard(hWndNewOwner);
  return BVar1;
}


