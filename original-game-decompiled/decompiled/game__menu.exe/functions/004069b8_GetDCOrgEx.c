
/* ==== GDI32.DLL::GetDCOrgEx @ 004069b8 ==== 
 * signature: BOOL __stdcall GetDCOrgEx(HDC hdc, LPPOINT lppt)
 * body: 004069b8-004069bd
 * thunk to: GDI32.DLL::GetDCOrgEx
 */

BOOL __stdcall GetDCOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDCOrgEx(hdc,lppt);
  return BVar1;
}


