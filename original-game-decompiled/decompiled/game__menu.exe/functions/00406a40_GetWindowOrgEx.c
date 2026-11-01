
/* ==== GDI32.DLL::GetWindowOrgEx @ 00406a40 ==== 
 * signature: BOOL __stdcall GetWindowOrgEx(HDC hdc, LPPOINT lppoint)
 * body: 00406a40-00406a45
 * thunk to: GDI32.DLL::GetWindowOrgEx
 */

BOOL __stdcall GetWindowOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowOrgEx(hdc,lppoint);
  return BVar1;
}


