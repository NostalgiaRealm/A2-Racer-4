
/* ==== GDI32.DLL::GetWindowOrgEx @ 004063d8 ==== 
 * signature: BOOL __stdcall GetWindowOrgEx(HDC hdc, LPPOINT lppoint)
 * body: 004063d8-004063dd
 * thunk to: GDI32.DLL::GetWindowOrgEx
 */

BOOL __stdcall GetWindowOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowOrgEx(hdc,lppoint);
  return BVar1;
}


