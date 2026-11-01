
/* ==== GDI32.DLL::GetBrushOrgEx @ 004069a0 ==== 
 * signature: BOOL __stdcall GetBrushOrgEx(HDC hdc, LPPOINT lppt)
 * body: 004069a0-004069a5
 * thunk to: GDI32.DLL::GetBrushOrgEx
 */

BOOL __stdcall GetBrushOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetBrushOrgEx(hdc,lppt);
  return BVar1;
}


