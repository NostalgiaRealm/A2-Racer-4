
/* ==== GDI32.DLL::SetStretchBltMode @ 00406480 ==== 
 * signature: int __stdcall SetStretchBltMode(HDC hdc, int mode)
 * body: 00406480-00406485
 * thunk to: GDI32.DLL::SetStretchBltMode
 */

int __stdcall SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}


