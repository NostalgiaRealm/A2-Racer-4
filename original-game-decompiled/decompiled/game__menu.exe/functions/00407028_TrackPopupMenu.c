
/* ==== USER32.DLL::TrackPopupMenu @ 00407028 ==== 
 * signature: BOOL __stdcall TrackPopupMenu(HMENU hMenu, UINT uFlags, int x, int y, int nReserved, HWND hWnd, RECT * prcRect)
 * body: 00407028-0040702d
 * thunk to: USER32.DLL::TrackPopupMenu
 */

BOOL __stdcall
TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}


