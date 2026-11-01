
/* ==== USER32.DLL::MapWindowPoints @ 004067e0 ==== 
 * signature: int __stdcall MapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
 * body: 004067e0-004067e5
 * thunk to: USER32.DLL::MapWindowPoints
 */

int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}


