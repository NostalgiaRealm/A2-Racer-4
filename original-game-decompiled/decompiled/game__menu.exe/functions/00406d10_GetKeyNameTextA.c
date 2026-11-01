
/* ==== USER32.DLL::GetKeyNameTextA @ 00406d10 ==== 
 * signature: int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize)
 * body: 00406d10-00406d15
 * thunk to: USER32.DLL::GetKeyNameTextA
 */

int __stdcall GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyNameTextA(lParam,lpString,cchSize);
  return iVar1;
}


