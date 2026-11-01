
/* ==== USER32.DLL::GetKeyNameTextA @ 00406650 ==== 
 * signature: int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize)
 * body: 00406650-00406655
 * thunk to: USER32.DLL::GetKeyNameTextA
 */

int __stdcall GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyNameTextA(lParam,lpString,cchSize);
  return iVar1;
}


