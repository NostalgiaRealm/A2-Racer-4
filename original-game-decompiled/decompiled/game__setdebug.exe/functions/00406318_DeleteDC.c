
/* ==== GDI32.DLL::DeleteDC @ 00406318 ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 00406318-0040631d
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


