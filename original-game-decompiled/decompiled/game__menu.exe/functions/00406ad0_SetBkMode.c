
/* ==== GDI32.DLL::SetBkMode @ 00406ad0 ==== 
 * signature: int __stdcall SetBkMode(HDC hdc, int mode)
 * body: 00406ad0-00406ad5
 * thunk to: GDI32.DLL::SetBkMode
 */

int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}


