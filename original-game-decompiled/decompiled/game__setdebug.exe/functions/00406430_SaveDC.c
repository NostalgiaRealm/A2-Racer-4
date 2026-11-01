
/* ==== GDI32.DLL::SaveDC @ 00406430 ==== 
 * signature: int __stdcall SaveDC(HDC hdc)
 * body: 00406430-00406435
 * thunk to: GDI32.DLL::SaveDC
 */

int __stdcall SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}


