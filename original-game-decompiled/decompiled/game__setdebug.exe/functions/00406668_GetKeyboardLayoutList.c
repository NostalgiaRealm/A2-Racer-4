
/* ==== USER32.DLL::GetKeyboardLayoutList @ 00406668 ==== 
 * signature: int __stdcall GetKeyboardLayoutList(int nBuff, HKL * lpList)
 * body: 00406668-0040666d
 * thunk to: USER32.DLL::GetKeyboardLayoutList
 */

int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardLayoutList(nBuff,lpList);
  return iVar1;
}


