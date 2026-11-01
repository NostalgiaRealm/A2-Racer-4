
/* ==== GDI32.DLL::DeleteObject @ 00406328 ==== 
 * signature: BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * body: 00406328-0040632d
 * thunk to: GDI32.DLL::DeleteObject
 */

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


