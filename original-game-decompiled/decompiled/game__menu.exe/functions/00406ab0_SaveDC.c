
/* ==== GDI32.DLL::SaveDC @ 00406ab0 ==== 
 * signature: int __stdcall SaveDC(HDC hdc)
 * body: 00406ab0-00406ab5
 * thunk to: GDI32.DLL::SaveDC
 */

int __stdcall SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}


