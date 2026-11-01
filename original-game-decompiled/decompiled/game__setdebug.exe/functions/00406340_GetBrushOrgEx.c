
/* ==== GDI32.DLL::GetBrushOrgEx @ 00406340 ==== 
 * signature: BOOL __stdcall GetBrushOrgEx(HDC hdc, LPPOINT lppt)
 * body: 00406340-00406345
 * thunk to: GDI32.DLL::GetBrushOrgEx
 */

BOOL __stdcall GetBrushOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetBrushOrgEx(hdc,lppt);
  return BVar1;
}


