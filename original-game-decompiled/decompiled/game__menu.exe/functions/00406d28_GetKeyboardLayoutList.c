
/* ==== USER32.DLL::GetKeyboardLayoutList @ 00406d28 ==== 
 * signature: int __stdcall GetKeyboardLayoutList(int nBuff, HKL * lpList)
 * body: 00406d28-00406d2d
 * thunk to: USER32.DLL::GetKeyboardLayoutList
 */

int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardLayoutList(nBuff,lpList);
  return iVar1;
}


