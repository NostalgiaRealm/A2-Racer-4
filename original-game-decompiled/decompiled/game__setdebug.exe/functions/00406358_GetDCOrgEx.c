
/* ==== GDI32.DLL::GetDCOrgEx @ 00406358 ==== 
 * signature: BOOL __stdcall GetDCOrgEx(HDC hdc, LPPOINT lppt)
 * body: 00406358-0040635d
 * thunk to: GDI32.DLL::GetDCOrgEx
 */

BOOL __stdcall GetDCOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDCOrgEx(hdc,lppt);
  return BVar1;
}


