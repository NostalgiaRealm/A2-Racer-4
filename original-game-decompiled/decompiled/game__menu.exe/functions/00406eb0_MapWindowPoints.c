
/* ==== USER32.DLL::MapWindowPoints @ 00406eb0 ==== 
 * signature: int __stdcall MapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
 * body: 00406eb0-00406eb5
 * thunk to: USER32.DLL::MapWindowPoints
 */

int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}


