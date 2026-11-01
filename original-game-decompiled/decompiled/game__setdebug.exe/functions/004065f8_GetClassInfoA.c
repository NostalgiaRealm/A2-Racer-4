
/* ==== USER32.DLL::GetClassInfoA @ 004065f8 ==== 
 * signature: BOOL __stdcall GetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass)
 * body: 004065f8-004065fd
 * thunk to: USER32.DLL::GetClassInfoA
 */

BOOL __stdcall GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}


