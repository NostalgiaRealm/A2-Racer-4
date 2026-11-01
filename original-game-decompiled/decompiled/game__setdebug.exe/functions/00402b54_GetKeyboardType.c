
/* ==== USER32.DLL::GetKeyboardType @ 00402b54 ==== 
 * signature: int __stdcall GetKeyboardType(int nTypeFlag)
 * body: 00402b54-00402b59
 * thunk to: USER32.DLL::GetKeyboardType
 */

int __stdcall GetKeyboardType(int nTypeFlag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardType(nTypeFlag);
  return iVar1;
}


