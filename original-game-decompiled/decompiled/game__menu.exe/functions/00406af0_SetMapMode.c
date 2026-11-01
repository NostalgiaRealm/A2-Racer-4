
/* ==== GDI32.DLL::SetMapMode @ 00406af0 ==== 
 * signature: int __stdcall SetMapMode(HDC hdc, int iMode)
 * body: 00406af0-00406af5
 * thunk to: GDI32.DLL::SetMapMode
 */

int __stdcall SetMapMode(HDC hdc,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMapMode(hdc,iMode);
  return iVar1;
}


