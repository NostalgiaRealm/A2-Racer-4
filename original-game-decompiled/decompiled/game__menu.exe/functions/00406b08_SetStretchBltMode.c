
/* ==== GDI32.DLL::SetStretchBltMode @ 00406b08 ==== 
 * signature: int __stdcall SetStretchBltMode(HDC hdc, int mode)
 * body: 00406b08-00406b0d
 * thunk to: GDI32.DLL::SetStretchBltMode
 */

int __stdcall SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}


