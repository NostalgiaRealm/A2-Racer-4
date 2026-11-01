
/* ==== GDI32.DLL::RestoreDC @ 00406428 ==== 
 * signature: BOOL __stdcall RestoreDC(HDC hdc, int nSavedDC)
 * body: 00406428-0040642d
 * thunk to: GDI32.DLL::RestoreDC
 */

BOOL __stdcall RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RestoreDC(hdc,nSavedDC);
  return BVar1;
}


