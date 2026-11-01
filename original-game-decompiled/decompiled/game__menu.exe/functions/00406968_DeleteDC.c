
/* ==== GDI32.DLL::DeleteDC @ 00406968 ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 00406968-0040696d
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


